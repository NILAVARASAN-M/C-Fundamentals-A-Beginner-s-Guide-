#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

// in short what is nullptr is, it is alternate for NULL.
// Once there arised a problem, in function overloading. b/c NULL can be type-casted to integer as 0
// so to avoid that null_ptr, in pointers it used for comparsion with other pointers using ==.
// if a pointers points to no memory, then true else false.

// that overloading problem is 

// function with integer argument
void fun(int N) { cout << "fun(int)"; return;}
// Overloaded function with char pointer argument
void fun(char* s) { cout << "fun(char *)"; return;}
int main_2() 
{
	// Ideally, it should have called fun(char *),
	// but it causes compiler error.
	fun(NULL); 
}

// ------------------------------------->  to solve this problem we use nullptr.

int main()
{
	nullptr_t np1, np2;
	// <= and >= comparison always return true
	if (np1 >= np2)
		cout << "can compare" << endl;
	else
		cout << "can not compare" << endl;
	// Initialize a pointer with value equal to np1
	char *x = np1; // same as x = nullptr (or x = NULL
					// will also work) 
	if (x == nullptr)
		cout << "x is null" << endl;
	else
		cout << "x is not null" << endl;
	return 0;
}
// explanation of the code:
/*
This C++ program demonstrates the behavior of comparing `nullptr` values and `nullptr_t` types.

1. We define two variables `np1` and `np2` of type `nullptr_t`, both initialized with the value `nullptr`. 
This type represents a null pointer constant.

2. We then perform a comparison between `np1` and `np2` using the `>=` operator. According to the statement you provided, 
comparisons between `nullptr_t` values using `<=` and `>=` always return `true`. So, in this case, the output will be "can compare".

3. Next, we initialize a character pointer `x` with the value of `np1`. Since `np1` is equivalent to `nullptr`, `x` will also 
be set to `nullptr`.

4. Finally, we check if `x` is equal to `nullptr` using the equality operator `==`. According to the statement, comparing 
any pointer type with `nullptr` using `==` or `!=` will return `true` or `false` if it is null or non-null, respectively. 
Since `x` is set to `nullptr`, the output will be "x is null".

Overall, this program illustrates the behavior of `nullptr_t` and how comparisons with `nullptr` behave in C++.
*/

//  nullptr_t np1, np2;
//-----> what is this
/*
`nullptr_t np1, np2;` declares two variables `np1` and `np2` of type `nullptr_t`. 

`nullptr_t` is a special type in C++ introduced to represent a null pointer constant. It is
 used to initialize pointers to indicate that they are not pointing to any valid memory location.

In this line, `nullptr_t np1, np2;`, both `np1` and `np2` are being declared as variables of type
 `nullptr_t`. They are not initialized with any value, but since `nullptr_t` represents a null pointer
  constant, they effectively represent null pointers.
*/
// why nullptr, are there NULL?
/*
In C++, `nullptr` is introduced as a keyword to represent a null pointer. Before C++11, `NULL` was commonly
 used to represent null pointers, but it was actually defined as a macro typically equivalent to the integer constant `0`.
  While this worked for most cases, it led to ambiguities and issues in certain situations, particularly when overloaded
   functions were involved.

`nullptr` was introduced in C++11 to address these issues. Unlike `NULL`, which can be implicitly converted to integer types, 
`nullptr` is of its own type `nullptr_t`. This prevents some unintended conversions and provides a clearer indication that the 
value represents a null pointer. Additionally, `nullptr` is contextually convertible to any pointer type, which helps improve 
type safety and avoid ambiguities in function overloading. Overall, `nullptr` is considered a safer and more modern approach 
for representing null pointers in C++.
*/
