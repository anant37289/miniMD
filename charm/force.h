/* ----------------------------------------------------------------------
   miniMD is a simple, parallel molecular dynamics (MD) code.   miniMD is
   an MD microapplication in the Mantevo project at Sandia National
   Laboratories ( http://www.mantevo.org ). The primary
   authors of miniMD are Steve Plimpton (sjplimp@sandia.gov) , Paul Crozier
   (pscrozi@sandia.gov) and Christian Trott (crtrott@sandia.gov).

   Copyright (2008) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This library is free software; you
   can redistribute it and/or modify it under the terms of the GNU Lesser
   General Public License as published by the Free Software Foundation;
   either version 3 of the License, or (at your option) any later
   version.

   This library is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this software; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
   USA.  See also: http://www.gnu.org/licenses/lgpl.txt .

   For questions, contact Paul S. Crozier (pscrozi@sandia.gov) or
   Christian Trott (crtrott@sandia.gov).

   Please read the accompanying README and LICENSE files.
---------------------------------------------------------------------- */

#ifndef FORCE_H_
#define FORCE_H_

#include "types.h"
#include "atom.h"
#include "neighbor.h"
#include "comm.h"

class Force: public PUP::able
{
  public:
    PUPable_decl(Force);
    Kokkos::Cuda compute_instance;
    Kokkos::Cuda h2d_instance;
    Kokkos::Cuda d2h_instance;
    Kokkos::Cuda pack_instance;
    Kokkos::Cuda unpack_instance;

    MMD_float cutforce;
    float_1d_rnd_view_type cutforcesq;
    MMD_float eng_vdwl;
    MMD_float mass;
    MMD_int evflag;
    MMD_float virial;
    int ntypes;
    int index;

    Force() {};
    Force(CkMigrateMessage* msg){}
    virtual ~Force() {};
    virtual void setup() {};
    virtual void finalise() {};
    virtual void compute(Atom &, Neighbor &, Comm*, int) {};

    int use_sse;
    int use_oldcompute;
    int nthreads;
    MMD_int reneigh;

    float_1d_rnd_view_type epsilon, sigma6, sigma; //Parameters for LJ only
    MMD_float epsilon_scalar, sigma_scalar;

    ForceStyle style;

    MMD_float cutforcesq_s[MAX_STACK_TYPES*MAX_STACK_TYPES];
    MMD_float epsilon_s[MAX_STACK_TYPES*MAX_STACK_TYPES];
    MMD_float sigma6_s[MAX_STACK_TYPES*MAX_STACK_TYPES];

  protected:

    int nlocal;
    int nall;

    int_1d_const_view_type numneigh;                   // # of neighbors for each atom
    int_2d_const_view_type neighbors;                  // array of neighbors of each atom

    x_rnd_view_type x;
    x_view_type f;
    x_atomic_view_type f_a;
    int_1d_rnd_view_type type;

    MMD_int me;
  public:
    virtual void pup(PUP::er &p)
    {
      PUP::able::pup(p);
      p| cutforce;
      p| eng_vdwl;
      p| mass;
      p| evflag;
      p| virial;
      p| ntypes;
      p| index;
      p| use_sse;
      p| use_oldcompute;
      p| nthreads;
      p| reneigh;
      p| epsilon_scalar;
      p| sigma_scalar;
      p| style;
      for(int i=0;i<MAX_STACK_TYPES*MAX_STACK_TYPES;i++)
      {
        p| cutforcesq_s[i];
        p| epsilon_s[i];
        p| sigma6_s[i];
      }
      p| nlocal;
      p| nall;
      p| me;


      if(p.isUnpacking())
      {
        if(style==FORCELJ)
        {// no need to pup nuneigh, neigbors, x, f, f_a, type -> temporary references in force::calcuate
          cutforcesq = float_1d_view_type("ForceEAM::cutforcesq",ntypes*ntypes);
          epsilon = float_1d_view_type("ForceLJ::epsilon",ntypes*ntypes);
          sigma6 = float_1d_view_type("ForceLJ::sigma6",ntypes*ntypes);
          sigma = float_1d_view_type("ForceLJ::sigma",ntypes*ntypes);
        }
        else
        {
          //TODO: check if this is correct with force EAM: do we want to port force EAM?
          CmiAbort("Force style not supported");
        }
      }
      p(cutforcesq.data(), ntypes*ntypes, PUP::PUPMode::DEVICE);
      p(epsilon.data(), ntypes*ntypes, PUP::PUPMode::DEVICE);
      p(sigma6.data(), ntypes*ntypes, PUP::PUPMode::DEVICE);
      p(sigma.data(), ntypes*ntypes, PUP::PUPMode::DEVICE);
    }
};

#endif
