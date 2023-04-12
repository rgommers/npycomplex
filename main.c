#include <stdio.h>
#include <complex.h>
#include <math.h>

#if defined(_MSC_VER) && !defined(__INTEL_COMPILER)
typedef _Dcomplex dcomp;
#else
typedef double complex dcomp;
#endif

void print_complex(const char* note, dcomp z)
{
    printf("%s %f%+f*i\n", note, creal(z), cimag(z));
}
 
int main(void)
{
    dcomp z = -1.0 + 2.0*I;
    print_complex("z  =", z);
    print_complex("z\u00B2 =", z * z);
    dcomp z2 = ccos(2.0 * carg(z)) + csin(2.0 * carg(z))*I;
    print_complex("z\u00B2 =", cabs(z) * cabs(z) * z2);
}
