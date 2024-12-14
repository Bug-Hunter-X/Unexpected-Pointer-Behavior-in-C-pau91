# Unexpected Pointer Behavior in C

This code demonstrates a common, yet sometimes unexpected, behavior of pointers in C.  When you modify a variable through a pointer, the original variable is also modified. This example highlights this behavior and how it can lead to unexpected results if not carefully considered.

## Bug Description
The code initializes an integer `x` and assigns its address to a pointer `ptr`.  Modifying the value at the address pointed to by `ptr` also changes the value of `x`. This might be confusing for beginners who are not familiar with how pointers work in C.

## How to Reproduce
1. Compile the code using a C compiler (like GCC): `gcc bug.c -o bug`
2. Run the executable: `./bug`
The output won't explicitly show the error, but inspecting `x`, `y`, and `z` shows that the modification made using the pointer is reflected across all variables.