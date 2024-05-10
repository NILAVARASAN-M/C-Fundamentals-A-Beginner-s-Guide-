// C++ program to demonstrate
// unordered_map size() method

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	unordered_map<char, char>
		n{ { 'A', 'G' },
		{ 'B', 'E' },
		{ 'C', 'E' },
		{ 'D', 'K' },
		{ 'E', 'S' } };

	cout << "size of map = "
		<< n.size() << endl;

	return 0;
}
