// this cbegin(), cend() is same as the begin(), end() --> but this will return an iterator which is an const type.
// meaning that we can modify the values of the vector using theis iterators, by derefrencing.

// cbegin(), cend() --> this function also returns an iterator, which is an random access iterator, meaning 
// u can iterate, decrement, increase by an offset value. only one problem is u cant change the value, of the vect.
// so dont get confused that how the iterators is getting increased or decresed, because it is not constant just the elements
// of the vect is constant.

// CPP program to illustrate
// use of cbegin()
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main1()
{
	vector<string> vec;

	// 5 string are inserted
	vec.push_back("first");
	vec.push_back("second");
	vec.push_back("third");
	vec.push_back("fourth");
	vec.push_back("fifth");

	// displaying the contents
	cout << "Contents of the vector:" << endl;
	for (auto itr = vec.cbegin(); 
		itr != vec.end(); 
		++itr)
		cout << *itr << endl;

	return 0;
}

int main1()
{
	vector<string> vec;
	// 5 string are inserted
	vec.push_back("first");
	vec.push_back("second");
	vec.push_back("third");
	vec.push_back("fourth");
	vec.push_back("fifth");

	// displaying the contents
	cout << "Contents of the vector:" << endl;
	for (auto itr = vec.cbegin(); 
		itr != vec.end(); 
		++itr)
        {
            *itr+="sas";
        }
    // the error shown above is due to, itr being a const is being changed so only.
	return 0;
}