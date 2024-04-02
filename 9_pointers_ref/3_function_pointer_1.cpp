// While a pointer to a variable or an object is used to access them indirectly,
// a pointer to a function is used to invoke a function indirectly.

// To declare a function -----> int foo(int);

// Here foo is a function that returns int and takes one argument of int type. So as a logical guy 
// will think, putting a * operator between int and foo(int) should create a pointer to a function i.e.

// we may think ---> int *foo(int);

// But Oops..C operator precedence also plays a role here ..so in this case, operator () will take priority over operator *. 
// And the above declaration will mean – a function foo with one argument of int type and return value of int * i.e. integer pointer. 
// So it did something that we didn’t want to do. 🙁

// to_overcome above precedence we follow the below syntax.

// int (*foo)(int);

#include<iostream>

int funct(int num1, int num2, int num3, int num4){
    return num1+num2+num3+num4;
}

int main(){
    int (*ptr_funct)(int, int, int, int)=&funct;
    // ptr_funct is the function pointer.
    // now we have to invoke the function, using the pointer.
    int result=ptr_funct(10, 100, 1000, 123);
    std::cout<<result;
    return 0;
}

// if we use or call the function funct(), this is static and this happens on the compile time only.
// but using a function pointer is dynamic, we know which function to be invoked at the run-time only, 
/*
Selection at Runtime: With function pointers, the decision about which function to call can be made
 at runtime. This means that the function to be invoked can be determined based on conditions that are only 
 known when the program is running.
*/

/*
Dynamically Changing Behavior: Since function pointers can be modified at runtime, the behavior of the program can 
change dynamically. This makes function pointers useful in scenarios where different behaviors need to be implemented
 based on changing conditions.
*/

//Overall, the dynamic nature of function pointers allows for more versatile and adaptable code,
// making them a powerful tool in C++ programming.
