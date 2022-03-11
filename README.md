# About

A CMake based project that was created to reproduce the GoogleTestAdapter issue 

https://github.com/csoltenborn/GoogleTestAdapter/issues/328


# How to build and reproduce the bug

You need CMake to generate the Visual Studio solution.

* First run the following commands

```bat
git clone --recursive ...
cd GoogleTestAdapterIssue328
cmake -H. -B build -G "Visual Studio 16 2019"
```

* Open the Visual Studio solution in the build directory.
* Build the MyTests project.
* Open the Test Explorer and click on one of the 4 test cases.
* -> Visual Studio will no longer respond to any user input.

This works with ```Visual Studio 16.11.10``` and ```GoogleTestAdapter 0.18.0.1432```.


