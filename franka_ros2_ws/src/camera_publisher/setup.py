from setuptools import find_packages, setup

package_name = 'camera_publisher'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='adminlab',
    maintainer_email='joaquinrodriguez1991@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        	"intel_pub =  youtube_robot.intel_pub:main",
        	"intel_sub =  youtube_robot.intel_sub:main"
        ],
    },
)
