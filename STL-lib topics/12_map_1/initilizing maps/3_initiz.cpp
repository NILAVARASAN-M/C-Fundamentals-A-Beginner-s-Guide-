#include <bits/stdc++.h>
using namespace std;

int main() 
{
pair<string,string>old_arr[] = 
{
	make_pair("Ground", "Grass"),
	make_pair("Floor", "Cement"),
	make_pair("Table", "Wood")
};

int n = (sizeof(old_arr) / 
			sizeof(old_arr[0]));


map<string, string> New_Map(old_arr, old_arr + n);
// if vector, then we pass like (vect.begin(), vect.end())

// Traverse through the map
for(auto x: New_Map)
{
	cout << x.first << "->" << 
			x.second <<endl;
} 
return 0;
}
