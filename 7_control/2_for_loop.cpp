#include<iostream>
#include<string>

// this one is range based for loop

// 1.) for strings
 void fun1(){
    std::string name="Nilavarasan";
    for(char ch: name){
        std::cout<<ch<<" ";
    }
    std::cout<<std::endl;
    return;
}

// 2.) for character array, using normal way

 void fun2(){
    char name[]="Nilavarasan";
    for(char ch: name){
        std::cout<<ch<<" ";
    }
    std::cout<<std::endl;
    return;
}

// 3.) for character array, using pointers
void fun3() {
    char name[] = "Nilavarasan";
    // Iterate through the character array using a pointer
    for (char* ptr = name; *ptr != '\0'; ptr++) {
        std::cout << *ptr << " "; // Print the current character
    }
    std::cout << std::endl; // Print a newline after printing all characters
}

// 4.) for character array, using refrences
void fun4(){
    char name[] = "Nilavarasan";
    for(char& ch: name){
        std::cout<<ch<<" ";
        ch='N';
    }
    std::cout<<name<<std::endl;
}

/*
now what is the difference between function 2 and 4.
so in fubction 4 any change in the ch will be reflected in the main array, because we are forming reference of the variable.
but it is not the case for the function 2. so we have to use then and there accordingly.

for this same type of for loop we cannot use pointers types, because the range function will not no when to terminate b/c of the reason \0
*/

// for detail eplanation see below here:
/*
In C++, the range-based for loop syntax you're referring to, like `for (char* ptr : name)`, is designed to work 
with standard containers such as arrays, vectors, and other iterable types that provide a begin and end iterator. 
However, C-style arrays, like `char name[] = "Nilavarasan";`, don't provide this kind of iterator interface.

Instead, when working with C-style arrays and pointers, you typically use a pointer-based loop, as shown in the code 
you provided. This loop explicitly manages the pointer and checks for the null terminator (`'\0'`) to determine the end of the array.

So, while the range-based for loop syntax is convenient for iterating over standard containers, it's not suitable for
 C-style arrays and pointers without some additional abstractions or conversions. Therefore, in this case, you need 
 to use the traditional pointer-based loop.
*/

// 5.) for integer array.
void fun5(){
    int arr[]={1,3,4,52,1,0,100,132};
    for(int num: arr){
        std::cout<<num<<" ";
    }
    std::cout<<std::endl;
}
// 6.) for integer array, using pointers

// void fun5() {
//     int arr[] = {1, 3, 4, 52, 1, 0, 100, 132};
//     for (int* num : arr) {
//         std::cout << *num << " "; // Dereference the pointer to print the value
//     }
//     std::cout << std::endl;
// }

// ----------------------> this above function 6 will throw an error because. 
//You're correct; my apologies for the oversight. When using a range-based for loop with an array, 
// the loop variable directly represents the elements of the array, not pointers to them. Therefore, you should
// use the loop variable directly to access the values of the array elements.

// 6.) for integer array, using pointers
void fun6(){
    int arr[] = {1, 3, 4, 52, 1, 0, 100, 132};
    // Iterate through the integer array using a pointer
    for (int* ptr = arr; ptr != arr + sizeof(arr) / sizeof(int); ptr++) {
        std::cout << *ptr << " "; // Print the current element
    }
    std::cout << std::endl;
}
// this is the only way but

// 7.) for integer array, using refrences
void fun7(){
    int arr[]={1,3,4,52,1,0,100,132};
    for(int& num: arr){
        std::cout<<num<<" ";
        num=10;
    }
    std::cout<<std::endl;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        std::cout << arr[i] << " "; // Print the current element followed by a space
    }
    std::cout<<std::endl;
}




int main(){
    fun1();
    fun2();
    fun3();
    fun4();
    fun5();
    fun6();
    fun7();
    return 0;
}