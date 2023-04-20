#include <stdio.h>

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#define NO_IMPORT_ARRAY

#include <numpy/arrayobject.h>

void npy_complex_print(npy_complex64 *a)
{
    printf("a = %p\n", a);
    printf("*a = %f%+f*i\n", a->real, a->imag);
}
