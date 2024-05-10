// there are three ways we can use =operator in a unordered set.

// The first version takes reference of an unordered_set as an argument and copies it to an unordered_set.
// The second version performs a move assignment i.e it moves the content of an unordered_set to another unordered_set.
// The third version assigns contents of an initializer list to an unordered_set.

/*
uset.operator= ( unordered_set& us )
uset.operator= ( unordered_set&& us )
uset.operator= ( initializer list )
*/

// Return value: All of them returns the value of this pointer(*this) 

// C++ code to illustrate the method 
// unordered_set::operator=() 
#include <iostream> 
#include <unordered_set> 
using namespace std; 
 
// merge function 
template <class T> 
T merge(T a, T b) 
{ 
    T t(a); 
    t.insert(b.begin(), b.end()); 
    return t; 
} 
 
int main() 
{ 
    unordered_set<int> sample1, sample2, sample3; 
     
    // List initialization 
    sample1 = { 7, 8, 9 }; 
    sample2 = { 9, 10, 11, 12 }; 
     
    // Merge both lists 
    sample3 = merge(sample1, sample2); 
     
    // copy assignment 
    sample1 = sample3; 
 
    // Print the unordered_set list 
    for (auto it = sample1.begin(); it != sample1.end(); ++it) 
        cout << *it << " "; 
    cout << endl; 
 
    for (auto it = sample2.begin(); it != sample2.end(); ++it) 
        cout << *it << " "; 
    cout << endl; 
 
    for (auto it = sample3.begin(); it != sample3.end(); ++it) 
        cout << *it << " "; 
    cout << endl; 
} 