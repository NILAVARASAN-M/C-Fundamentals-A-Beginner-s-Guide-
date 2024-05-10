#include<bits/stdc++.h>
using namespace std;

// parametere: we need to pass an parameter.
// returns: it will return an iterator.
// if that paramter is present then will return
// that iterator else will return set.end().

// similar to count() this find() can also be used to check
// if an value is present or not.

int main(){
   unordered_set<string> sampleSet = { "geeks1", "for", "geeks2" }; 
     if (sampleSet.find("geeks1") != sampleSet.end()) { 
        cout << "element found." << endl; 
    } 
    else { 
        cout << "element not found" << endl; 
    } 

    if (sampleSet.find("geeksforgeeks") != sampleSet.end()) { 
        cout << "found" << endl; 
    } 
    else { 
        cout << "Not found" << endl; 
    } 
    return 0; 
}
