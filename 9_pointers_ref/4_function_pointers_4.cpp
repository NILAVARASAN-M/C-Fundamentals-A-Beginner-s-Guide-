// 6) Like normal data pointers, a function pointer can be passed as an argument and can also be returned 
// from a function. For example, consider the following C program where wrapper() receives a void fun() as 
// parameter and calls the passed function.

// A simple C program to show function pointers as parameter 
#include <stdio.h> 

// Two simple functions 
void fun1() { printf("Fun1\n"); } 
void fun2() { printf("Fun2\n"); } 

// A function that receives a simple function 
// as parameter and calls the function 
void wrapper(void (*fun)()) 
{ 
	fun(); 
} 

int main() 
{ 
	wrapper(fun1); 
	wrapper(fun2); 
	return 0; 
}

// on a whole function pointer has many advantages


// one small question arises is what is difference between funct; and funct();
// funct; --> we are just refering a function.
// funct(); --> we are invoking a function.
