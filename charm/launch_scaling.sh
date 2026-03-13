#!/bin/bash

# Configuration
GPUS_PER_NODE=4
BASE_NX=400
BASE_NY=400
BASE_NZ=400
MAX_GPUS=4

# Parse arguments
usage() {
    echo "Usage: $0 [options]"
    echo "Options:"
    echo "  -g, --gpus-per-node N   Number of GPUs per node (default: 4)"
    echo "  -m, --max-gpus N        Maximum total GPUs to scale to (default: 16)"
    echo "  -x, --base-nx N          Base problem nx for 1 GPU (default: 150)"
    echo "  -y, --base-ny N          Base problem ny for 1 GPU (default: 150)"
    echo "  -z, --base-nz N          Base problem nz for 1 GPU (default: 150)"
    echo "  --dry-run               Print commands without running them"
    exit 1
}

DRY_RUN=false

while [[ $# -gt 0 ]]; do
    key="$1"
    case $key in
        -g|--gpus-per-node)
        GPUS_PER_NODE="$2"
        shift; shift
        ;;
        -m|--max-gpus)
        MAX_GPUS="$2"
        shift; shift
        ;;
        -x|--base-nx)
        BASE_NX="$2"
        shift; shift
        ;;
        -y|--base-ny)
        BASE_NY="$2"
        shift; shift
        ;;
        -z|--base-nz)
        BASE_NZ="$2"
        shift; shift
        ;;
        --dry-run)
        DRY_RUN=true
        shift
        ;;
        *)
        usage
        ;;
    esac
done

echo "Starting weak scaling experiments..."
echo "Base Size: ${BASE_NX}x${BASE_NY}x${BASE_NZ}"
echo "GPUs/Node: $GPUS_PER_NODE"
echo "Max GPUs: $MAX_GPUS"

ODF_LIST=(1 2 4 7 8 10 11 16)
current_gpus=4
current_nx=$BASE_NX
current_ny=$BASE_NY
current_nz=$BASE_NZ

while [ $current_gpus -le $MAX_GPUS ]; do
    
    # Calculate Node distribution
    if [ $current_gpus -lt $GPUS_PER_NODE ]; then
        NODES=1
        TASKS_PER_NODE=$current_gpus
    else
        NODES=$((current_gpus / GPUS_PER_NODE))
        TASKS_PER_NODE=$GPUS_PER_NODE
    fi

    echo "----------------------------------------------------------------"
    echo "Scale Step: $current_gpus GPUs ($NODES Nodes x $TASKS_PER_NODE Gpus/Node)"
    echo "Problem Size: ${current_nx}x${current_ny}x${current_nz}"

    for odf in "${ODF_LIST[@]}"; do
        # Calculate N (Total Chares)
        # N = TotalGPUs * ODF
        N=$((current_gpus * odf))
        
        # Calculate PPN candidates
        ppn_list=()
        p=$odf
        while true; do
            ### delta cpus on a single node constraint
            if [ "$p" -lt 16 ]; then
                ppn_list+=( "$p" )
            else
                ppn_list+=( 15 )
            fi
                
            # stop if we've reached 1
            if [ "$p" -eq 1 ]; then
                break
            fi
            # if p is odd, dividing by 2 would not be integer -> stop
            if [ $(( p % 2 )) -ne 0 ]; then
                ppn_list+=( 1 )
                break
            fi
            # else perfectly divisible by 2, continue
            p=$(( p / 2 ))
        done

        for ppn in "${ppn_list[@]}"; do
            echo "  Launching: N=$N (ODF=$odf), PPN=$ppn"

            # Export variables for the sbatch script
            export NP=$current_gpus
            export NX=$current_nx
            export NY=$current_ny
            export NZ=$current_nz
            export N=$N
            export PPN=$ppn
            export ODF=$odf

            ## will need to adjust cpus per task for the node configs/take exclusive nodes for more than 1 node experiments (also the partitions and salloc for differnet machines)
            CMD="sbatch --nodes=$NODES --ntasks-per-node=$TASKS_PER_NODE --cpus-per-task=16  --partition=gpuA100x4  --account=mzu-delta-gpu --gpus-per-node=$TASKS_PER_NODE --time=00:15:00 experiment_job.slurm"
            
            if [ "$DRY_RUN" = true ]; then
                echo "    [DRY-RUN] $CMD (Env: NP=$NP NX=$NX NY=$NY NZ=$NZ N=$N PPN=$PPN)"
            else
                $CMD
            fi
        done
    done

    # Prepare for next step
    current_gpus=$((current_gpus * 2))

    if [ $current_nx -le $current_ny ] && [ $current_nx -le $current_nz ]; then
        current_nx=$((current_nx * 2))
    elif [ $current_ny -le $current_nz ]; then
        current_ny=$((current_ny * 2))
    else
        current_nz=$((current_nz * 2))
    fi
done
