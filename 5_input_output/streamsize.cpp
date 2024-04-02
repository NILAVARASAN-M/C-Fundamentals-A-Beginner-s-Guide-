/*
this streamsize is noting but that, so we know that in c++ the buffer is allocated there only the input that we ryt
in KBD will be stored in that buffer (when we use cin), so this buffer has some size this size is given by the compiler, some size of the buffer
so there can be jubk, garbage values present and we have to clean them before.
*/

// more information about the streamsize.

/*
`streamsize` is a type used in the C++ standard library to represent sizes and offsets related to input and 
output operations on streams. It's a signed integral type, typically a typedef for `std::ptrdiff_t` or `std::size_t`, 
depending on the implementation.

Here's what it's used for:

1. **Buffer Operations**: When reading or writing data to/from streams, `streamsize` is often used to
 represent the size of buffers used for these operations.
2. **Positioning**: When seeking within streams, `streamsize` is used to represent offsets or positions within the stream.

For example, when you read data from a stream into a buffer, you might use `streamsize` to specify the size 
of the buffer or the number of characters read. Similarly, when seeking within a file, you might use `streamsize`
 to specify the offset from the beginning of the file where you want to position the stream.

It's a flexible type that can accommodate various sizes and offsets depending on the specific requirements of the input/output operations.
*/

#include <iostream>
#include <limits>

int main() {
    // Get the maximum value of streamsize
    std::streamsize maxSize = std::numeric_limits<std::streamsize>::max();
    
    std::cout << "Maximum value of streamsize: " << maxSize << std::endl;

    return 0;
}
