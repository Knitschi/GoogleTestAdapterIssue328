# About

A CMake based project that was created to reproduce the GoogleTestAdapter issue 

https://github.com/csoltenborn/GoogleTestAdapter/issues/328


# How to build

You need CMake to generate the Visual Studio solution.

```bat
git clone --recursive ...
cd GoogleTestAdapterIssue328
cmake -H. -B build -G "Visual Studio 16 2019"
```



