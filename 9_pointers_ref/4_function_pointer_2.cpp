// this is the alternative way of calling or invoking an function pointer.

/*
1.) Unlike normal pointers, a function pointer points to code, not data. Typically a function pointer stores the start of executable code.
2) Unlike normal pointers, we do not allocate de-allocate memory using function pointers.  
3) A function’s name can also be used to get functions’ address.
*/

#include <iostream>

void fun(int a) 
{ 
	std::cout<<a<<std::endl;
} 

int main_fn1() 
{ 
	// fun_ptr is a pointer to function fun() 
	void (*fun_ptr)(int) = &fun; 

	/* The above line is equivalent of following two 
	void (*fun_ptr)(int); 
	fun_ptr = &fun; 
	*/

	// Invoking fun() using fun_ptr 
	(*fun_ptr)(10); 

    // this is an alternative way of invoking the function pointer where we derefrence the function pointer using the * operator. and pass
    // the arguments

	return 0; 
} 

// another way of using.

int main() 
{  
    void (*fun_ptr)(int) = fun;  // & removed 
    fun_ptr(10);  // * removed 
    return 0; 
}