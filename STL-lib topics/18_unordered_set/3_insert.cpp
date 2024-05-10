#include<bits/stdc++.h>
using namespace std;

// parameters-1:
// insert(value) --> the value will inserted if not present, else since there
// no need to insert.

// paarmeter-2:
// insert(first, last) --> first and last are  the iterators which need to
// be inserted where first is inclusive and last is exclusive.
// all the values in this range will be inserted.

// returns-type
// returns an pair, 
// where pair.first is the iterator pointing to the (unoreder_map<int>::iterator)
// newly inserted value. Or if aldready that value is present then that
// iterator is in pair.first
//  pair.second is an boolean type.
// if true then was no such value and is freshly inserted, else
// if false then it tells us that the value was aldready present so no 
// need to insert --> so only false.

int main1(){
    unordered_set<string> uset;
    uset.insert("nila");
    uset.insert("mani");
    auto pair1=uset.insert("priya");
    auto pair2=uset.insert("nila");

    // check for priya
    if(pair1.second) cout<<"Present"<<*(pair1.first)<<endl;
    else cout<<"Not-Present"<<endl;

    // check for nila
    if(pair2.second) cout<<"Present"<<*(pair2.first)<<endl;
    else cout<<"Not-Present"<<endl;
    return 0;
}

void display(unordered_set<int> &uset){
    for(auto itr=uset.begin(); itr!=uset.end(); itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vect={1,2,3,4,5,6,7};
    unordered_set<int> uset;
    uset.insert(vect.begin(), vect.end());
    display(uset);
    return 0;
}