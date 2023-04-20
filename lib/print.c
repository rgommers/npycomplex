#include <stdio.h>
#include <numpy/npy_common.h>

void npy_complex_print(npy_complex64 *a)
{
    printf("a = %p\n", a);
    printf("*a = %f%+f*i\n", a->real, a->imag);
}
