# BazelCMake
A simple project built by CMake with a sub-project built by Bazel. The purpose of this project is to show how to mix usage of Bazel and CMake. 
The steps to build the project:
a). cd ./bazel; 
b). bazel build //...
c). cp ./bazel-bin/libCalculationMachine.a ../cmake/lib
d). cp ./CalculationMachine.hpp ../cmake/lib
e). cd ../cmake
f). cmake .
g). make 

The executable is located in cmake/
