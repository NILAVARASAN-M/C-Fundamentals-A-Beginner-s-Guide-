#include <iostream>
#include <sstream> // Include the stringstream library for string manipulation
using namespace std;

int fun1(){
    const int MAX_LENGTH = 100; // Maximum length of input string
    char input[MAX_LENGTH]; // Buffer to store the input string
    // Read input as a string
    cout << "Enter integers separated by spaces: ";
    cin.getline(input, MAX_LENGTH);
    // Create a stringstream to split the input string
    stringstream ss(input);
    // Integer array to store the numbers
    const int MAX_NUMBERS = 10; // Maximum number of integers
    int numbers[MAX_NUMBERS]; // Array to store the integers
    int count = 0; // Counter to keep track of the number of integers read
    // Read integers from stringstream into the array
    int num;
    while (ss >> num && count < MAX_NUMBERS) {
        numbers[count] = num;
        count++;
    }
    // Print the integers stored in the array
    cout << "Integers entered: ";
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}

int fun2(){

}

int main() {
    
}
/*
`std::stringstream` is a class defined in the `<sstream>` header of the C++ Standard Library. It is used for string
 stream processing, allowing you to treat strings as input/output streams, just like `std::cin` and `std::cout`. 

In the line `std::stringstream ss(input);`, a `std::stringstream` object named `ss` is created and 
initialized with the contents of the `input` string. This means that `ss` now behaves like a stream, 
and you can perform input and output operations on it just like you would with `std::cin` and `std::cout`. 

Here's how you can use `std::stringstream`:

1. **Input Operations**: You can use `>>` to extract data from the stringstream, just like you would with `std::cin`. For example:
   ```cpp
   int num;
   ss >> num; // Extract an integer from ss
   ```

2. **Output Operations**: You can use `<<` to insert data into the stringstream, just like you would with `std::cout`. For example:
   ```cpp
   ss << "Hello"; // Insert the string "Hello" into ss
   ```

3. **String Conversion**: `std::stringstream` provides a convenient way to convert between strings and other data types. 
For example, you can use `std::stoi()` to convert a string to an integer:
   ```cpp
   int num = std::stoi("123"); // Converts the string "123" to the integer 123
   ```

Using `std::stringstream`, you can perform various operations on strings, such as splitting a string into tokens,
 converting between different data types, and formatting data for output. It's a versatile tool for string manipulation in C++.
*/

//stream here in c++ means, we can perfrom input and outptu operation on this streams.