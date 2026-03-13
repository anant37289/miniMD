#!/bin/bash

# Default values if not provided via sbatch export
if [ -z "$NP" ]; then echo "Error: NP (total GPUs) not set"; exit 1; fi
if [ -z "$NX" ]; then echo "Error: NX (x dim) not set"; exit 1; fi
if [ -z "$NY" ]; then echo "Error: NY (y dim) not set"; exit 1; fi
if [ -z "$NZ" ]; then echo "Error: NZ (z dim) not set"; exit 1; fi
if [ -z "$N" ]; then echo "Error: N (chares) not set"; exit 1; fi
if [ -z "$PPN" ]; then echo "Error: PPN (PEs per GPU) not set"; exit 1; fi
if [ -z "$ODF" ]; then ODF="-"; fi

RESULT_FILE="weak_scaling_results.csv"
NUM_RUNS=3

# Initialize result file header if it doesn't exist
if [ ! -f "$RESULT_FILE" ]; then
    echo "TotalGPUs,Nodes,Chares,ODF,PPN,NX,NY,NZ,AvgTotalTime" > "$RESULT_FILE"
fi

echo "Starting $NUM_RUNS runs for: NP=$NP Nodes=$SLURM_NNODES NX=$NX NY=$NY NZ=$NZ N=$N PPN=$PPN"

# Variables to store the running totals
TOTAL_TIME_SUM=0

# Environment setup
# Assuming environment is already set up or inherited, but setting explicit exports if needed
export MPICH_GPU_SUPPORT_ENABLED=1
export MPICH_GPU_DEBUG=1
export MPICH_OFI_VERBOSE=1
export FI_HMEM=cuda
export FI_CXI_ATS=0
### adjust for paths
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/u/ajain18/hapi_hip/shogo/charm/kokkos/install_a100/lib64

for i in $(seq 1 $NUM_RUNS); do    
    OUTPUT_LOG="run_${SLURM_JOB_ID}_${i}.log"
    
    ## change the path to miniMD and input files
    ### adjust for paths
    srun -n $NP ./build_a100/miniMD ++ppn $PPN -t 0 -nx $NX -ny $NY -nz $NZ -c $N -n 100 --half_neigh 0 -gn 0 --yaml_output 0 -i /u/ajain18/miniMD/inputs/in.lj.miniMD +gpushm +gpuipceventpool 32 +allgpus +gpucommbuffer 1024 > "$OUTPUT_LOG" 2>&1

    if [ $? -ne 0 ]; then
        echo "Error: srun failed on run $i"
        # exit to be safe
        cat "$OUTPUT_LOG"
        rm "$OUTPUT_LOG"
        exit 1
    fi

    # Extract Total time (exclude 1st iteration)
    VAL=$(grep -F "Total time (exclude 1st iteration):" "$OUTPUT_LOG" | awk '{print $(NF-1)}' | tail -n1)
    
    if [ -n "$VAL" ]; then
        echo "  Run $i time: $VAL"
        TOTAL_TIME_SUM=$(echo "$TOTAL_TIME_SUM + $VAL" | bc)
    else
        echo "WARNING: no total time found for run $i"
    fi

    # Clean up individual log
    rm "$OUTPUT_LOG"
done

# Calculate averages using 'bc'
AVG_TOTAL_TIME=$(echo "scale=6; $TOTAL_TIME_SUM / $NUM_RUNS" | bc)

# echo "Final Average: Total=$AVG_TOTAL_TIME s"

# Append averages to CSV
echo "$NP,$SLURM_NNODES,$N,$ODF,$PPN,$NX,$NY,$NZ,$AVG_TOTAL_TIME" >> "$RESULT_FILE"
