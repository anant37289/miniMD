#KOKKOS_PATH ?= $(HOME)/kokkos/install
KOKKOS_PATH = /ccs/home/rrao/kokkos
KOKKOS_INC = $(KOKKOS_PATH)/include
KOKKOS_LIB = $(KOKKOS_PATH)/lib64

ROCM_PATH ?= /opt/rocm
HIP_COMPILER = $(ROCM_PATH)/bin/hipcc

OPTS = -O3 -std=c++17

CHARM_PATH = /ccs/home/rrao/charm_reconverse/multicore-linux-x86_64
CHARM_INC = $(CHARM_PATH)/include
CHARMC = $(CHARM_PATH)/bin/charmc -c++ $(HIP_COMPILER) $(OPTS) -I$(CHARM_INC) -I$(KOKKOS_INC)
CHARM_LD = $(CHARM_PATH)/bin/charmc $(OPTS)

TARGET = miniMD

all: $(TARGET)

$(TARGET): ljs.o input.o atom.o neighbor.o comm.o force_eam.o force_lj.o integrate.o thermo.o setup.o block.o
	$(CHARM_LD) -language charm++ -L$(KOKKOS_LIB) -lkokkoscore -L$(ROCM_PATH)/lib -lamdhip64 -o $@ $^

$(TARGET).decl.h: ljs.ci
	$(CHARMC) $<

$(TARGET).def.h: ljs.ci

test: test.ci
	$(CHARMC) $<

%.o: %.cpp $(TARGET).decl.h $(TARGET).def.h
	$(CHARMC) -c $<

clean:
	rm -f $(TARGET) *.decl.h *.def.h *.o charmrun

clean-nsys:
	rm -f *.qdrep *.qdstrm *.sqlite

clean-nvprof:
	rm -f *.nvvp
	