// lets see how to use vector in an for-loop.

#include<iostream>
#include<vector>

// using normal for-loops.
int main1(){
    std::vector<int> vect{1,2,3,4,5,6,7,8,9};
    for(auto i=vect.begin(); i!=vect.end(); i++){
        *i=(*i)*(*i);
    }
    for(auto i=vect.begin(); i!=vect.end(); i++){
        std::cout<<*i<<" ";
    }
    return 0;
}

// using range based for-loops.
int main(){
    std::vector<int> vect{1,2,3,4,5,6,7,8,9};
    for(auto it: vect){
        std::cout<<it<<" ";
    }
    // here one dought may arise still we thought that vector is an collection of iterators, but here it is deduced as integer 
    // how??

    // this is quite complex, so as of now understand that the vector is an collection of integers, and not iterators.
    //we will see in the next file, more clearly about this iterators.
    // so unless u explicitly use begin(), end() function. the elements in the vector are intger, and return integer and
    // not iterator.
}