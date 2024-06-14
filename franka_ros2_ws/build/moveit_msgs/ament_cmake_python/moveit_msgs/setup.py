from setuptools import find_packages
from setuptools import setup

setup(
    name='moveit_msgs',
    version='2.2.1',
    packages=find_packages(
        include=('moveit_msgs', 'moveit_msgs.*')),
)
