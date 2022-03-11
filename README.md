# About

A CMake based project that was created to reproduce the GoogleTestAdapter issue 328.

https://github.com/csoltenborn/GoogleTestAdapter/issues/328


# How to build and reproduce the bug

You need CMake to generate the Visual Studio solution.
The repository contains googletest as submodule.

* First run the following commands

```bat
git clone --recursive https://github.com/Knitschi/GoogleTestAdapterIssue328.git
cd GoogleTestAdapterIssue328
cmake -H. -B build -G "Visual Studio 16 2019"
```

* Open the Visual Studio solution in the generated build directory.
* Build the ```MyTests``` project.
* Open the Test Explorer and click on one of the 4 test cases.
* -> Visual Studio will no longer respond to any user input.

This works with ```Visual Studio 16.11.10``` and ```GoogleTestAdapter 0.18.0.1432```.


