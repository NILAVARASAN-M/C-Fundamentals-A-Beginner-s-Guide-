#include <bits/stdc++.h>
using namespace std;

// Function to print vector
void printVector(vector<int> v)
{
	// lambda expression to print vector
	for_each(v.begin(), v.end(), [](int i)
	{
		std::cout << i << " ";
	});
	cout << endl;
}

// the above is a lambda function

/*
In the given code snippet:

```cpp
[](int i)
	{
		std::cout << i << " ";
}
```

The symbol `[]` denotes the lambda introducer, indicating the start of a lambda expression. Here's what each part does:

- `[]`: This is the lambda introducer, which signifies the beginning of a lambda expression. 
It allows you to define an anonymous function or closure inline.

- `(int i)`: This is the parameter list of the lambda function. It specifies the parameters 
that the lambda function takes. In this case, the lambda function takes an integer `i` as input.

- `{ ... }`: This is the body of the lambda function, enclosed within curly braces. It contains
 the code that defines the behavior of the lambda function. In this example, it just prints.

*/

int main()
{
	vector<int> v {4, 1, 3, 5, 2, 3, 1, 7};
	printVector(v);
    return 0;
}

// u may see some new header file includes see below for more information.
/*
`#include <bits/stdc++.h>` is a convenience header file that includes a large number of 
other standard C++ header files. It's commonly used in competitive programming environments 
where there's a need to include many standard headers quickly without worrying about which 
specific headers are required for a particular program.

This header is not part of the C++ Standard Library, but it's provided by some compilers, such 
as GCC and Clang, to make it easier to include all standard headers at once.

It's important to note that using `#include <bits/stdc++.h>` is not considered good practice in 
professional software development due to its lack of portability and potential for conflicts. Instead, 
it's better to include only the specific headers needed for your program.
*/