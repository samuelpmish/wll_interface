# wll_interface
tools for adding mathematica bindings to C++ projects

The real credit goes to https://github.com/njpipeorgan/wll-interface, this repo just adds a few small updates:

- CMake support
- small changes to support Apple-clang compilers

# Integration into existing CMake project

put this in your CMakeLists.txt somewhere

```cmake
FetchContent_Declare(
  wll_interface
  GIT_REPOSITORY https://github.com/samuelpmish/wll_interface.git
)
FetchContent_MakeAvailable(wll_interface)

...cmake
# needs to be a shared library for Mathematica to load it
add_library(my_library SHARED ...)
target_link_libraries(my_library PUBLIC wll_interface)
```
