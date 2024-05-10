// C++ program to demonstrate the use of std::search 
// with binary predicate 
#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 

// Defining the BinaryPredicate function 
bool pred(int i, int j) 
{ 
	if (i > j) { 
		return 1; 
	} else { 
		return 0; 
	} 
} 

int main() 
{ 
	int i, j; 

	// Declaring the sequence to be searched into 
	vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7 }; 

	// Declaring the subsequence to be compared to based 
	// on predicate 
	vector<int> v2 = { 3, 4, 5 }; 

	// Declaring an iterator for storing the returning pointer 
	vector<int>::iterator i1; 

	// Using std::search and storing the result in 
	// iterator i1 based on predicate pred 
	i1 = std::search(v1.begin(), v1.end(), v2.begin(), v2.end(), pred); 

	// checking if iterator i1 contains end pointer of v1 or not 
	if (i1 != v1.end()) { 
		cout << "vector1 elements are greater than vector2 starting "
			<< "from position " << (i1 - v1.begin()); 
	} else { 
		cout << "vector1 elements are not greater than vector2 "
			<< "elements consecutively."; 
	} 

	return 0; 
} 



// ******************* MORE ABOUT SEARCH FUNCTIONS ***********************

// how search function works for vectors?????

/*
In C++, the `std::search` algorithm is a part of the `<algorithm>` header and is used to find the 
first occurrence of a subsequence within a sequence. This function is particularly useful when working
 with containers like vectors. Here’s a basic rundown of how it works:

### Function Signature

The function signature of `std::search` looks something like this:

```cpp
template< class ForwardIt1, class ForwardIt2 >
ForwardIt1 search( ForwardIt1 first, ForwardIt1 last, ForwardIt2 s_first, ForwardIt2 s_last );
```

- **first, last**: Forward iterators to the initial and final positions of the sequence that will be searched.
 The range searched is `[first, last)`.
- **s_first, s_last**: Forward iterators to the initial and final positions of the subsequence 
to search for. The range is `[s_first, s_last)`.

The function returns an iterator to the first element of the first occurrence of the subsequence
 within the range `[first, last)`. If the subsequence is not found, the function returns the iterator `last`.

### Example Usage

Here’s an example of how to use `std::search` with a `std::vector`:

```cpp
#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    std::vector<int> subseq = {3, 4};

    // Search for the first occurrence of subseq in vec
    auto it = std::search(vec.begin(), vec.end(), subseq.begin(), subseq.end());

    if (it != vec.end()) {
        std::cout << "Subsequence found starting at position: " << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << "Subsequence not found." << std::endl;
    }

    return 0;
}
```

### How It Works

- `std::search` starts from `first` and iteratively checks each subrange of the same length
 as `[s_first, s_last)` within `[first, last)`.
- For each position in the range `[first, last - (s_last - s_first))`, it checks if the 
subsequence starting at that position matches the sequence `[s_first, s_last)`.
- This is done by comparing each element of the subsequence with the corresponding element in 
the main sequence. If all elements match, a match is found.
- The function returns an iterator to the beginning of the first subsequence found that matches. 
If no such subsequence is found, it returns `last`.

This algorithm is linear in the worst-case scenario, having a complexity of up to `O(N*M)` for sequences 
of length `N` and subsequence of length `M`, but optimizations often make it faster in practice for typical cases.
*/

// template< class ForwardIt1, class ForwardIt2 >
// ForwardIt1 search( ForwardIt1 first, ForwardIt1 last, ForwardIt2 s_first, ForwardIt2 s_last );
// ---------> explain this part clearly

/*
This signature defines a template function `search` that is designed to find a subsequence within a 
sequence in C++. Let's break down the parts for clarity:

### Template Parameters

- `class ForwardIt1`, `class ForwardIt2`: These represent template type parameters. Both `ForwardIt1` 
and `ForwardIt2` are expected to be forward iterators. The distinction between the two allows for the 
sequence and the subsequence to potentially be of different types, as long as they can be compared for
 equality. This is useful when you want to search for a subsequence in a container of a different type but 
 with elements that can still be compared.

### Function Parameters

- `ForwardIt1 first, ForwardIt1 last`: These parameters represent the start and one-past-the-end iterators 
of the sequence in which you are searching. The range they define is `[first, last)`, meaning it includes 
`first` and excludes `last`. This is the sequence within which the function searches for the specified subsequence.
  
- `ForwardIt2 s_first, ForwardIt2 s_last`: Similar to the first pair of parameters, these define the start 
and one-past-the-end iterators of the subsequence to search for within the main sequence. The range 
`[s_first, s_last)` specifies the subsequence that the function will attempt to locate within the main sequence.

### Return Type

- `ForwardIt1`: The function returns an iterator of the same type as the first pair of parameters 
(`first` and `last`). This means it will return an iterator pointing to the start of the found subsequence 
within the main sequence if the subsequence is found. If the subsequence is not found, it returns the `last` 
iterator, indicating the end of the search range in the main sequence.

### How It Works

1. The function iterates over the main sequence defined by `[first, last)`.
2. For each position in the main sequence, it checks if the subsequence defined by `[s_first, s_last)`
 appears starting from that position.
3. If the subsequence is found, the function returns an iterator to the beginning of this subsequence
 in the main sequence.
4. If the subsequence is not found by the time the function has checked all starting positions, it 
returns `last`, signaling that the search did not find the subsequence.

This template function is quite flexible, allowing you to search for subsequences within any container 
(like vectors, lists, etc.) or array that supports forward iteration, making it a powerful tool for a 
wide range of search operations in C++.
*/

// so what is the class in the template means

/*
In C++ templates, the term `class` used within template parameter declaration doesn't strictly mean the
parameter must be a class type. It's a generic placeholder indicating that the template parameter can be 
of any type, including basic data types (like `int`, `double`), pointers, objects, or even other templates.
This is a bit of a historical syntax that has been retained for backward compatibility and to maintain the language's consistency.

When you see something like `template<class T>`, the `T` can represent any type that the template is
 instantiated with. Here's a simple breakdown:

### Basic Example

```cpp
template<class T>
T add(T a, T b) {
    return a + b;
}
```

In this example, `T` can be any type for which the `+` operation is defined. This means `T` can be an `int`, a `float`, a `double`, etc.

### Objects and Custom Types

```cpp
template<class T>
class Box {
public:
    T contents;
    void fill(const T& newContents) {
        contents = newContents;
    }
};
```

Here, `T` could be an integer, a string, a custom class, or even a container from the 
Standard Template Library (STL). The `Box` class can store any type of data, thanks to templates.

### Pointers, Arrays, and Functions

You can also use pointers, arrays, or even functions as template parameters:

```cpp
template<class T>
void processArray(T* array, int size) {
    for (int i = 0; i < size; ++i) {
        // Process array[i]...
    }
}
```

In this case, `T` can be any type, and the function can process an array of any type.

### Why Use `class`?

Using `class` in this context is a bit of a misnomer since it suggests only class types are
 permitted, but C++ allows any type. You can also use the keyword `typename` instead of `class`
  to make it clearer that any type is acceptable, not just class types. These two keywords are 
  interchangeable in template parameter declarations:

```cpp
template<typename T> // This is equivalent to `template<class T>`
void functionName(T parameter) {
    // Function implementation
}
```

Choosing between `class` and `typename` is mostly a matter of personal or organizational style 
preferences, as they function identically in this context.
*/

