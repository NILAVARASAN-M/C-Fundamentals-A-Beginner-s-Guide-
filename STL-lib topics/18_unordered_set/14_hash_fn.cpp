// how see what is the bash-value being generated for the value that we pass.

// unary-function: hash-function.
// takes the value and returns that values corresponding hash-value.
// the value will be of type size_t always.
// size_t: unsigned integer.

// parameter: unary the value.
// return: the hash-value.

#include <iostream> 
#include <string> 
#include <unordered_set> 
 
using namespace std; 
int main() 
{ 
    unordered_set<string> sampleSet; 
    // use of hash_function 
    unordered_set<string>::hasher fn = sampleSet.hash_function(); 
    cout << fn("geeksfrgeeks") << endl; 
    return 0; 
} 