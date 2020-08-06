## cpp_project
A template setup for cpp project.

It contains the following:
* CMake as a build tool
* TravisCI for continuous integration
* Google Tests for testing the project libraries
* Google Benchmark for benchmarking the project libraries
* Documentation on readthedocs.org built using Sphinx, Doxygen and breathe.

The template documentation for this project is on [readthedocs](https://cpp-project-setup.readthedocs.io/en/latest/).

#### Build Status
<img src="https://travis-ci.com/wasimusu/cpp_project.svg?branch=master" width="100">
<img src="https://readthedocs.org/projects/graphs/badge/?version=latest">


### Platform
* CMake
* C++11
* Clang
* Linux (Xenial/Ubuntu 18.04)

### Build
As prequisites, CMAKE and git needs to be already installed.
```
cd graphs
sh install.sh
```

### Generating Documentation
To generate documentation on readthedocs.org, do the following:
- On readthedocs.org, select your project for generating documentation and build.

To generate documentation locally:
```
cd docs
make html
```
Open the docs/build/html/index.html in your browser to view the documentation on localhost.