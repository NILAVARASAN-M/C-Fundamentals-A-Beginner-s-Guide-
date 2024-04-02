// alternatives of the cout function  or similar to that.
/*
The cout statement can also be used with some member functions:
1.)cout.write(char *str, int n): Print the first N character reading from str.
2.)cout.put(char &ch): Print the character stored in character ch.
3.)cout.precision(int n): Sets the decimal precision to N, when using float values.
*/

// put() function can be used only for characters
// write() function, in here we can pass only character array. --> refer string1.cpp


#include<iostream>

void fun1(){
    char gfg[] = "Welcome at GFG";
    char ch = 'e';
 
    // Print first 6 characters
    std::cout.write(gfg, 6);
 
    // Print the character ch
    std::cout.put(ch);
}

void fun2(){
    double pi = 3.14159783;
    // Set precision to 5
    std::cout.precision(5);
 
    // Print pi
    std::cout << pi << std::endl;
 
    // Set precision to 7
    std::cout.precision(7);
 
    // Print pi
    std::cout << pi << std::endl;
}