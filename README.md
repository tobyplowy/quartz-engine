[![Build status](https://ci.appveyor.com/api/projects/status/ryoqb5xj56jq0e04?svg=true)](https://ci.appveyor.com/project/GentenStudios/quartz-engine) [![Build Status](https://travis-ci.org/GentenStudios/quartz-engine.svg?branch=develop)](https://travis-ci.org/GentenStudios/quartz-engine)
# QUARTZ ENGINE

## Community
[Here's a link to our public discord server](https://discord.gg/XRttqAm), where we collaborate and discuss the development of the engine.

## Dependencies

- CMake (Version >= 3.0)
- A C++11 compatible compiler. The following have been tested
  - Visual Studio 2017 (MSVC 14.10)
  - Clang/Clang++ (Clang 7.0.0-3)
- OpenGL (Version >= 3.3)

## Build Instructions
### Visual Studio

Once cloned, enter the directory, by doing `cd quartz-engine`, and complete the following commands:

```
cmake -H. -BBuild
cmake --build Build
```

### Linux, Mac OS X, MSYS

  1. `mkdir build && cd build`
  2. `cmake ..`
  3. `make`

## Coding Standards

[Here's a link to our Coding Standards.](https://github.com/GentenStudios/Genten/wiki/Dev:-Home)
You can also have a look at our [wiki](https://github.com/GentenStudios/quartz-engine/wiki) for more information..
