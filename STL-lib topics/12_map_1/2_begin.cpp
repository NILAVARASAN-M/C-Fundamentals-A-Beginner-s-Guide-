// lets see begin function for std::map,


#include<iostream>
#include<map>

int main(){
    std::map<int, char> obj;
    obj[1]='a';
    obj[3]='h';
    obj[2]='g';
    obj[4]='f';
    obj[5]='e';
    obj[6]='d';
    obj[7]='c';
    obj[8]='b';

    // when we use begin() function, map is conatiner which is an collection of iterators. so when we use begin() it will return iterator.
    // it will return the first iterator.
    // The iterator will be pointing to the element in the std::map. when we derefernce the iterator, we will get std::pair.
    // so basically, map.begin() this will return an iterator which is an bi-directional iterator, we can increment, decrement,
    // inc/ dec by an offset <----------------- THIS IS NOT POSSIBLE.
    // also.  std::map<int, char>::iterator itr=map.begin(); --> now when we derefrence the itr ---> (*itr), we know that the map
    // in that each element is an pair, so if we derefrence the itr we will get pair.

    // see this clearly in the below two for-loops for printing.

//     for(auto &itr=obj.begin(); itr!=obj.end(); ++itr) {
//     // Accessing elements using the iterator itr
// }
// this code will produce error, beacuse the itr is declared as refrence to obj.begin(), but see this obj.begin() it does know ocuupy
// anu space or memory, just a function when called will return the start iterator. so it does not occupy memory/ so u cant declare
// something like that as an refrence.
for(auto itr=obj.begin();itr!=obj.end();itr++){
    std::cout<<"KEY: "<<itr->first<<" VALUE: "<<itr->second<<std::endl;
}

// w.k.t similar to the pointers in array, we have iterators for std conatiners, but ths pointers and iterators are not same.
// but all the functions, and thinks like derefrenceing, accessing the element etc. ---> all this a=similar.

// here itertaor is pointing the first element in the std::map, the element is of type std::pair.
// we can use the element using like this itr->first, itr->second (for pointers of an class accessing the class elements
// through pointers we use "->" for accesing the members of the class using pointers).

// lets see another way of printing:
for(auto itr=obj.begin();itr!=obj.end(); itr++){
    std::cout<<"KEY: "<<(*itr).first<<", VALUE:"<<(*itr).second;
}
// we are basically derefrencing the iterators, which will give us the pair, then we can the "." operator.
}

// same as the vectors, that's all.