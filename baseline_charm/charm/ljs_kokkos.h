#ifndef LJS_KOKKOS_H_
#define LJS_KOKKOS_H_

#include "types.h"

#undef ALIGN
#undef ALIGN_BYTES

#include "Kokkos_Core.hpp"
#include "Kokkos_DualView.hpp"
#include <type_traits>
#include <cassert>
#include "hapi.h"
#include "hapi_portable.h"
#include <cstdio>
#include <cstdlib>

// hapiMemcpy2D: synchronous 2D device-to-device copy (not provided by hapi_portable.h)
#ifdef KOKKOS_ENABLE_CUDA
#define hapiMemcpy2D(dst, dpitch, src, spitch, width, height, kind) \
    cudaMemcpy2D(dst, dpitch, src, spitch, width, height, kind)
#elif defined(KOKKOS_ENABLE_HIP)
#define hapiMemcpy2D(dst, dpitch, src, spitch, width, height, kind) \
    hipMemcpy2D(dst, dpitch, src, spitch, width, height, kind)
#endif

typedef Kokkos::DefaultExecutionSpace DeviceType;
typedef Kokkos::HostSpace::execution_space HostType;

typedef Kokkos::DualView<MMD_float*[PAD],Kokkos::LayoutRight> x_dual_view_type;
typedef Kokkos::DualView<MMD_float*> float_1d_dual_view_type;
typedef Kokkos::DualView<MMD_float**> float_2d_dual_view_type;
typedef Kokkos::DualView<MMD_int*> int_1d_dual_view_type;
typedef Kokkos::DualView<MMD_int**> int_2d_dual_view_type;
typedef Kokkos::DualView<MMD_int> int_dual_view_type;

typedef Kokkos::View<MMD_float*[PAD],Kokkos::LayoutRight> x_view_type;
typedef Kokkos::View<MMD_float**> float_2d_view_type;
typedef Kokkos::View<MMD_float*> float_1d_view_type;
typedef Kokkos::View<MMD_int*> int_1d_view_type;
typedef Kokkos::View<MMD_int**> int_2d_view_type;
typedef Kokkos::View<MMD_int**,Kokkos::LayoutRight> int_2d_lr_view_type;
typedef Kokkos::View<MMD_int> int_view_type;

typedef Kokkos::View<const MMD_float*[PAD],Kokkos::LayoutRight> x_const_view_type;
typedef Kokkos::View<const MMD_int*> int_1d_const_view_type;
typedef Kokkos::View<const MMD_int**> int_2d_const_view_type;

typedef Kokkos::View<MMD_float*[PAD],Kokkos::LayoutRight,Kokkos::MemoryTraits<Kokkos::Atomic> > x_atomic_view_type;
typedef Kokkos::View<MMD_float**,Kokkos::MemoryTraits<Kokkos::Atomic> > float_2d_atomic_view_type;
typedef Kokkos::View<MMD_float*,Kokkos::MemoryTraits<Kokkos::Atomic> > float_1d_atomic_view_type;
typedef Kokkos::View<MMD_float,Kokkos::MemoryTraits<Kokkos::Atomic> > float_atomic_view_type;
typedef Kokkos::View<MMD_int*,Kokkos::MemoryTraits<Kokkos::Atomic> > int_1d_atomic_view_type;
typedef Kokkos::View<MMD_int**,Kokkos::MemoryTraits<Kokkos::Atomic> > int_2d_atomic_view_type;

typedef Kokkos::View<MMD_float*[PAD],Kokkos::LayoutRight,Kokkos::MemoryTraits<Kokkos::Atomic|Kokkos::Unmanaged> > x_atomic_um_view_type;
typedef Kokkos::View<MMD_float*,Kokkos::MemoryTraits<Kokkos::Atomic|Kokkos::Unmanaged> > float_1d_atomic_um_view_type;

typedef Kokkos::View<const MMD_float*[PAD],Kokkos::LayoutRight,Kokkos::MemoryTraits<Kokkos::RandomAccess> > x_rnd_view_type;
typedef Kokkos::View<const MMD_float**,Kokkos::MemoryTraits<Kokkos::RandomAccess> > float_2d_rnd_view_type;
typedef Kokkos::View<const MMD_float*,Kokkos::MemoryTraits<Kokkos::RandomAccess> > float_1d_rnd_view_type;
typedef Kokkos::View<const MMD_int*,Kokkos::MemoryTraits<Kokkos::RandomAccess> > int_1d_rnd_view_type;
typedef Kokkos::View<const MMD_int**,Kokkos::MemoryTraits<Kokkos::RandomAccess> > int_2d_rnd_view_type;

typedef Kokkos::View<MMD_float*[PAD],Kokkos::LayoutRight,Kokkos::MemoryTraits<Kokkos::Unmanaged>> x_um_view_type;
typedef Kokkos::View<MMD_int*,Kokkos::MemoryTraits<Kokkos::Unmanaged> > int_1d_um_view_type;
typedef Kokkos::View<MMD_float*, Kokkos::MemoryTraits<Kokkos::Unmanaged>> float_1d_um_view_type;
typedef Kokkos::View<MMD_int**,Kokkos::LayoutRight, Kokkos::MemoryTraits<Kokkos::Unmanaged>> int_2d_um_lr_view_type;
typedef Kokkos::View<const MMD_float*[PAD],Kokkos::LayoutRight,  Kokkos::MemoryTraits<Kokkos::RandomAccess | Kokkos::Unmanaged>> x_rnd_um_view_type;

typedef typename x_view_type::host_mirror_type x_host_view_type;
typedef typename float_1d_view_type::host_mirror_type float_1d_host_view_type;
typedef typename float_2d_view_type::host_mirror_type float_2d_host_view_type;
typedef typename int_1d_view_type::host_mirror_type int_1d_host_view_type;
typedef typename int_2d_view_type::host_mirror_type int_2d_host_view_type;
typedef typename int_view_type::host_mirror_type int_host_view_type;

#ifdef KOKKOS_ENABLE_CUDA
using DeviceHostPinnedSpace = Kokkos::CudaHostPinnedSpace;
#elif defined(KOKKOS_ENABLE_HIP)
using DeviceHostPinnedSpace = Kokkos::HIPHostPinnedSpace;
#endif

inline hapiStream_t kokkos_instance_stream(const Kokkos::DefaultExecutionSpace& instance) {
#ifdef KOKKOS_ENABLE_CUDA
  return instance.cuda_stream();
#elif defined(KOKKOS_ENABLE_HIP)
  return instance.hip_stream();
#else
  return 0;
#endif
}

typedef typename Kokkos::DefaultExecutionSpace::scratch_memory_space SharedSpace;
typedef Kokkos::View<float*[3], Kokkos::LayoutLeft, SharedSpace, Kokkos::MemoryTraits<Kokkos::Unmanaged> > neighbor_pos_shared_type;
typedef Kokkos::View<int*, SharedSpace, Kokkos::MemoryTraits<Kokkos::Unmanaged> > int_1d_shared_type;

typedef Kokkos::View<int**,Kokkos::LayoutLeft,SharedSpace,Kokkos::MemoryUnmanaged> t_shared_2d_int;
typedef Kokkos::View<float**[3],Kokkos::LayoutLeft,SharedSpace,Kokkos::MemoryUnmanaged> t_shared_pos;

struct eng_virial_type {
  MMD_float eng;
  MMD_float virial;
  KOKKOS_INLINE_FUNCTION
  eng_virial_type() {eng = 0.0; virial = 0.0;}

  KOKKOS_INLINE_FUNCTION
  eng_virial_type& operator += (const eng_virial_type& src) {
    eng+=src.eng;
    virial+=src.virial;
    return *this;
  }
  KOKKOS_INLINE_FUNCTION
  void operator += (const volatile eng_virial_type& src) volatile {
    eng+=src.eng;
    virial+=src.virial;
  }
};

template <class ViewType>
void resize_unmanaged_1d_views(
    ViewType& view,
    size_t new_n0,
    hapiStream_t stream = 0)
{

    hapiStreamSynchronize(stream);
    static_assert(ViewType::memory_traits::is_unmanaged,
                  "Requires unmanaged view");

    static_assert(std::is_same_v<
                    typename ViewType::memory_space,
                    typename Kokkos::DefaultExecutionSpace::memory_space>,
                  "Only supports device memory space");

    static_assert(ViewType::rank == 1, "Only rank-1 supported");

    using value_type = typename ViewType::value_type;

    value_type* old_ptr = view.data();

    const size_t old_n0 = view.extent(0);

    value_type* new_ptr = nullptr;
    hapiCheck(hapiMalloc(&new_ptr,
                    new_n0 * sizeof(value_type)));

    const size_t copy_n0 = std::min(old_n0, new_n0);
    if (copy_n0 > 0) {
        hapiCheck(hapiMemcpy(
            new_ptr,
            old_ptr,
            copy_n0 * sizeof(value_type),
            hapiMemcpyDeviceToDevice));
    }

    if (old_ptr) {
        hapiCheck(hapiFree(old_ptr));
    }

    view = ViewType(new_ptr, new_n0);

    // if(stream==0)
    Kokkos::fence();
}

template <class ViewType>
void resize_unmanaged_2d_views(
    ViewType& view,
    size_t new_n0, // New Rows
    size_t new_n1, // New Cols
    hapiStream_t stream = 0)
{
    hapiStreamSynchronize(stream);
    static_assert(ViewType::memory_traits::is_unmanaged, "Requires unmanaged view");
    static_assert(std::is_same_v<typename ViewType::memory_space, typename Kokkos::DefaultExecutionSpace::memory_space>, "Only supports device memory space");
    static_assert(ViewType::rank == 2, "Only rank-2 supported");

    using Layout = typename ViewType::array_layout;
    static_assert(
        std::is_same_v<Layout, Kokkos::LayoutRight> || 
        std::is_same_v<Layout, Kokkos::LayoutLeft>, 
        "Only supports LayoutRight or LayoutLeft"
    );

    using value_type = typename ViewType::value_type;
    value_type* old_ptr = view.data();
    const size_t old_n0 = view.extent(0);
    const size_t old_n1 = view.extent(1);

    value_type* new_ptr = nullptr;
    size_t new_size_bytes = new_n0 * new_n1 * sizeof(value_type);
    
    if (new_size_bytes > 0) {
        hapiCheck(hapiMalloc(&new_ptr, new_size_bytes));
    }

    if (old_ptr && new_ptr && old_n0 > 0 && old_n1 > 0) {

        size_t dpitch, spitch, width, height;

        if constexpr (std::is_same_v<Layout, Kokkos::LayoutRight>) {
            // --- LAYOUT RIGHT (Row-Major) ---
            // "Width" is the contiguous row length in bytes.
            // "Height" is the number of rows.
            // "Pitch" is the stride between the start of two rows (n1 * sizeof).

            width  = std::min(old_n1, new_n1) * sizeof(value_type); // Bytes to copy per row
            height = std::min(old_n0, new_n0);                      // Number of rows
            spitch = old_n1 * sizeof(value_type);
            dpitch = new_n1 * sizeof(value_type);

        } else {
            // --- LAYOUT LEFT (Column-Major) ---
            // "Width" is the contiguous column length in bytes.
            // "Height" is the number of columns.
            // "Pitch" is the stride between the start of two columns (n0 * sizeof).

            width  = std::min(old_n0, new_n0) * sizeof(value_type); // Bytes to copy per col
            height = std::min(old_n1, new_n1);                      // Number of cols
            spitch = old_n0 * sizeof(value_type);
            dpitch = new_n0 * sizeof(value_type);
        }

        hapiCheck(hapiMemcpy2D(
            new_ptr, dpitch,
            old_ptr, spitch,
            width, height,
            hapiMemcpyDeviceToDevice));
    }

    // 3. Free Old Memory
    if (old_ptr) {
        hapiCheck(hapiFree(old_ptr));
    }

    // 4. Reconstruct View
    view = ViewType(new_ptr, new_n0, new_n1);

// if(stream==0)
    Kokkos::fence();
}

#endif // __LJS_KOKKOS_H_
