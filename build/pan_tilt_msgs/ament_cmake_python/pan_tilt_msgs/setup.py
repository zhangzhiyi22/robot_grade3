from setuptools import find_packages
from setuptools import setup

setup(
    name='pan_tilt_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('pan_tilt_msgs', 'pan_tilt_msgs.*')),
)
