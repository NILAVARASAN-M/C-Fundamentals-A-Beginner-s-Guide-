#include <iostream>
#include <map>
using namespace std;

int main() 
{

map<string, string>old_map;

// Adding key-value pairs using 
// subscript([]) and assignment(=) operators
old_map["Ground"] = "Grass";
old_map["Floor"] = "Cement";
old_map["Table"] = "Wood";


// Create a new_map where contents 
// of the previous map will be 
// copied using copy constructor 
// and iterator provided by the map 
map<string, string>New_Map;
New_Map.insert(old_map.begin(),
				old_map.end());

// Traverse through the map
for(auto x: New_Map)
{
	cout << x.first << "->" << 
			x.second <<endl;
}
}