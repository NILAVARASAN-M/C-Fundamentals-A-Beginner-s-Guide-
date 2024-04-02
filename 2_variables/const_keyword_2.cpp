// C program to illustrate constant variable definition
#include <iostream>

int main() {
    // defining integer constant using const keyword
    const int int_const = 25;

    // defining character constant using const keyword
    const char char_const = 'A';

    // defining float constant using const keyword
    const float float_const = 15.66;

    std::cout << "Printing value of Integer Constant: " << int_const << std::endl;
    std::cout << "Printing value of Character Constant: " << char_const << std::endl;
    std::cout << "Printing value of Float Constant: " << float_const << std::endl;

    return 0;
}

// if the const is not declared then garbage value will be assigned

// there are two type of value one is rvalue and lvalue.
/*
lvalue:
it is like there is memory alloacted for this, so there is memory address asscoitaed with it.
rvalue
it is like there is no memory alloacted for this, the value stored is temporary and has no address

const is lvalue.
*/