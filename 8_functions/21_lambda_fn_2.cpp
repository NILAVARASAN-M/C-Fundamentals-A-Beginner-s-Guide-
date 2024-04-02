#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v {4, 1, 3, 5, 2, 3, 1, 7};

	// below snippet find first number greater than 4
	// find_if searches for an element for which
	// function(third argument) returns true
	vector<int>:: iterator p = find_if(v.begin(), v.end(), [](int i)
	{
		return i > 4;
	});
	cout << "First number greater than 4 is : " << *p << endl;
}

// same as the previous one excepet that 

/*
Certainly! Let's break down the code step by step:

1. `vector<int>::iterator p`: This declares a variable named `p` of type `vector<int>::iterator`. `vector<int>` is a template 
class representing a dynamic array of integers, and `iterator` is a type that provides a way to iterate over the elements of the vector. 
Therefore, `p` is an iterator that can be used to traverse the elements of the vector.

2. `find_if(v.begin(), v.end(), [](int i) { return i > 4; })`: This is a call to the `find_if` algorithm function, which
 searches for the first element in the range `[v.begin(), v.end())` for which the specified predicate returns `true`. Here's
  what each part does:
   - `v.begin()`: This returns an iterator pointing to the first element of the vector `v`.
   - `v.end()`: This returns an iterator pointing to one past the last element of the vector `v`.
   - `[](int i) { return i > 4; }`: This is a lambda function that takes an integer `i` as input and returns `true` if `i` 
   is greater than 4, and `false` otherwise. It serves as the predicate used by `find_if` to determine if an element meets the condition.

3. Once `find_if` finds an element that satisfies the predicate, it returns an iterator pointing to that element. This iterator 
is then assigned to the variable `p`.

So, overall, this line of code searches for the first element in the vector `v` that is greater than 4 and stores an iterator 
to that element in the variable `p`.
*/

// for more detailed explanation of what this iterator defined in the vector see next file.