Welcome to CPP Project's documentation!
=======================================
A template setup for cpp project.

It contains the following:

* CMake as a build tool
* TravisCI for continuous integration
* Google Tests for testing the project libraries
* Google Benchmark for benchmarking the project libraries
* Documentation on readthedocs.org built using Sphinx, Doxygen and breathe.

.. toctree::
   :maxdepth: 2
   :caption: Contents:

Sample usage
------------
This section shows usage of the lib.cpp library to add two numbers.

.. code-block:: cpp
   :name: sample.cpp

   #include "lib.cpp"

    int main() {
        std::cout << "Adding two numbers 1 and 2: " << add(1, 2) << std::endl;
        return 0;
    }

API References
==============
:doc:`APIs 1 Reference <api1>`

Indices and tables
==================

* :ref:`genindex`
* :ref:`modindex`
* :ref:`search`
