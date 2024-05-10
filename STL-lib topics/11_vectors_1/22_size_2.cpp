// CPP program to illustrate
// Application of size() function
#include <iostream>
#include <vector>
using namespace std;

int main1()
{
	int sum = 0;
	vector<int> myvector{ 1, 5, 6, 3, 9, 2 };
	while (myvector.size() > 0) {
		sum = sum + myvector.back();
		myvector.pop_back();
	}
	cout << sum;
	return 0;
}
// unlike the sizeof function, this will return the no of elements in the vector.

// but we have to be carefull when use this size, function for example
int man1()
{
    // Initializing a vector of string type
    vector<string> vec = { "Geeks", "For", "Geeks" };
    vec.clear();
    for (int i = 0; i <= vec.size() - 1; i++)
        cout << vec[i] << ' ';
    cout << "Geeks For Geeks";
    return 0;
}
// this will raise error so we should be carefull whil using this size function in c++.
// but lets see more clearly:
// size function always returns an unsigned long integer, so in our case since the vect is an empty vector.
// it will return zero but this zero is an "long unsigned int" -> type, subtracting 1, will result in a negative number.
// so it will be wrapped by the maximun number under this condition called (underflow).
// so now vec.size()-1 will return the maximum positive number possible. and which will lead to an infinite loop.

/*
The behavior you described arises due to integer underflow when subtracting 1 from an unsigned integer of value 0. Let's break down each part:

1. `unsigned long int var = 0;`
   - Here, you're declaring an unsigned long integer variable named `var` and initializing it to 0.

2. `cout << var - 1;`
   - This line prints the result of subtracting 1 from `var`. Since `var` is an unsigned integer and the
    subtraction results in a negative value, an underflow occurs. In the context of unsigned integers, underflow
     wraps around to the maximum possible value for that data type. So, `var - 1` results in the maximum value for 
     an unsigned long integer, which is 18446744073709551615.

3. `vector<data_type> vec;`
   - Here, you're declaring an empty vector.

4. `cout << vec.size() - 1;`
   - This line prints the result of subtracting 1 from the size of the vector `vec`. If `vec` is empty, 
   `vec.size()` will return 0. When you subtract 1 from 0, underflow again occurs, resulting in the maximum
    value for an unsigned long integer, which is 18446744073709551615.

Now, let's discuss the looping behavior:

In your explanation, you mentioned that this leads to a loop from i = 0 to i = 18446744073709551615. However, 
this statement needs clarification. There's no explicit loop in the provided code snippet. It's just printing
 the result of `var - 1` and `vec.size() - 1`.

If you intend to use these values in a loop, you could potentially encounter issues. For example, a loop like 
`for (unsigned long int i = 0; i < vec.size() - 1; ++i)` would result in undefined behavior because `vec.size() - 1`
 would wrap around to a very large value due to underflow, and the loop would continue for an unexpectedly large number of iterations.
*/

// now to fix it we can type-cast that's all.

int main()
{
    // Initializing a vector of string type
    vector<string> vec = { "Geeks", "For", "Geeks" };
    vec.clear();
    for (int i = 0; i <= static_cast<int>(vec.size()) - 1; i++)
        cout << vec[i] << ' ';
    cout << "Geeks For Geeks";
    return 0;
}