// equal_range is an function, which will

/*
The unordered_map::equal_range() is an inbuilt function in C++ STL which is used to return the bounds 
of a range that includes all the elements in the container with a key that compares equal to k. 
The unordered_map containers are the container where keys are unique, the range will include one element at most. 
The range is defined by two iterators,

The first one pointing to the first element of the range.
The second one pointing past the last element of the range.
Parameters: This function accepts single parameter key which is used to hold the value to be compared.

Return Value: It returns a pair which contains a pair of iterators defining the wanted range. Where its members 
are pair::first and pair::second. The first one is an iterator to the lower bound of the range and the second one
 is an iterator to its upper bound. The elements in the range are those between these two iterators, including first pair, but not second.
*/

// we pass the key, and it will return all the pair's with the same key. that it will return. but w.k.t the, unordered_map 
// the key's are unique, it means for any key. if the key is present then there can be only one iterator possible.
// we can just use this an alterantive for find(), but both anyway have the same compecity, so .

// C++ program to implement 
// unordered_map::equal_range() function 
#include <iostream> 
#include <unordered_map> 
using namespace std; 

// main program 
int main() 
{ 
	unordered_map <int, int> map = { { 1, 3 }, 
									{ 1, 2 }, 
									{ 3, 1 }, 
									{ 2, 3 } }; 
	for (int j = 1; j <= 3; j++) { 
		auto range = map.equal_range(j); 
		
		//'auto' is a keyword 
		for (auto i = range.first; i != range.second; i++) { 
			
			// iterates first to last 
			cout << "first : " << i->first; 
			cout << "\nsecond : " << i->second << endl 
				<< endl; 
		} 
	} 
} 
