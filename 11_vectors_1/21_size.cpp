// this function will return the size of the vector.

// Implementation of size() function
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> myvector{ 1, 2, 3, 4, 5 };
	cout << myvector.size();
	return 0;
}


// Why is empty() preferred over size()
// empty() function is often said to be preferred over the size() function due to some of these points- 

// empty() function does not use any comparison operators, thus it is more convenient to use
// empty() function is implemented in constant time, regardless of container type, whereas some 
// implementations of size() function require O(n) time complexity such as list::size().
