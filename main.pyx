def main():
    cdef float complex a, b
    a = 0 + 2j
    b = 1 + 3j
    ret = a + b
    print(f"a+b={ret}")
    return ret