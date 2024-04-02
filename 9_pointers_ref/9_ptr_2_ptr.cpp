#include<iostream>

int main(){
    char a;
    char *b;
    char ** c;
    a = 'g';
    b = &a;
    c = &b;
    std::cout<<a<<" ";
    std::cout<<*b<<" ";
    std::cout<<**c<<" ";
    return 0;
}
// one dought in this pointer to pointer, why we need to specify this data-type, EG: char **c;
// in here why we need char, we need it because at the end a pointer will point to another pointer, and at the end
// finally the last pointer will point to an character. it will be usefull in arithmetic operation, for the compiler
// to understand better it will be usefull.

//what data-type is a pointer specifically??
/*
A pointer in C and C++ is a special type of variable that stores the memory address of another variable. The type 
of a pointer variable depends on the type of data it points to. 

For example, if you have a pointer that points to an integer variable, its type would be `int*`. Similarly,
 if you have a pointer that points to a character variable, its type would be `char*`. 

In general, the type of a pointer is defined by appending `*` to the base type of the data it points to. 
Here are a few examples:

- `int*`: Pointer to an integer
- `char*`: Pointer to a character
- `float*`: Pointer to a floating-point number
- `double*`: Pointer to a double-precision floating-point number
- `void*`: Generic pointer that can point to any type (but cannot be dereferenced without typecasting)

So, the type of a pointer is specific to the type of data it points to, and it determines how the pointer is used 
and what operations can be performed on it.
*/

// then what type is a pointer to pointer
/*
A pointer to a pointer, also known as a double pointer, is a pointer that stores the memory address of another pointer variable.
 Since it points to another pointer, its type is determined by appending an additional `*` to the base type of the pointer it points to.

For example:

- If you have a pointer that points to an integer pointer (`int*`), its type would be `int**`.
- If you have a pointer that points to a character pointer (`char*`), its type would be `char**`.
- Similarly, if you have a pointer that points to a pointer to a structure (`struct*`), its type would be `struct**`.

In general, the type of a pointer to a pointer is defined by appending `*` twice to the base type of the data it 
points to. This allows for indirect access to the value stored at the memory address pointed to by the first pointer.
*/