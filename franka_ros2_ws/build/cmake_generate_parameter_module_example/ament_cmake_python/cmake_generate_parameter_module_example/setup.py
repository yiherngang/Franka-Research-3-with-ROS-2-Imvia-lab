from setuptools import find_packages
from setuptools import setup

setup(
    name='cmake_generate_parameter_module_example',
    version='0.3.7',
    packages=find_packages(
        include=('cmake_generate_parameter_module_example', 'cmake_generate_parameter_module_example.*')),
)
