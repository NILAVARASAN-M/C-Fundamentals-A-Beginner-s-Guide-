// The unordered_set::bucket() method is a builtin function in C++ STL which returns the bucket number of a specific element.
// That is, this function returns the bucket number where a specific element is stored in the unordered_set container. The bucket is a slot 
// in the unordered_set’s internal hash table where elements are stored. 

// C++ program to illustrate the 
// unordered_set::bucket() function 

#include <iostream> 
#include <unordered_set> 

using namespace std; 

int main() 
{ 

	unordered_set<int> sampleSet; 

	// Inserting elements 
	sampleSet.insert(5); 
	sampleSet.insert(10); 
	sampleSet.insert(15); 
	sampleSet.insert(20); 
	sampleSet.insert(25); 

	for (auto itr = sampleSet.begin(); itr != sampleSet.end(); itr++) { 
		cout << "The Element " << (*itr) << " is present in the bucket: "
			<< sampleSet.bucket(*itr); 
		cout << endl; 
	} 

	return 0; 
} 
