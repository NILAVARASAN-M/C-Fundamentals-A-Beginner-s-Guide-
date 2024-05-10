/*
The unordered_set::reserve() method is a builtin function in C++ STL which is used to request capacity change
of unordered_set. It sets the number of buckets in the container to contain at least n elements. If n is greater
than the current bucket_count multiplied by the max_load_factor, the container’s bucket_count is increased and a 
rehash is forced. If n is lower than the bucket_count, then the function has no effect on it. 
*/

// we pass an unsigned(size_t) 'n' value as the parameter, this tells us that this 'n' tells us that suppose if there 
// n is the number of elements that you wish to store in the set. so the set will allocate in before hand that much buckets for the n-elements
// Suppose you pass an n=100, then for storing this 100-elements that much bucket are created. But there will be no-elemnts, we are just reserving.
// suppose if we have added 100-elements, and wish to store 20 more elements. But our set will lead to collison, if we store more elements.

// so re_hash occurs to increase the number of bucket's, will go to next prime-number.

// C++ program to illustrate 
// the unordered_set.reserve() 
#include <iostream> 
#include <string> 
#include <unordered_set> 

using namespace std; 

int main() 
{ 
	// Declaration of unordered_set 
	unordered_set<string> us; 
    cout<<us.bucket_count()<<endl;

	us.reserve(3); 
    cout<<us.bucket_count()<<endl;

	us.insert("geeks"); 
	us.insert("for"); 
	us.insert("geeks"); 
	us.insert("users"); 
	us.insert("geeksforgeeks"); 
    us.reserve(100);
	cout<<us.bucket_count()<<endl;
	return 0; 
} 
