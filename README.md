# Dereferencing a Null Pointer in C++

This repository demonstrates a common C++ error: dereferencing a null pointer.  The code attempts to write a value to a memory location that hasn't been properly allocated. This leads to undefined behavior, typically resulting in a program crash (segmentation fault). The solution shows how to avoid this error by checking for null pointers before dereferencing.

## How to Reproduce

1. Compile the `bug.cpp` file.
2. Run the compiled executable.
3. Observe the segmentation fault (or similar error).