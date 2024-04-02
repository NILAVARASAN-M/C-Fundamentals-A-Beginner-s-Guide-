// Initialization using an Initializer list
// Another way of initializing a map is to use a predefined list of key-value pairs.

#include <iostream>
#include <map>
using namespace std;

int main() 
{

map<string, string>New_Map;


New_Map = {{"Ground", "Grass"}, 
			{"Floor", "Cement"}, 
			{"Table", "Wood"}};
	
for(auto x: New_Map)
{
	cout << x.first << "->" << 
			x.second <<endl;
}
return 0;
}
