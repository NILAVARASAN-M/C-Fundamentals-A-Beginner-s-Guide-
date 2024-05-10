// C++ program to demonstrate the 
// working of unordered set of vectors 
#include <bits/stdc++.h> 
using namespace std; 

// Hash function 
struct hashFunction 
{ 
    size_t operator()(const vector<int> &vect)const{
        size_t sum=0;
        for(auto val: vect) sum+=hash<int>{}(val);
        return sum;
    }
}; 
// we should put const `operator()(const vector<int> &vect)const` this const oustide is mandatory. else will not work
// why because we are saying that we are not modifying eventhe elements in tha class also. 
// since operator() here is an member function. so we are telling that we will knot modify the class-elements

// Function to iterate over 
// vector elements 
void printVector(vector<int> myVector) 
{ 
cout << "[ "; 
for(auto element : myVector) 
	cout << element << ' '; 
cout << "]\n"; 
} 

// Function to iterate over unordered 
// set elements 
void print(unordered_set<vector<int>, 
		hashFunction> &unorderedsetOfVectors) 
{ 
for (auto it = unorderedsetOfVectors.begin(); 
	it != unorderedsetOfVectors.end(); 
	it++) 
{ 
	// Each element is a vector 
	printVector(*it); 
} 
} 

// Driver code 
int main() 
{ 
// Declaring a unordered set of vectors 
// Each vector is of integer type 
// We are passing a hash function as 
// an argument to the unordered set 
unordered_set<vector<int>, hashFunction> unorderedsetOfVectors; 

// Initializing vectors 
vector<int> myVector1 {3, 6, 9, 10}; 
vector<int> myVector2 {5, 10, 11, 7}; 
vector<int> myVector3 {3, 6, 9, 10}; 
vector<int> myVector4 {1, 9, 11, 22}; 
vector<int> myVector5 {50, 20, 30, 40}; 

// Inserting vectors into unorderedset 
unorderedsetOfVectors.insert(myVector1); 
unorderedsetOfVectors.insert(myVector2); 
unorderedsetOfVectors.insert(myVector3); 
unorderedsetOfVectors.insert(myVector4); 
unorderedsetOfVectors.insert(myVector5); 

// Calling print function 
print(unorderedsetOfVectors); 

return 0; 
}


// one question should arise after reading the 16_unorderedMap folder.

// there for every mutable-types, we have declared operator==function (but why the reason i have explained clearly there see)
// but here we have not declared like that for anything??? 
// till noe we have not declared that is the reason, because for pair vector, etc the operator== is declared. not visible to us that's all.

// so next we will see how to insert user-defined class in sets.
// for this,
// 1.) we have to declare a hash-function for that user-defined-class.
// 2.) we have to declare an operator==() function inside the user-defined class --> why?? go see that folder you will understand clearly why???.
