//  3. In For Each Loop to modify all objects:

#include<iostream>
#include<vector>

int fun1(){
    std::vector<int> vect{1,2,3,4,5,6,7,8,9,10};
    for(int &x: vect){
        x=x+100;
    }
    for(const int x: vect){
        std::cout<<x<<" ";
    }
    return 0;
}

// generally const is used, when one dont want to modify the object, just to print or assign to another only. 
// in this case const is used. 

//  4. For Each Loop to avoid the copy of objects:
// C++ Program to use references
// For Each Loop to avoid the
// copy of objects
using namespace std;

// Driver code
int main()
{
	// Declaring vector
	vector<string> vect{ "geeksforgeeks practice",
						"geeksforgeeks write",
						"geeksforgeeks ide" };

	// We avoid copy of the whole string
	// object by using reference.
	for (const auto& x : vect) {
		cout << x << '\n';
	}

	return 0;
}
// detailed explanation of the code.
/*
The comment above the code snippet suggests using references in a "For Each Loop" to avoid copying objects. Let's break it down:

In C++, when iterating over a container such as a vector using a "For Each Loop" (also known as a range-based for loop), 
each element of the container is typically accessed by value by default. This means that a copy of each element is made before 
it's used within the loop body.

However, by using references (`const auto& x`), we can avoid making unnecessary copies of each element. Here's what 
each part of `const auto& x` means:

- `auto`: This keyword allows the compiler to deduce the type of the elements in the vector automatically. It's a
 convenient way to declare a variable without specifying its type explicitly.
- `const`: This qualifier indicates that the reference `x` is constant, meaning that the elements of the vector 
cannot be modified through this reference. It ensures that the loop does not inadvertently modify the vector's elements.
- `&`: This symbol denotes that `x` is a reference to the elements of the vector rather than a copy. Using a 
reference allows direct access to the original elements without the overhead of copying.

By using `const auto& x`, we achieve the following benefits:
1. Avoiding unnecessary copying of elements, which can be significant for large or complex objects.
2. Ensuring that the loop does not modify the original elements unintentionally.
3. Maintaining efficiency and clarity in the code.

In summary, using references in a "For Each Loop" allows for efficient and safe iteration over container 
elements without incurring the overhead of unnecessary copies.
*/

