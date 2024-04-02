#include<iostream>
#include<vector>
#include<algorithm>

// void display(auto v){
//     for(int items: v){
//         std::cout<<items<<" ";
//     }
//     std::cout<<std::endl;
//     return;
// }

// -----------------------> this display function is not the right way to declare, why??? that reason see below

// template<typename T>
// void display(const T v){
//     for(int items: v){
//         std::cout<<items<<" ";
//     }
//     std::cout<<std::endl;
//     return;
// }

// -----------------------> this code is also wrong b/c see when we pass an vector it is fine, but when we pass an array,
// we know that it gets decomposed and an pointer is only passed. so here also when u pass the array, it gets decomposed and the
// pointer is only passed, so for a pointer we should knoe the size. we cant use above for-loop for an pointer.
// how to solve this.

template<typename T>
void display(const T& v){
    for(int items: v){
        std::cout<<items<<" ";
    }
    std::cout<<std::endl;
    return;
}

// this will work because we use &, on T. if we dont use then take the case we don't use & ---> So now v will be a pointer
// created, and inside that we have the address of the first element of the array.
// now when we use &, so we are basically telling that v is an refrence variable, so now v and arr are same.
// we can represent the array using v and arr. so here this for-loop will work.


int main(){
    int arr[]={2,3,1,4,2,-1,10,4,5,23,100,0,12,3};
    std::vector<int> vect{2,3,1,4,2,-1,10,4,5,23,100,0,12,3};
    std::sort(vect.begin(), vect.end());
    display(vect);
    std::sort(arr, arr+(sizeof(arr)/sizeof(arr[0])));
    display(arr);
    return 0;
}

// why we should not use auto is because. 
/*
The reason you can't use `auto` as a function parameter type directly is because the C++ language standard does not support it. 

When you use `auto` keyword, it is typically used for type deduction in variable declarations. It allows the compiler 
to infer the type of the variable based on the initializer expression. However, this feature is not extended to function 
parameters in the same way.

In function parameter lists, you need to explicitly specify the type of the parameters. This is because function parameters 
are part of the function's signature, and the type of each parameter needs to be known at compile time for the compiler to 
correctly generate code for function calls and handle type checking.

Therefore, when you define a function, you need to explicitly specify the types of its parameters. This is why you cannot 
use `auto` in function parameter declarations. Instead, you can achieve similar functionality using function templates, 
where you parameterize the function with a type parameter and let the compiler deduce the actual type when the function is called.
*/

// so auto may work for some case, but not for all case so it is not advisable to use it or while calling the other
// functions, instead we can use template class <<---- this is best.

// template<typename T>
/*
Certainly! Let's break down `template<typename T>` in detail:

1. **`template`**: This keyword signals the start of a template declaration. It tells the compiler that what follows
 is a template definition or declaration.

2. **`<typename T>`**: This part of the template declaration specifies the template parameter list. Here's what each component means:

   - **`<` and `>`**: These angle brackets enclose the template parameter list, and they are used to denote the beginning
    and end of the list, respectively.
   
   - **`typename`**: This keyword is used to declare a type parameter. It indicates that what follows is the name of a 
   type that will be specified when the template is instantiated. `typename` is used for types, whereas `class` can 
   also be used interchangeably in this context.
   
   - **`T`**: This is the name of the template parameter. It serves as a placeholder for a specific type that will 
   be provided when the template is used. You can use any valid identifier as a template parameter name.
   
So, when you see `template<typename T>`, it means that you are declaring a template with a single type parameter named 
`T`. This template can be instantiated with any type, and wherever you see `T` within the template, it will be replaced
 with the actual type specified during instantiation.
*/

// now u have understand what is template, but what difference will this  template class make compared to auto. template Vs auto.

// template: when we use template inside the parameter of the function, we are telling the compiler u replace the places 
// where the data-type (array/ vector) is used with T, in all the place in the function with T, so when the main function is get compiled to its .exe 
// code when encounter this display() function, so now T will know the type of the parameter, and replace with T.
// so the display function is converted in the compile-type <--(this is always general), but the problem is when we use both vectors and array
// since we use one-function, but two types, so we use this. because the compiler will have to convert the display function() at the compile-time.

// auto: when we use this auto, the compiler does not know how to convert the display() function because its type is not known.
// so it is advisable to use auto in local-range and not in global range, use auto within the scope of the variable --> advisable always.

/*
The difference lies in the context in which `T` and `auto` are used.

1. **`T` in Templates**:
   - In the context of templates, `T` is a placeholder for a specific type that will be provided by the user 
   when the template is instantiated.
   - When you define a function template like `template<typename T>`, you're essentially telling the compiler, 
   "Hey, I'm going to use a type `T` in this template, but I'll specify the actual type when I use the template."
   - When you later instantiate the template with a concrete type (e.g., `int`, `double`, etc.), the compiler replaces
    all occurrences of `T` with that type, and then compiles the code as if you had written the function with that specific type.

2. **`auto` in Variable Declarations**:
   - In contrast, `auto` is used for type deduction in variable declarations. It tells the compiler, "Hey, I'm 
   initializing this variable with an expression, please deduce the type of the variable from that expression."
   - `auto` can only be used in contexts where the compiler can infer the type of the variable from the initializer 
   expression. This typically works for local variables where the type can be determined at compile time based on the 
   expression used to initialize them.
   - However, in function parameter lists, the type of each parameter needs to be known explicitly at compile time, 
   as it is part of the function's signature. The compiler needs this information to generate code for function calls 
   and perform type checking.

In summary, while both `T` in templates and `auto` are used for type deduction, they serve different purposes and
 have different contexts where they can be used. `T` in templates is used for type parameterization and can be used 
 in function templates to create generic functions, while `auto` is used for type deduction in variable declarations 
 and cannot be used for function parameters.
*/

