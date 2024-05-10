// see this is one smilar to the search function, so go refeer that first.
// what difference this makes then that is that, here the it will return the last occurence of the subSequence in the mainSequence.

// so this will take the same parameters as search function, only th return value changes.
// It returns an iterator to the first element of 
// the last occurrence of [first2,last2) in [first1,last1).
// If the sequence is not found or [first2,last2) is empty,
// the function returns last1.

// it is similar to std::search in such a way that in std::search , we look for the first occurrence of a sub-sequence
// inside another container, whereas in std::find_end, we look for the last occurrence of such sub-sequence, 
// and returns an iterator to the first element if such sub-sequence is found.

#include<iostream> 
#include<vector> 
#include<algorithm> 

// 1.) CODE-1
int main_1() 
{ 
	std::vector<int>v = {1, 3, 10, 3, 10, 1, 3, 3, 10, 7, 8, 
					1, 3, 10}; 
	std::vector<int>v1 = {1, 3, 10}; 
	std::vector<int>::iterator ip1=std::find_end(v.begin(), v.end(), v1.begin(), v1.end()); 
	std::cout << (ip1 - v.begin()) << "\n"; 
    auto ip2=std::find_end(v.begin(), v.end(), v1.begin(), v1.end(), []
    (int a, int b){
        return a!=b;
    });
    std::cout << (ip2 - v.begin()) << "\n";
	return 0; 
} 

// Pred: Binary function that accepts two elements
// as arguments (one of each of the two sequences, in the same order),
// and returns a value convertible to bool. 
// The value returned indicates whether the elements are considered
// to match in the context of this function.
// The function shall not modify any of its arguments.
// This can either be a function pointer or a function object.

// To search from the end: It is the reverse variant of std::search, i.e., std::search searches for a 
// sub-sequence from the beginning of the list , such that it can return the first occurrence of that subsequence.
// On the other hand std::find_end can be used if we want to search for a sub-sequence from the end of the list,
//  which will automatically be the last occurrence of any subsequence inside a container.

// CODE-2
int main_2() 
{ 
	int i, j; 
	std::vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7, 3, 4, 5 }; 
	std::vector<int> v2 = {3, 4}; 
    // using search() function
	std::vector<int>::iterator i1=std::search(v1.begin(), v1.end(), v2.begin(), v2.end()); 
	if (i1 != v1.end()) { 
		std::cout << "vector2 is present firstly at index "
			<< (i1 - v1.begin()); 
	}
    // using find_end() function
	// Using std::find_end to find the last occurrence of v2 
	i1 = std::find_end(v1.begin(), v1.end(), v2.begin(), v2.end()); 
	if (i1 != v1.end()) { 
		std::cout << "\nvector2 is present lastly at index "
			<< (i1 - v1.begin()); 
	}
	return 0; 
} 

// CODE-3
// FINAL -CODE

// Defining the Predicate Function to find the last occurrence 
// of an odd number 
bool pred( int a, int b) 
{ 
	if (a % b != 0) { 
		return 1; 
	} else { 
		return 0; 
	} 
} 

// Defining the Predicate Function to find the last occurrence 
// of an even number 
bool pred1( int a, int b) 
{ 
	if (a % b == 0) { 
		return 1; 
	} else { 
		return 0; 
	} 
} 

int main() 
{ 

	// Defining a vector 
	std::vector<int>v1 = {1, 3, 4, 5, 6, 7, 8, 10}; 
	
	// Declaring a sub-sequence 
	std::vector<int>v2 = {2}; 
	
	// Using std::find_end to find the last occurrence of an 
	// odd number 
	std::vector<int>::iterator ip=std::find_end(v1.begin(), v1.end(), v2.begin(), v2.end(), pred); 
	std::cout << "Last odd no. occurs at " << (ip - v1.begin()); 

	// Using std::find_end to find the last occurrence of an 
	// even number 
	ip = std::find_end(v1.begin(), v1.end(), v2.begin(), v2.end(), pred1); 
	// Displaying the index where the last even number occurred 
	std::cout << "\nLast even no. occurs at " << (ip - v1.begin()); 
	return 0; 
} 
