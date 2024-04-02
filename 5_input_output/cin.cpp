#include<iostream>

// example of taking multiple inputs from the user.
void fun1(){
    int num1, num2;
    std::cout<<"Enter the num"<<std::endl;
    std::cin>>num1>>num2;
}

// cin.getline(char *buffer, int N):
// this is an function used for reading only *character arrays in c++, we can read only character array, 
// and reading an integer or int array is not possible.

// 1.) reading an character arrays using getline()
/*
It reads a stream of characters of length N into the string buffer, It stops when it has read (N – 1) 
characters or it finds the end of the file or newline character(\n). Below is the C++ program to 
implement cin.getline():

The `cin.getline()` function in C++ is used to read a line of text from the standard input (usually the keyboard) and store it in a character array (`buffer`). Here's a breakdown of its syntax and functionality:

1. **Syntax**:
   ```cpp
   cin.getline(char *buffer, int N);
   ```

2. **Parameters**:
   - `buffer`: A pointer to a character array where the input will be stored. It should have enough space to accommodate the input text, including the null terminator ('\0').
   - `N`: An integer specifying the maximum number of characters to read, including the null terminator. This helps prevent buffer overflow by limiting the number of characters read.

3. **Functionality**:
   - The `cin.getline()` function reads characters from the standard input (usually the keyboard) until one of the following conditions is met:
     - A newline character ('\n') is encountered.
     - `N - 1` characters have been read.
     - The end-of-file (EOF) condition is reached (e.g., if reading from a file).
   - The newline character ('\n') is also read from the input stream but is not stored in the buffer. Instead, it is replaced with a null terminator ('\0') to terminate the string.
   - After reading the input line, `cin.getline()` stores the characters in the provided `buffer` and adds a null terminator ('\0') to the end to signify the end of the string.
   - If the input line is longer than `N - 1` characters, `cin.getline()` reads only `N - 1` characters from the input stream and discards the remaining characters, effectively truncating the input to fit within the specified buffer size.
   - If the input stream encounters an error or reaches the end-of-file (EOF) condition before reading any characters, `cin.getline()` sets the failbit of the `cin` stream.

4. **Return Value**:
   - The `cin.getline()` function returns a reference to the `cin` stream object, allowing for chaining of input operations.

In summary, `cin.getline()` is a versatile function for reading lines of text from the standard input, ensuring that the input does not exceed the specified buffer size and providing safeguards against buffer overflow.
*/
void fun2(){
    char name[10];
    std::cin.getline(name, 5);
    std::cout<<name<<std::endl;
}

// 2.) reading an integer using getline
void fun3(){
    const int MAX_LENGTH = 100; // Maximum length of input string
    char input[MAX_LENGTH]; // Buffer to store the input string
    // Read input as a string
    std::cout << "Enter a number: ";
    std::cin.getline(input, MAX_LENGTH);
    // Convert the string to an integer
    int number = std::stoi(input);
    // Print the converted number
    std::cout << "You entered: " << number << std::endl;
}

int main(){
   fun2();
}

/*
note there are two type of getline():

1.) cin.getline(char *ptr, size):
this is one type, here only char can be passed, that is a pointer is only allowed. nd string is also not allowed
2.) getline(cin, string):
in here only string can be passed, and char array cannot be passed.
*/