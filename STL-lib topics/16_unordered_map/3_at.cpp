/*
unordered_map.at(k);

Parameter:
It is the key value of the element whose mapped value we want to access.

Return type :
A reference to the mapped value of the element with a key value equivalent

Note : The method gives run-time error if key is not present
*/

#include<iostream> 
#include<string>
#include<unordered_map>
using namespace std;

int main()
{
	unordered_map<string,int> mp = {{"first",1}, {"second",2}, {"third",3}, {"fourth",4}};
									
	// we use .at() function, here if the key: "second" is not present then it will throw an error. Here present, so it will not throw an error. 
	cout<<"Value of key mp['second'] = "<<mp.at("second")<<endl;
	try
	{
		mp.at("five");
        cout<<mp.at("five");
	} 

	catch(const out_of_range &e)
	{
		cerr << "Exception at " << e.what() << endl;
	} 
    // above code keY:"five", is not present. so it will throw an error. we use .at() to access the element.
    // but when we use [] <- operator, if the key is not present. it will create a key, and initilaize the value with zero.
    // initially mp has no key:five, but using [] <- operator will create an key value, and initiz with an defaut value
    // for int ---> 0, string --> "" etc.

    cout<<mp["five"]<<"hi"<<endl;
    // above will create an key-value pair, with value as default "0", since the key is not present in mp<-unordered_map. 
    // since key "five" is present now,it will not throw an error.
    cout<<mp.at("five");
	return 0;
}


// at() : can only be used for updating, editing. etc we cannot create an key-value pair, with the help of this.
// [] : we can use this operator, to create/ insert/ delete/ update/ edit etc.

// Both at() and operator[] is used to refer the element present at the given position,
//  the only difference is, at() throws out-of-range exception whereas operator[] shows undefined behavior i.e. 
// if operator[] is used to find the value corresponding to key and if key is not present in unordered map,
//  it will first insert the key into the map and then assign the default value ‘0’ corresponding to that key.
