project('npycomplex', 'cython')

py = import('python').find_installation()
dev_py = py.dependency()
py.extension_module(
    'main',
    'main.pyx',
    dependencies : dev_py,
)
