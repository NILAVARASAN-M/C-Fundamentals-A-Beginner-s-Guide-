// C++ program to illustrate the
// unordered_set::clear() function

#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{

	unordered_set<string> sampleSet;

	// Inserting elements
	sampleSet.insert("Welcome");
	sampleSet.insert("To");
	sampleSet.insert("GeeksforGeeks");
	sampleSet.insert("Computer Science Portal");
	sampleSet.insert("For Geeks");

	// displaying all elements of sampleSet
	cout << "sampleSet contains: ";
	for (auto itr = sampleSet.begin(); itr != sampleSet.end(); itr++) {
		cout << *itr << " ";
	}

	// clear the set
	sampleSet.clear();

	// size after clearing
	cout << "\nSize of set after clearing elements: "
		<< sampleSet.size();

	return 0;
}

// clear is used to remove all the elements from the set
// so size now will become zero.

// no parameters are passed.
/*
That is, this function removes all of the elements from an unordered_set and empties it.
 All of the iterators, pointers, and references to the container are invalidated. 
This reduces the size of the container to zero.
*/