// The unordered_set::load_factor() is a built-in function in C++ STL which returns the current load factor in the unordered_set container. 
// The load factor is the ratio between the number of elements in the container (its size) and the number of buckets (bucket_count):

// load_factor = size / bucket_count

// The load factor influences the probability of collision in the hash table (i.e., the probability of two elements being
//  located in the same bucket). The container automatically increases the number of buckets to keep the load factor below
// a specific threshold (its max_load_factor), by causing a rehash each time when an expansion is needed. 

// load_factor is the number of elements to the number of buckets allocated for that set.
// the load_factor if 1 it-means, the set is implemneted well. and all insert, delete, retreiev operation or O(1) always.

// we have to make sure that the load_factor is always below some treshold, so that the collisions will be less.
// if the load_factor increases then we have to re_hash, and increase the buckets-count so that we can reduce the load_factor.

// C++ program to illustrate the 
// unordered_set::load_factor() function 
#include <iostream> 
#include <unordered_set> 
using namespace std; 

int main() 
{ 

	// declaration 
	unordered_set<char> sample; 

	// inserts element 
	sample.insert('a'); 
	sample.insert('b'); 
	sample.insert('c'); 
	sample.insert('r'); 
	sample.insert('d'); 

	cout << "The size is: " << sample.size(); 
	cout << "\nThe bucket_count is: "
		<< sample.bucket_count(); 

	cout << "\nThe load_factor is: "
		<< sample.load_factor(); 

	sample.insert('f'); 
	sample.insert('k'); 

	cout << "\n\nThe size is: "
		<< sample.size(); 

	cout << "\nThe bucket_count is: "
		<< sample.bucket_count(); 

	cout << "\nThe load_factor is: "
		<< sample.load_factor(); 

	sample.insert('z'); 

	cout << "\n\nThe size is: "
		<< sample.size(); 

	cout << "\nThe bucket_count is: "
		<< sample.bucket_count(); 

	cout << "\nThe load_factor is: "
		<< sample.load_factor(); 
	return 0; 
} 
