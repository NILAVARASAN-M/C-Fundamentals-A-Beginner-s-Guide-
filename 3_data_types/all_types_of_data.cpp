#include <iostream>
#include <string>
using namespace std;

int main() {
// Integer data types
int a = 10;
short b = 20;
long c = 30;
long long d = 40;
cout << "Integer data types: " << endl;
cout << "int: " << a << endl;
cout << "short: " << b << endl;
cout << "long: " << c << endl;
cout << "long long: " << d << endl;

// Floating-point data types
float e = 3.14f;
double f = 3.141592;
long double g = 3.14159265358979L;
cout << "Floating-point data types: " << endl;
cout << "float: " << e << endl;
cout << "double: " << f << endl;
cout << "long double: " << g << endl;

// Character data types
char h = 'a';
wchar_t i = L'b';
char16_t j = u'c';
char32_t k = U'd';
cout << "Character data types: " << endl;
cout << "char: " << h << endl;
wcout << "wchar_t: " << i << endl;
cout << "char16_t: " << j << endl;
cout << "char32_t: " << k << endl;

// Boolean data type
bool l = true;
bool m = false;
cout << "Boolean data type: " << endl;
cout << "true: " << l << endl;
cout << "false: " << m << endl;

// String data type
string n = "Hello, world!";
cout << "String data type: " << endl;
cout << n << endl;

return 0;
}

// definiation and working the char data-type:
/*
This code snippet demonstrates the usage of different character data types in C++. Let's break down each part:

```cpp
// Character data types
char h = 'a';         // Define a character variable 'h' of type char and assign the value 'a' to it
wchar_t i = L'b';     // Define a wide character variable 'i' of type wchar_t and assign the value 'b' to it
char16_t j = u'c';    // Define a UTF-16 character variable 'j' of type char16_t and assign the value 'c' to it
char32_t k = U'd';    // Define a UTF-32 character variable 'k' of type char32_t and assign the value 'd' to it

cout << "Character data types: " << endl;
cout << "char: " << h << endl;      // Output the value of 'h' (char) using cout
wcout << "wchar_t: " << i << endl;  // Output the value of 'i' (wchar_t) using wcout
cout << "char16_t: " << j << endl;  // Output the value of 'j' (char16_t) using cout
cout << "char32_t: " << k << endl;  // Output the value of 'k' (char32_t) using cout
```

Here's an explanation of each line:

1. **Character Data Type Declarations**:
   - `char`: A character data type that typically represents an ASCII character. It's the most commonly used character data type in C++.
   - `wchar_t`: A wide character data type used to represent wide characters, typically used for Unicode characters.
   - `char16_t` and `char32_t`: Character data types introduced in C++11 for UTF-16 and UTF-32 character encoding respectively. They are used to represent characters in the Unicode character set.

2. **Variable Assignments**:
   - Each variable is assigned a specific character value. Note the use of different prefixes (`L`, `u`, and `U`) to indicate the character literals as wide characters, UTF-16 characters, and UTF-32 characters respectively.

3. **Output**:
   - The values of each character variable are outputted using `cout` or `wcout` for wide characters.

4. **Output Explanation**:
   - The values of the character variables `h`, `j`, and `k` are outputted using `cout`.
   - The value of the wide character variable `i` is outputted using `wcout`. `wcout` is used for wide characters to ensure proper output handling for characters beyond the ASCII range.

Overall, this code snippet illustrates the usage of different character data types and how to output their values using stream insertion (`<<`) operators.
*/
