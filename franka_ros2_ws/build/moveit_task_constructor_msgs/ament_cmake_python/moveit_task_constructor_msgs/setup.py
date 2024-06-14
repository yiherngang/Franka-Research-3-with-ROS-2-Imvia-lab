from setuptools import find_packages
from setuptools import setup

setup(
    name='moveit_task_constructor_msgs',
    version='0.1.3',
    packages=find_packages(
        include=('moveit_task_constructor_msgs', 'moveit_task_constructor_msgs.*')),
)
