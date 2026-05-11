#Set the path to MPI
MPI_PATH = $(MPI_ROOT)

#Set the path to Kokkos
KOKKOS_PATH = $(HOME)/kokkos

# Build target: "cuda" (default) or "hip" for AMD GPUs
TARGET ?= cuda

# ROCm install path (used when TARGET=hip)
ROCM_PATH ?= /opt/rocm

# Set the Devices to compile for and Architecture
ifeq ($(TARGET), hip)
KOKKOS_DEVICES = HIP
# Default architecture for MI250X (CDNA2) — can be overridden by KOKKOS_ARCH
KOKKOS_ARCH = AMD_GFX90A
else
KOKKOS_DEVICES = Cuda
# Set CUDA defaults
KOKKOS_ARCH = Power9,Volta70
endif
#Set third party library usage
KOKKOS_USE_TPL =

CXXFLAGS = -O3 -g
LINKFLAGS =
LIB =

override CXXFLAGS += -I$(MPI_PATH)/include

# Choose compiler wrapper depending on target
ifeq ($(TARGET), hip)
# Prefer system hipcc for HIP builds
CXX ?= $(ROCM_PATH)/bin/hipcc
# Ensure we define AMD HIP platform macro
override CXXFLAGS += -D__HIP_PLATFORM_AMD__=1
# Link AMD HIP runtime
LINK = mpicxx
LINKFLAGS += -L$(ROCM_PATH)/lib -lamdhip64
else
CXX ?= $(KOKKOS_PATH)/bin/nvcc_wrapper
LINK = mpicxx
endif

EXE = miniMD

#CXXFLAGS += -DTEST_LAMBDA_BYCOPY
#CXXFLAGS += -DTEST_LAMBDA_BYPTR

#Check for single precision
ifeq ($(SP), yes)
override CXXFLAGS += -DPRECISION=1
LINKFLAGS += -DPRECISION=1
else
CXXFLAGS += -DPRECISION=2
LINKFLAGS += -DPRECISION=2
endif

#Check if debug on
ifeq ($(DEBUG), yes)
override CXXFLAGS += -g -G
LINKFLAGS += -g
endif


#Use LIBRT for precision timers
ifeq ($(LIBRT),yes)
override CXXFLAGS += -DPREC_TIMER
KOKKOS_USE_TPL += ,librt
endif

#Check for PAD
ifeq ($(PAD), 3)
override CXXFLAGS += -DPAD3
endif
ifeq ($(PAD), 4)
override CXXFLAGS += -DPAD4
endif

#Check for use of explicit SIMD pragma
ifeq ($(SIMD), yes)
override CXXFLAGS += -DUSE_SIMD
endif

#Check for request of ANSI_ALIAS
ifeq ($(ANSI_ALIAS), yes)
override CXXFLAGS += -ansi-alias
endif


default: all

MAKEFILE_PATH := $(subst Makefile,,$(abspath $(lastword $(MAKEFILE_LIST))))
include $(KOKKOS_PATH)/Makefile.kokkos

SRC = $(wildcard $(MAKEFILE_PATH)*.cpp)
HEADERS = $(wildcard $(MAKEFILE_PATH)*.hpp)

vpath %.cpp $(sort $(dir $(SRC)))
$(warning "MakefilePath: $(MAKEFILE_PATH) SRC: $(SRC) HEADERS: $(HEADERS)")
DEPFLAGS = -M

OBJ = $(notdir $(SRC:.cpp=.o))

all: $(OBJ) $(KOKKOS_LINK_DEPENDS)
	$(LINK) $(LINKFLAGS) $(EXTRA_PATH) $(OBJ) $(KOKKOS_LDFLAGS) $(KOKKOS_LIBS) $(LIB) -o $(EXE)

clean: kokkos-clean
	rm -f *.o *.d libkokkos.a *.cuda *.host $(EXE)

EXTRA_FLAGS = $(KOKKOS_CPPFLAGS) $(KOKKOS_CXXFLAGS)
# Compilation rules

%.o:%.cpp
	$(CXX) $(CXXFLAGS) $(EXTRA_FLAGS) -c $< -o $(notdir $@)


# Test
scope=0
input=lj
halfneigh=0
path=""

test:
	bash run_tests ${scope} ${input} ${halfneigh} ${path}
