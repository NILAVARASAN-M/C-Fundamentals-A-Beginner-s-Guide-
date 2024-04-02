// Limitations of References
/*
Once a reference is created, it cannot be later made to reference another object; it cannot be reset. This is often done with pointers. 
References cannot be NULL. Pointers are often made NULL to indicate that they are not pointing to any valid thing. 
A reference must be initialized when declared. There is no such restriction with pointers.
Due to the above limitations, references in C++ cannot be used for implementing data structures like Linked List, Tree, etc. In Java, 
references don’t have the above restrictions and can be used to implement all data structures. References being more powerful in Java 
is the main reason Java doesn’t need pointers.
*/
// Advantages of using References
// 1.) Safer: Since references must be initialized, wild references like wild pointers are unlikely to exist. It is still possible to have 
// references that don’t refer to a valid location (See questions 5 and 6 in the below exercise) 
// 2.) Easier to use: References don’t need a dereferencing operator to access the value. They can be used like normal variables. 
// The ‘&’ operator is needed only at the time of declaration. Also, members of an object reference can be accessed with the dot 
// operator (‘.’), unlike pointers where the arrow operator (->) is needed to access members.


// lets see some sligtly complicated "refrence" - code:
#include <iostream>
using namespace std;
//1.) 
int& fun1()
{
    static int x = 10;
	return x;
}
int main()
{	fun1() = 30;
	cout << fun1();
	return 0;
}
// this code works, what will happen when u dont use '&' is, basically return x only will lead to 
// it will return the value of x, but here we are returing the refrence a to the static variable 'x'.

//2.)
int fun2(int& x) { return x; }
int main1()
{
	cout << fun(10);
	return 0;
}
// error: b/c we are passing an integer literal, and not an varaible. &x will form alies with variable passed, but here a integer value
// passed. so we can't form allies.

//3.)
#include <iostream>
using namespace std;

void swap(char*& str1, char*& str2)
{
	char* temp = str1;
	str1 = str2;
	str2 = temp;
}

int main2()
{
	char* str1 = "GEEKS";
	char* str2 = "FOR GEEKS";
	swap(str1, str2);
	cout << "str1 is " << str1 << '\n';
	cout << "str2 is " << str2 << '\n';
	return 0;
}
// in here this "GEEKS", and the other one, they are  also reprsented in memory, but in read-only memory.
// since str1, str2 pointing to some c style char literal, does not mean we can do somithing and change the string-literal.
// but we want to swap, so since both the strings are in read-only memory and each pointer pointing to one another string literal.
// so we will not swap the value in the pointer, but we will swap the memory address of the pointers. 
// so now the str1 and str2, the pointers will swapped. and the memory location of the "GEEKS" and "FOR GEEKS" will be in same position.
// this is because "GEEKS and "FOR GEEKS" both are in read only memory.

// char*& str1 --> in this * has more precedence then &, so first * and then only &. 1.) char*--> mean a character pointer, next
// & added to that will be like, str1 is with alies with the argument passed  due to refrence, and any change in this pointer
// will be reflected on the main function also. 
// same goes for str2 also.

// clear chatgpt explanation:
/*
This code demonstrates swapping two C-style strings (`char*`) using references to pointers. Here's how it works:

1. The `swap` function is defined to take two parameters, `str1` and `str2`, both of which are references to pointers to characters (`char*&`). This means that the function will modify the pointers themselves, not the memory they point to.

2. Inside the `swap` function, a temporary pointer `temp` is declared and assigned the value of `str1`.

3. The value of `str1` is then assigned the value of `str2`, effectively swapping the pointers.

4. Finally, the value of `str2` is assigned the value of `temp`, completing the swap operation.

5. In the `main` function, two pointers `str1` and `str2` are declared and initialized with the addresses of string literals `"GEEKS"` and `"FOR GEEKS"`, respectively.

6. The `swap` function is called with `str1` and `str2` as arguments, causing the pointers to be swapped.

7. After the swap, the `cout` statements print the contents of `str1` and `str2`, which have been swapped.

Note: It's important to understand that string literals such as `"GEEKS"` and `"FOR GEEKS"` are stored in read-only memory, and attempting to modify them directly can lead to undefined behavior. However, in this code, only the pointers themselves are being modified, not the contents they point to, so the behavior is well-defined.
*/
/*
Certainly! Let's break down the code step by step:

1. **Function Definition (`swap`):**
   - The `swap` function takes two parameters, `str1` and `str2`, which are references to pointers to characters (`char*&`). This means that any changes made to `str1` and `str2` inside the function will affect the pointers passed from the calling function.
   - The function swaps the pointers `str1` and `str2` by using a temporary pointer `temp` to hold the value of `str1` while `str2` is moved to `str1`. Then, the value of `temp` (which holds the original `str1`) is assigned to `str2`, effectively swapping the pointers.

2. **Main Function:**
   - Inside the `main` function, two pointers `str1` and `str2` are declared and initialized with the addresses of string literals `"GEEKS"` and `"FOR GEEKS"`, respectively.
   - The `swap` function is called with `str1` and `str2` as arguments. This causes the pointers to be passed by reference to the `swap` function, where they are swapped.
   - After the swap, the `cout` statements print the contents of `str1` and `str2`, which have been swapped due to the pointer manipulation inside the `swap` function.

3. **Output:**
   - After swapping, the output will be:
     ```
     str1 is FOR GEEKS
     str2 is GEEKS
     ```
   This confirms that the pointers `str1` and `str2` have been successfully swapped, resulting in a change in the strings they point to.
*/

// Note: It's important to understand that string literals such as "GEEKS" and "FOR GEEKS" are stored in read-only memory,
//  and attempting to modify them directly can lead to undefined behavior. However, in this code, only the pointers themselves 
//  are being modified, not the contents they point to, so the behavior is well-defined.
// -----> what does this mean explain clearly

/*
Certainly! Let's break down the explanation:

In C++, string literals like `"GEEKS"` and `"FOR GEEKS"` are stored in read-only memory, typically in a 
section of memory known as the **.text** or **.rodata** section. This means that the contents of these string 
literals cannot be modified directly during program execution. Any attempt to modify them directly can lead to
 undefined behavior, which means that the program's behavior is unpredictable and can vary between different compilers and platforms.

However, in the provided code, the `swap` function is only modifying the pointers (`str1` and `str2`) themselves, 
not the contents they point to. The pointers are variables that store memory addresses, and modifying these addresses 
does not affect the contents of the memory they point to. Therefore, the behavior of the code is well-defined and does 
not lead to any undefined behavior.

To summarize, although the string literals `"GEEKS"` and `"FOR GEEKS"` are stored in read-only memory, the code
 safely swaps the pointers to these literals without attempting to modify their contents directly. As a result,
  the behavior of the code is predictable and conforms to the expected outcome.
*/

// is this also written in read only buffer, the name variable. #include <iostream>


// int main() {
//     char name[]="nilavarasan\0";
//     name[0]='c';
//     std::cout<<name;
//     return 0;
// }

/*
Yes, the `name` array in your code is also stored in read-only memory, specifically in the section of memory 
allocated for the program's data. When you declare an array like `char name[] = "nilavarasan\0";`, the string
 literal `"nilavarasan\0"` is stored in read-only memory, typically in the **.rodata** section.

However, the `name` array itself is stored in a writable part of memory, typically in the **.data** or **.bss** section.
 This means that you can modify the contents of the `name` array itself, such as changing individual characters like
  `name[0] = 'c';`, without causing undefined behavior.

In your code, modifying the `name` array to change the first character from `'n'` to `'c'` is perfectly valid and 
will produce the expected result. Therefore, the behavior of your code is well-defined.
*/

// why is it stored in both the rad-only and in write also.??

/*
In C and C++, string literals like `"nilavarasan\0"` are typically stored in read-only memory because 
they are considered constant and should not be modified. Storing them in read-only memory ensures that
 their contents remain unchanged throughout the program's execution.

However, when you declare an array like `char name[] = "nilavarasan\0";`, you are essentially creating a
 copy of the string literal in writable memory. This allows you to modify the contents of the array, such as
  changing individual characters, without affecting the original string literal stored in read-only memory.

This separation ensures both safety and flexibility. The original string literal remains immutable, preventing 
accidental modifications that could lead to bugs or undefined behavior. Meanwhile, the copy of the string in writable 
memory gives you the freedom to manipulate its contents as needed during program execution.
*/