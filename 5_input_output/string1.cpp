// in c++ both the string and character array are rpresented different in the memory, totally different.
/*
No, character arrays and strings are represented differently in memory.

1. **Character Arrays (C-style strings)**:
   - Character arrays are sequences of characters terminated by a null character (`'\0'`).
   - They are stored as contiguous blocks of memory, with each character occupying one byte.
   - The end of the string is indicated by the presence of the null character.

2. **std::string**:
   - `std::string` is a class provided by the C++ Standard Library to represent strings.
   - Internally, `std::string` manages a dynamic array of characters, allowing it to resize and manage memory automatically.
   - It also stores the length of the string, allowing for efficient access to the size without needing to traverse the entire string.

While both character arrays and `std::string` can represent strings of characters, their internal representation 
and the operations that can be performed on them differ. `std::string` provides a more flexible and convenient interface for 
working with strings in C++.
*/

// so character array and string, both are not same in c++. so we have to cautious about to where to use character array and string
// b/c in some places they may give sytax like char *ptr, .

// how to convert the string to character array, temporary but the string will remain in the dynamic memory, just will return,
// the ptr to the char array in stack.

#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, world!";
    const char* cstr = str.c_str();

    std::cout << "Original string: " << str << std::endl;
    std::cout << "Character array: " << cstr << std::endl;

    return 0;
}
