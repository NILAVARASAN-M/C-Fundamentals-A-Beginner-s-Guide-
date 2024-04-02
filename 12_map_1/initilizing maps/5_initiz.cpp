// C++ program to implement 
// the above approach
#include <iostream>
#include <map>
using namespace std;

// Driver code
int main() 
{
// Initialize a map using 
// default constructor
map<string, string>old_map;

// Adding key-value pairs using 
// subscript([]) and assignment(=) 
// operators
old_map["Ground"] = "Grass";
old_map["Floor"] = "Cement";
old_map["Table"] = "Wood";

// Create a new_map where contents 
// of the previous map will be copied 
// using copy constructor 
map<string, string>New_Map(old_map);

// Traverse through the unordered_map
for(auto x: New_Map)
{
	cout << x.first << "->" << 
			x.second <<endl;
} 
return 0;
}
