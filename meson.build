project('npycomplex', 'c', 'cython')

py_mod = import('python')
py3 = py_mod.find_installation()
py3_dep = py3.dependency()

incdir_numpy = run_command(py3,
  ['-c', 'import os; os.chdir(".."); import numpy; print(numpy.get_include())'],
  check : true
).stdout().strip()
inc_np = include_directories(incdir_numpy)

inc_lib = include_directories('.')

subdir('c')
subdir('cython')
