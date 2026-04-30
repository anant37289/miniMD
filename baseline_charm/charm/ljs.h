#ifndef LJS_H_
#define LJS_J_

#include "miniMD.decl.h"
#include "block.decl.h"
#include "ljs_kokkos.h"

struct InstanceHolder {
  Kokkos::DefaultExecutionSpace compute_instance;
  Kokkos::DefaultExecutionSpace h2d_instance;
  Kokkos::DefaultExecutionSpace d2h_instance;
  Kokkos::DefaultExecutionSpace pack_instance;
  Kokkos::DefaultExecutionSpace unpack_instance;
};

class KokkosManager : public CBase_KokkosManager {
public:
  KokkosManager();
  void finalize();
  void initialize();
};

class blockCommProxy : public CBase_blockCommProxy {
  public:
  int num_contrib;
  void setblockcomm(CProxy_Block block, CProxy_Comm comm);
  void setblockcommdone();//make comm
};

#endif
