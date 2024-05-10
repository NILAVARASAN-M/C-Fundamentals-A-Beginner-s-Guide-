#include<bits/stdc++.h>
using namespace std;

// we can pass an parameter to the begin()

// parameter-1: nothing passed.
// returns the first iterator of the first bucket.

// parameter-2: an integer passed uset.begin(n).
// returns the first iterator in nth bucket.
// if dont know about buckets then gou unordered_map file and see
// detailed explanation is given there.

// returns an iterator of the start iterator.


// we cant modify this iterator, it will throw error.

int main(){
    vector<int> vect={1,2,3,4,5,6,7};
    unordered_set<int> uset(vect.begin(), vect.end());

    auto itr=uset.begin();
    cout<<*itr<<endl;

    // itr=uset.begin(2);
    // cout<<*itr<<endl;
    // why this does not work i dont know.
    // may be the reason i propose is that.
    // use.begin() returns different type
    // and uset.begin(int n) returns diferent type so only.
    // may be this can be the reason.

    auto itr1=uset.begin(2);
    cout<<*itr1<<endl;

    auto itr2=uset.begin(3);
    cout<<*itr2<<endl;

    // *itr=23; 
    // this will throw error
    // because itr is pointing to an element in the uset.
    // uset of type unordered_set, we cant modify the values in an set so
    // error
}