from setuptools import find_packages
from setuptools import setup

setup(
    name='srdfdom',
    version='2.0.4',
    packages=find_packages(
        include=('srdfdom', 'srdfdom.*')),
)
