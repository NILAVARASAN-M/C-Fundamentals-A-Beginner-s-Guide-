// lets see how to insert std::pair in sets.

// in vector insertion of vector, set, pair, user-defined there is no problem.
// but insertion of user-defined class, another set, vector, pair are not possible to be inserted in set and map, why??
// because we need to create the correspoding hash-value for that element that we want to insert.
// the compiler knows how to insert int, strng, float and similar immutable types etc.
// but does not know mutable type arrays, vector, map, pair, used-defined etc <-- all this are mutable types.
// so there no hash-function defined for this so we have to create our own hash-function for mutable-types.

// let see the hash-function for std::pair, where the pair is stored as the elements in the set. 
#include<bits/stdc++.h>
using namespace std;


struct hash_fn{
    size_t operator()(const pair<int, int> &pa)const{
        return hash<int>{}(pa.first)+hash<int>{}(pa.second);
    }
};
// this above hash-function works. 



/*
struct hash_fn{
    size_t operator()(const pair<int, int> &pa)const{
        return hash<int>{}(pa.first)+hash<int>{}(pa.second);
    }
};
*/
// this above hash-function will not work. Why???? because we are making reference of the pair's from the set. And this pair's should not be modified
// eventhough we dont modfify in the above function. But still we can modify. ANd modifying here will affect the pair located in that set.
// because we have passed by reference, so this variable-pair-pa is an allies with the pair in the original-set. Change in here will be reflected
// in main set. But this against the rules/conditions of set. because we should not change the values in an set. We cant update. So only we
// have to explicity say to the compiler that our own-hash-function will not modify the elements in the pair. this is said using const-keyword.
// here it is mandatory to use const because we take by reference. see below fnction

/*
struct hash_fn{
    size_t operator()(pair<int, int> pa)const{
        return hash<int>{}(pa.first)+hash<int>{}(pa.second);
    }
};
*/
// unlike the above function this function will work. But how because above only i told that we need to make sure the pair is const.
// since here we are not taking the pair as an reference so, an copy of the pair is created and passed. So no problem const is not mandtory,
// because it will not affect the elements in the set.

void print(const unordered_set<pair<int, int>, hash_fn> &uset){
    for(const auto itr: uset){
        pair<int, int> pa=itr;
        cout<<"("<<pa.first<<","<<pa.second<<")"<<endl;
    }
    cout<<endl;
}

int main(){
    unordered_set<pair<int, int>, hash_fn> myUnorderedSet;
     
    pair<int, int> pair1; 
    pair1 = make_pair(4, 2); 
    
    pair<int, int> pair2; 
    pair2 = make_pair(2, 3); 
    
    pair<int, int> pair3; 
    pair3 = make_pair(2, 3); 
    
    pair<int, int> pair4; 
    pair4 = make_pair(5, 8); 
    
    pair<int, int> pair5; 
    pair5 = make_pair(9, 5); 
    
    
    // Inserting pairs in the unordered set 
    myUnorderedSet.insert(pair1); 
    myUnorderedSet.insert(pair2); 
    myUnorderedSet.insert(pair3); 
    myUnorderedSet.insert(pair4); 
    myUnorderedSet.insert(pair5); 
  
  // Calling print function 
  print(myUnorderedSet); 
  return 0; 
}