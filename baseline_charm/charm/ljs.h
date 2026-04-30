#ifndef LJS_H_
#define LJS_J_

#include "miniMD.decl.h"
#include "block.decl.h"
#include "ljs_kokkos.h"

struct InstanceHolder {
  ExecSpace compute_instance;
  ExecSpace h2d_instance;
  ExecSpace d2h_instance;
  ExecSpace pack_instance;
  ExecSpace unpack_instance;
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
