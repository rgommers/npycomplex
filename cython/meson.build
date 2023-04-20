src = ['npycomplex.pyx', '../lib/print.c']
py3.extension_module('npycomplex',
           src,
           c_args: ['-DNPY_NO_DEPRECATED_API', '-DNPY_1_7_API_VERSION'],
           include_directories: [inc_np, inc_lib],
           dependencies : py3_dep)
