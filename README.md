# Fancy C++ Fibonacci by Squareting

A fancy c++ using class to calculate the nth fibonacci by squareting. This project is a exercise to show c++ possibilities. 

## Getting Started

This project was developed and test on Linux. Windows and Apple may run the program, but might need some corrections.
This project uses CMAKE to build. The tests are dependent of GTest <https://github.com/google/googletest>.

### Installing

Make sure all libraries are installed and in PATH environment.

On shell:

$> cd fibonacci-cpp
$fibonacci-cpp/> cd debug (or release)
$fibonacci-cpp/debug/> cmake -G Ninja -DCMAKE_BUILD_TYPE={Debug or Release} ..
$fibonacci-cpp/debug/> make
$fibonacci-cpp/debug/> make install

### VSCode

This project were developed in vscode and has the tasks and launch files to be used in [VSCode](https://code.visualstudio.com/).
## Running the tests

To run the tests
$fibonacci-cpp/debug/> make test

Or

$fibonacci-cpp/debug/>cd ../bin/debug/
$fibonacci-cpp/bin/debug/> ./run_rest_api_test

## Running the server

$fibonacci-cpp/debug/>cd ../bin/debug/

$fibonacci-cpp/bin/debug/> ./run_minial-rest-api <options>

Usage:
  run_fibonacci-cpp 

  -n, --number <number 0-93>   number of the nth fibonacci
  -h, --help      Print help

## Authors

* **Ian Esper** - *Initial work* - [fibonacci-cpp](https://bitbucket.org/imesper/fibonacci-cpp)

## License

This project is licensed under the MIT License


