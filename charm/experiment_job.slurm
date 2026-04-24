#!/bin/bash

# Default values if not provided via sbatch export
if [ -z "$NP" ]; then echo "Error: NP (total GPUs) not set"; exit 1; fi
if [ -z "$NX" ]; then echo "Error: NX (x dim) not set"; exit 1; fi
if [ -z "$NY" ]; then echo "Error: NY (y dim) not set"; exit 1; fi
if [ -z "$NZ" ]; then echo "Error: NZ (z dim) not set"; exit 1; fi
if [ -z "$OUTPUT_FILE" ]; then echo "Error: OUTPUT_FILE not set"; exit 1; fi

RESULT_FILE=$OUTPUT_FILE
NUM_RUNS=3

# Initialize result file header if it doesn't exist
if [ ! -f "$RESULT_FILE" ]; then
    echo "TotalGPUs,Nodes,Chares,ODF,PPN,NX,NY,NZ,AvgTotalTime" > "$RESULT_FILE"
fi

echo "Starting $NUM_RUNS runs for: NP=$NP Nodes=$SLURM_NNODES NX=$NX NY=$NY NZ=$NZ"

# Variables to store the running totals

# Environment setup
# Assuming environment is already set up or inherited, but setting explicit exports if needed
export LD_LIBRARY_PATH=/u/ajain18/oldCharm/multicore-linux-x86_64-cuda/lib:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH=/u/ajain18/reconverse_charm_integration/lci_install/lib64:$LD_LIBRARY_PATH
export LCI_ATTR_BACKEND=ofi
export FI_CXI_RX_MATH_MODE=hybrid
export LCI_ATTR_BACKEND=ofi
export FI_CXI_RX_MATH_MODE=hybrid
export OFI_ROOT=/opt/cray/libfabric/1.15.2.0
export LCI_ROOT=/u/ajain18/reconverse_charm_integration/lci_install
export FI_MR_CACHE_MONITOR=userfaultfd
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/u/ajain18/hapi_hip/shogo/charm/kokkos/install/lib64
export PMI_MAX_KVS_ENTRIES=4096

read -r -a ODF_LIST <<< "$ODF_LIST_STR"

for odf in "${ODF_LIST[@]}"; do
    # Calculate N (Total Chares)
    # N = TotalGPUs * ODF
    N=$((NP * odf))
    
    # Calculate PPN candidates
    ppn_list=()
    p=$odf
    while true; do
        ppn_list+=( "$p" )
        # stop if we've reached 1
        if [ "$p" -eq 1 ]; then
            break
        fi
        # if p is odd, dividing by 2 would not be integer -> stop
        if [ $(( p % 2 )) -ne 0 ]; then
            break
        fi
        # else perfectly divisible by 2, continue
        p=$(( p / 2 ))
    done
    for ppn in "${ppn_list[@]}"; do
        TOTAL_TIME_SUM=0
        OUTPUT_LOG="logs/run_${NP}_${NX}_${NY}_${NZ}_${odf}_${ppn}.log"
        CMD_RUN="srun --mpi=cray_shasta -n $NP /u/ajain18/miniMD/baseline_charm/charm/build/miniMD +pe $((NP * ppn)) -t 0 -nx $NX -ny $NY -nz $NZ -c $N -n 100 --half_neigh 0 -gn 0 --yaml_output 0 -i /u/ajain18/miniMD/inputs/in.lj.miniMD +gpushm +gpuipceventpool 32 +allgpus +gpucommbuffer 4096 --sort 1"
        if [ "$DRY_RUN" = true ]; then
            echo "    [DRY-RUN] $CMD_RUN > $OUTPUT_LOG (Env: NP=$NP NX=$NX NY=$NY NZ=$NZ N=$N PE=$((NP * ppn)))"
            continue
        fi
        for i in $(seq 1 $NUM_RUNS); do 
            $CMD_RUN > "$OUTPUT_LOG"
            if [ $? -ne 0 ]; then
                echo "Error: srun failed on run $i"
                exit 1
            fi
    
        VAL=$(grep -F "Total time (exclude 1st iteration):" "$OUTPUT_LOG" | awk '{print $(NF-1)}' | tail -n1)
    
            if [ -n "$VAL" ]; then
                echo "  Run $i time: $VAL"
                TOTAL_TIME_SUM=$(echo "$TOTAL_TIME_SUM + $VAL" | bc)
            else
                echo "WARNING: no total time found for run $i"
            fi
        done
    if [ "$DRY_RUN" = true ]; then
        continue
    fi
    AVG_TOTAL_TIME=$(echo "scale=6; $TOTAL_TIME_SUM / $NUM_RUNS" | bc)
    echo "$NP,$SLURM_NNODES,$N,$odf,$ppn,$NX,$NY,$NZ,$AVG_TOTAL_TIME" >> "$RESULT_FILE"
    done
done

# MPI run (Kokkos/MPI baseline)
MPI_RESULT_FILE=MPI_${OUTPUT_FILE}

echo "MPI: NP=$NP NX=$NX NY=$NY NZ=$NZ"

export MPICH_GPU_SUPPORT_ENABLED=1
export MPICH_GPU_DEBUG=1
export MPICH_OFI_VERBOSE=1
export FI_HMEM=cuda
export FI_CXI_ATS=0

if [ "$DRY_RUN" = true ]; then
    echo "    [DRY-RUN] MPI run with NP=$NP NX=$NX NY=$NY NZ=$NZ"
    exit 0
fi

TOTAL_TIME_SUM=0


OUTPUT_LOG="logs/run_${NP}_MPI.log"
CMD_MPI_RUN="srun --mpi=cray_shasta -u -n $NP /u/ajain18/miniMD/kokkos/build/miniMD -t 0 -nx $NX -ny $NY -nz $NZ -n 100 --half_neigh 0 -gn 0 --yaml_output 0 -i /u/ajain18/miniMD/inputs/in.lj.miniMD +gpushm --sort 1"

for i in $(seq 1 $NUM_RUNS); do
    echo "--- MPI Run $i of $NUM_RUNS ---"

    $CMD_MPI_RUN > "$OUTPUT_LOG" 2>&1

    if [ $? -ne 0 ]; then
        echo "Error: srun failed on run $i"
        cat "$OUTPUT_LOG"
        exit 1
    fi

    VAL=$(grep "PERF_SUMMARY" "$OUTPUT_LOG" | awk '{print $5}' | tail -n1)
    if [ -z "$VAL" ]; then
        echo "Error: Could not parse total time from $OUTPUT_LOG"
        exit 1
    fi
    echo "  Run $i time: $VAL"
    TOTAL_TIME_SUM=$(echo "$TOTAL_TIME_SUM + $VAL" | bc)
done

AVG_TOTAL_TIME=$(echo "scale=6; $TOTAL_TIME_SUM / $NUM_RUNS" | bc)
if [ ! -f "$MPI_RESULT_FILE" ]; then
    echo "TotalGPUs,Nodes,NX,NY,NZ,AvgTotalTime" > "$MPI_RESULT_FILE"
fi
echo "MPI Run Average: Total=$AVG_TOTAL_TIME s"
echo "$NP,$SLURM_NNODES,$NX,$NY,$NZ,$AVG_TOTAL_TIME" >> "$MPI_RESULT_FILE"