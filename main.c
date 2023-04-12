#include <stdio.h>
#include <complex.h>
#include <math.h>

#if defined(_MSC_VER) && !defined(__INTEL_COMPILER)
typedef _Dcomplex dcomp;
#define CBuild(r, i) {r, i}
#define CMul(r, i) _Cmulcc((r), (i))
#else
typedef double complex dcomp;
#define CBuild(r, i) ((r) + (i) * I)
#define CMul(r, i) ((r) * (i))
#endif

void print_complex(const char* note, dcomp z)
{
    printf("%s %f%+f*i\n", note, creal(z), cimag(z));
}
 
int main(void)
{
    dcomp z = CBuild(-1.0, 2.0);
    print_complex("z  =", z);
    print_complex("z\u00B2 =", CMul(z, z));
    // dcomp z2 = ccos(2.0 * carg(z)) + csin(2.0 * carg(z))*I;
    // print_complex("z\u00B2 =", cabs(z) * cabs(z) * z2);
}
