// we will see all the max-functions for set
// max_bucket_count()
// max_load_factor()
// max_size()

// max_bucket_count()
// returns the maximum possible buckets for an set. But this value does not indicate the bucket allocated for the current set.
// but what is the upper-limit for the number of buckets in an set.

// max_load_factor()
// The load factor is the ratio between number of elements in the container and number of buckets(bucket_count). By default 
// the maximum load factor of an unordered set container is set to 1.0 .

// max_size()
// which returns maximum number of elements that an unordered_set container can hold(i.e the maximum size of the unordered_set)
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	unordered_set<int> Myset;

	Myset.insert(10);
	Myset.insert(20);

	// printing the contents
	cout<<"Elements : ";
	for (auto it = Myset.begin(); it != Myset.end(); ++it)
		cout << "[" << *it << "]";
	cout << endl;

	// inspect current parameters
	cout << "max_size : " << Myset.max_size() << endl;
	cout << "max_bucket_count() : " << Myset.max_bucket_count() << endl;
	cout << "max_load_factor() : " << Myset.max_load_factor() << endl;
	
	return 0;
}
