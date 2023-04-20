#include <complex.h>
#include <numpy/npy_common.h>

#include "lib/print.h"


#if defined(_MSC_VER) && !defined(__INTEL_COMPILER)
typedef _Fcomplex fcomp;
#define BUILD_FCOMP(r, i) _FCbuild((r), (i))
#else
typedef float complex fcomp;
#define BUILD_FCOMP(r, i) ((r) + (i) * I)
#endif

typedef union {
    fcomp native_value;
    npy_complex64 numpy_value;
} numpy_comp;


int main(void)
{
    numpy_comp example;
    example.native_value = BUILD_FCOMP(2.0f, 3.0f);
    npy_complex_print(&example.numpy_value);
    return 0;
}
