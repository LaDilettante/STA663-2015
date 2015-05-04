from distutils.core import setup, Extension
from Cython.Build import cythonize

ext = Extension("fib2cpp",
              sources=["fib2cpp.pyx", "fib.cpp"],
              language="c++",)

setup(name = "cython_fibcpp",
      ext_modules = cythonize(ext))