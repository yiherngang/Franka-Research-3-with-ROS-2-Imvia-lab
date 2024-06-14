from setuptools import find_packages
from setuptools import setup

setup(
    name='franka_gripper',
    version='0.1.13',
    packages=find_packages(
        include=('franka_gripper', 'franka_gripper.*')),
)
