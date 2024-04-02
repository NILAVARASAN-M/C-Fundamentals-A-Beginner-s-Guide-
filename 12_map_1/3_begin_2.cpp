// another thing while inserting the elements in the map.
// we know there exist is that we have an key-value, we cannot have multiple keys of same, but the values can have duplicates.
// Key -> No duplicates  , value -> dupliactes allowed.

// so we think that the elements in the map, will be in the order we inserted example:
// 1st insertion-> "1": "A", 
// 2st insertion-> "3": "D" 
// 3rd insertion->  "2": "Z"
// 4th insertion -> "5": "j";
// we may think that similar to python here also, the std::map will be inserted in the order we inserted the elements. 
// but No,
// the elements will be sorted based on the key,
// so now the std::map will be like this
// "1": "A", "2": "Z", "3": "D", "5": "j";
// we can see that the elemnets are not in the order they were inserted (FCFS-first come first serve), but they 
// are in the ascending-order based on keys. 
// but know by default the elements in the map are in the asecding order of the key,
// suppose u dont want the custom ordering then u have to tell u have to explicitly tell.

// using default ordering.

#include<iostream>
#include<map>

struct comp{
    // for being more generic u can use template class.
    bool operator()(const int &a, const int &b){
        return a>b;
    }
};

int main(){
    std::map<int, char> obj;
    obj[1]='a';
    obj[8]='h';
    obj[2]='g';
    obj[4]='f';
    obj[7]='e';
    obj[3]='d';
    obj[5]='c';
    obj[6]='b';
    // DEFAULT: ascending order based on keys.
    for(auto val: obj){
        std::cout<<val.first<<" "<<val.second<<"\n";
    }
    std::cout<<"----------------"<<std::endl;
    // insertion based on descending order, just pass an functor/ lambda function/ function, as the third argument.
    std::map<int, char, comp> obj2;
    obj2[1]='a';
    obj2[8]='h';
    obj2[2]='g';
    obj2[4]='f';
    obj2[7]='e';
    obj2[3]='d';
    obj2[5]='c';
    obj2[6]='b';
    for(auto &val: obj2){
        std::cout<<val.first<<" "<<val.second<<"\n";
    }
}

// now refer the to operator overloading, and come.
// here we know that by default the elements will be ascending order, the key can be anything int, float, string, char, other c++ data-types
// --> for all this operator<() will be defined, and based on that sorting occurs, but what if the key of the map is an object of
// custom-made class/struct etc. so the compiler doe not know how to do sorting because there is no operator() -> defined, so error.
// so next we will see how to solve this.