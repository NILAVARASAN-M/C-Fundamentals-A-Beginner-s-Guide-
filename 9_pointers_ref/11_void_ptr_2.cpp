#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	void* p = &a;
    int *ptr=&a;
    std::cout<<p<<" "<<ptr<<std::endl; // ----> (1)
    return 0;
}
// both the void pointer and the int pointer will point to the same memory location.

// ho does the memory looks in c++.

// in opertaion systems we have studies that the structure of memory is like, 1.) text, 2.) data, 3.) heap, 4.) stack -->
// stack grows from top to bottom and heap grows from bottom to top, to give infinite space for heap and stack. -----> doess c++ 
// memory looks like this, or is it completely different

/*
The memory layout you've described is a common organization used by operating systems, particularly in systems
 that support memory protection and virtual memory. However, the memory layout of a C++ program is influenced by 
 both the operating system and the runtime environment (like the C++ compiler and linker).

In general, the memory layout of a C++ program might resemble the following:

1. **Text segment**: Also known as the code segment, this is where the executable code of the program resides. 
It typically contains the compiled machine instructions of the program and is usually read-only to prevent accidental modification of the code.

2. **Data segment**: This segment contains initialized global and static variables. It is further divided into:
   - **Initialized data**: This is where global and static variables with explicit initial values are stored. These 
   variables are initialized by the runtime system before the program starts executing.
   - **Uninitialized data (BSS)**: This is where global and static variables without explicit initial values are stored.
    These variables are initialized to zero by the runtime system before the program starts executing.

3. **Heap**: The heap is a region of memory used for dynamic memory allocation, typically managed by the C++ runtime library. 
Memory allocated on the heap using `new` or `malloc` persists until explicitly deallocated using `delete` or `free`. The heap 
typically grows upward in memory.

4. **Stack**: The stack is used for storing local variables, function call information (like return addresses and parameters),
 and the call stack. Memory allocated on the stack is automatically deallocated when the function returns. The stack typically
  grows downward in memory.

It's worth noting that the actual memory layout of a C++ program can vary depending on factors such as the 
compiler, linker settings, operating system, and runtime environment. While the general concepts of text, data, 
heap, and stack segments apply, the specifics may differ between different systems and environments.
*/
