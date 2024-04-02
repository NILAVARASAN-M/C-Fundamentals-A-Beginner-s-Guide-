// cerr is also very similar to the cout, except that it is unbuffered and cout is buffered.
// so we have to use cout and cerr accordingly, since both does same thing does that mean we have to use them just like that.
// we have to accordingly use in certain cases.

/*
# Un-buffered standard error stream (cerr): The C++ cerr is the standard error stream that is used to output the errors. 
This is also an instance of the iostream class. As cerr in C++ is un-buffered so it is used when one needs to display the error 
message immediately. It does not have any buffer to store the error message and display it later.
# The main difference between cerr and cout comes when you would like to redirect output using “cout” that gets
 redirected to file if you use “cerr” the error doesn’t get stored in file.(This is what un-buffered means .
.It cant store the message)
*/

#include <iostream>

int main()
{
	std::cerr << "An error occurred";
	return 0;
}

// the main difference between cout and cerr

// cout follows unbuffered system, whereas cerr followrd buffered system.

/*
Certainly! Let's break down the concept of buffering and its impact on system calls and efficiency:

1. **Without Buffering**:
   - When output is not buffered, each write operation directly results in a system call to write data directly to the output device (such as the screen).
   - For example, if you have multiple small write operations (e.g., printing individual characters or small strings) to `cout` without buffering, each operation would trigger a separate system call to write the data to the output device.
   - This means that for every small piece of data you want to output, the system needs to perform a separate operation to write it to the output device.

2. **With Buffering**:
   - When output is buffered, the data from multiple small write operations is collected in memory (the buffer) instead of being immediately written to the output device.
   - As a result, instead of triggering a system call for each small piece of data, the system can collect multiple pieces of data in the buffer before performing a single system call to write the entire buffer to the output device.
   - By accumulating multiple small write operations in the buffer before writing them to the output device, buffering reduces the overhead associated with system calls and improves efficiency, especially for large amounts of data.

In summary, buffering allows the system to collect multiple small write operations in memory before performing a single, more efficient system call to write the data to the output device. This approach reduces the number of system calls needed, which can significantly improve efficiency and performance, especially when dealing with large amounts of data.
*/

// eg like this: ---> "a"<<"b"<<"c"<<"d";  , for this explain how cout and cerr makes difference

/*
Certainly! Let's break down what happens when you chain multiple output operations together like `"a" << "b" << "c" << "d";`.

1. **Without Buffering**:
   - Without buffering, each individual string `"a"`, `"b"`, `"c"`, and `"d"` would trigger a separate system call to write the data to the output device.
   - This means that the system would perform four separate write operations to output each string individually, resulting in four system calls.

2. **With Buffering**:
   - With buffering, the data from multiple output operations is collected in memory (the buffer) before being written to the output device.
   - When you chain multiple output operations together, such as `"a" << "b" << "c" << "d";`, each string is first appended to the buffer instead of immediately triggering a system call.
   - The strings `"a"`, `"b"`, `"c"`, and `"d"` are all accumulated in the buffer without any immediate system calls.
   - Once the buffer is full or when explicitly flushed (e.g., by using `std::endl` manipulator or `flush()` function), the entire contents of the buffer are written to the output device in a single, more efficient system call.

In summary, when chaining multiple output operations together, buffering allows the system to collect the data 
from each operation in memory before performing a single, more efficient system call to write all the accumulated
 data to the output device. This approach reduces the number of system calls needed and improves efficiency, especially when
  outputting multiple pieces of data in quick succession.
*/