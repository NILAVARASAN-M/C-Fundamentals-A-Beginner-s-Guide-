// bucket is another function, we just pass the key as an argument, and it will return which bucket number the key is stored in the hash-map.

/*
Syntax: 
size_type bucket(key) 

Parameter:
The function accepts one mandatory parameter key which specifies the key whose bucket number is to be returned. 

Return Value: 
This method returns an unsigned integral type which represents the bucket number of the key k which
is passed in the parameter. 
*/

// CPP program to demonstrate the
// unordered_map::bucket() function
#include <bits/stdc++.h>
using namespace std;

int main()
{
	unordered_map<string, string> mymap;
	mymap = { { "Australia", "Canberra" },
			{ "U.S.", "Washington" },
			{ "France", "Paris" } };

	// returns  the iterator of the first element in the first bucket.
	auto it = mymap.begin();

	// stores the bucket number of the key k
	int number = mymap.bucket(it->first);
    // we will pass the key, to the bucket function. and it will return which bucket number the key is stored.
	cout << "The bucket number of key " << it->first 
									<< " is " << number;

	return 0;
}
