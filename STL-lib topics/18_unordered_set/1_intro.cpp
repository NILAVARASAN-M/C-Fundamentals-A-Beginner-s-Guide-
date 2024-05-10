/*
An unordered_set is an unordered associative container implemented using a hash table where keys are hashed into indices of a hash
table so that the insertion is always randomized. All operations on the unordered_set take constant time O(1) on an average which 
can go up to linear time O(n) in the worst case which depends on the internally used hash function,
but practically they perform very well and generally provide a constant time lookup operation. 
*/

// Suppose if we want to retreive an key and its value we use map. Some problems there can be where we want to check if an key is present or not.
// Since i dont know anout this set, before. So i was using this map. But using map is costly. Since the value will not be used only we 
// we will see if the key is present or not. Why costly???
// because we are creating an space for value also. But we will not use the value only.

// so for this cases we use set. 
// we will store the keys in the set, all will be unique, and of same type. Then we pass an value and check if the key is present or not.
// map and set are used accordingly to the problem (based on the problem).

// in set also retrieveal of the key takes constant time only O(1)<-- average case.

#include<bits/stdc++.h>
using namespace std;

void display(unordered_set<int> &uset){
    for(auto itr=uset.begin(); itr!=uset.end(); itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
}

void check(unordered_set<int> &uset, int val){
    if(uset.find(val)==uset.end()) cout<<"No there"<<endl;
    else cout<<"There"<<endl;
    return;
}

int main(){
    vector<int> vect={1,2,3,4,5,6,7,8,9,9,9};
    unordered_set<int> uset(vect.begin(), vect.end());

    // using begin(), end(), derefrencing iterator.
    // printing uset, all duplicates will be removed.
    display(uset);
    // will be in random order, because we know that it is not an array it is an hash-table way of implementation.

    // using insert function, to insert elements to the set.
    for(int i=0; i<20;i++){
        uset.insert(i);
    }
    display(uset);

    // using find function to check if an key exits or not.
    check(uset, 1);
    check(uset, 100);
    check(uset, -1);
    check(uset, 11);
}