// let see some ways to intialize the maps in c++.

/*
1.) Initialization using assignment and subscript operator
2.) Initialization using an initializer list
3.) Initialization using an array of pairs
4.) Initialization from another map using the map.insert() method
5.) Initialization from another map using the copy constructor
6.)Initialization through a range
*/

// WAY-1 of initializng.

#include <iostream>
#include <map>
using namespace std;

int main() 
{
// Initialize map using 
// default constructor
map<string, string>New_Map;
New_Map["Ground"] = "Grass";
New_Map["Floor"] = "Cement";
New_Map["Table"] = "Wood";

for(auto x: New_Map)
{
	cout << x.first << "->" << 
			x.second <<endl;
}
return 0;
}
