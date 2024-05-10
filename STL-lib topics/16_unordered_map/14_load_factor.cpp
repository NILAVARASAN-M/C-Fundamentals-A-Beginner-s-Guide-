// load factor, tells us how much bucket formed, for the given number of elements being inserted.
/*
The unordered_map::load_factor() is a built-in function in C++ STL which returns the current load factor in the 
\unordered_map container. The load factor is the ratio between the number of elements in the container (its size)
 and the number of buckets (bucket_count):
load_factor = size / bucket_count
The load factor influences the probability of collision in the hash table (i.e., the probability of two elements 
being located in the same bucket). The container automatically increases the number of buckets to keep the load 
factor below a specific threshold (its max_load_factor), by causing a rehash each time when an expansion is needed.

Syntax: unordered_map_name.load_factor()
Parameter: The function does not accept any parameter.
Return Value: The function returns the current load factor.
*/

// C++ program to illustrate the 
// unordered_map::load_factor() function 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 

	// declaration of unordered_map 
	unordered_map<char, int> sample; 

	// inserts element 
	sample.insert({ 'a', 2 }); 
	sample.insert({ 'b', 4 }); 
	sample.insert({ 'c', 8 }); 
	sample.insert({ 'd', 10 }); 

	cout << "The size is: " << sample.size(); 
	cout << "\nThe bucket_count is: "
		<< sample.bucket_count(); 

	cout << "\nThe load_factor is: "
		<< sample.load_factor(); 

	sample.insert({ 'e', 0 }); 
	sample.insert({ 'h', 5 }); 

	cout << "\n\nThe size is: "
		<< sample.size(); 

	cout << "\nThe bucket_count is: "
		<< sample.bucket_count(); 

	cout << "\nThe load_factor is: "
		<< sample.load_factor(); 

	sample.insert({ 'f', 1 }); 

	cout << "\n\nThe size is: "
		<< sample.size(); 

	cout << "\nThe bucket_count is: "
		<< sample.bucket_count(); 

	cout << "\nThe load_factor is: "
		<< sample.load_factor(); 
	return 0; 
} 
