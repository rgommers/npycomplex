from numpy cimport npy_complex64

cdef extern from "lib/print.h":
    void npy_complex_print(npy_complex64 *)

cdef union NumpyComp:
    float complex native_value
    npy_complex64 numpy_value


def main():
    cdef NumpyComp example = NumpyComp(native_value=2+3j)
    npy_complex_print(&example.numpy_value)
