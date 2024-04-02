#include<iostream>
 using namespace std;

// only integer and char are possible in a switch statement
void fun1(){
    // switch variable 
    char x = 'A'; 
    // switch statements 
    switch (x) { 
    case 'A': 
        cout << "Choise is A"; 
        break; 
    case 'B': 
        cout << "Choise is B"; 
        break; 
    case 'C': 
        cout << "Choise is C"; 
        break; 
    default: 
        cout << "Choice other than A, B and C"; 
        break; 
    } 
}
/*
Rules of the switch case statement in C++
There are some rules that we need to follow when using switch statements in C++. They are as follows:

The case value must be either int or char type.
There can be any number of cases.
No duplicate case values are allowed.
Each statement of the case can have a break statement. It is optional.
The default Statement is also optional.
*/

