// lets see some ways to access the elements from an vector.

/*
Element access
1.) reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
2.) at(g) – Returns a reference to the element at position ‘g’ in the vector
3.) front() – Returns a reference to the first element in the vector
4.) back() – Returns a reference to the last element in the vector
5.) data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
*/

// 1.) reference operator [g] 

// 1.1) = -----> operator, 1.2) [] -----> operator .
#include <iostream>
#include <vector>
using namespace std;
// 1.1) 
// This operator is used to assign new contents to the container by replacing the existing contents. 
// It also modifies the size according to the new contents.

int main1()
{
	vector<int> myvector1{ 1, 2, 3 };
	vector<int> myvector2{ 3, 2, 1, 4 };
	myvector1 = myvector2;
	cout << "myvector1 = ";
	for (auto it = myvector1.begin(); it != myvector1.end(); ++it)
		cout << ' ' << *it;
	return 0;
}

//1.2)
// This operator is used to reference the element present at position given inside the operator. 
// It is similar to the at() function, the only difference is that the at() function throws an out-of-range exception when 
// the position is not in the bounds of the size of vector, while this operator causes undefined behavior.

int main()
{
	vector<int> myvector;
	myvector.push_back(1);
	myvector.push_back(2);
	myvector.push_back(3);
	myvector.push_back(4);
	myvector.push_back(5);
	myvector.push_back(6);
	myvector.push_back(7);
	myvector.push_back(8);
	myvector.push_back(9);
	// Vector becomes 1, 2, 3, 4, 5, 6, 7, 8, 9

	for (int i = 0; i < myvector.size(); ++i) {
		if (i % 2 != 0) {
			cout << myvector[i];
			cout << " ";
		}
	}
	return 0;
}