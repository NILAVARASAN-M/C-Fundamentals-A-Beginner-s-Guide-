// we will see how to access the elements in an array using [] and 'at()' function.

#include<iostream>
#include<vector>

int main1(){
    std::vector<int> vect{1,2,3,4,5,6,7,8,9};
    for(int i=0;i<vect.size();i++){
        std::cout<<vect[i]<<" ";
    }
    return 0;
}
// this is one of the way of accessing an element in an specific loaction from an vector.
// it is faster, but it does not check the bound limit, suppose if an element goes out of the range, this will not throw error.
// but throws some garbage value.

// this size() function returns the size of the vector.

int main(){
    std::vector<int> vect{1,2,3,4,5,6,7,8,9};
    for(int i=0;i<vect.size();i++){
        std::cout<<vect.at(i)<<" ";
    }
    return 0;
}
// at() is another way of accessing the elements in the vector, it is slower compared to [], but it does
// check the bounds, if out of the range then will throw error.

/*
Comparison
operator[]: Faster because it does not perform bounds checking. Use this when you are sure that the index is within the 
valid range of the vector.

at(): Safer because it checks the bounds and throws an exception if the index is out of range. Use this when you 
need to ensure the access is within the bounds of the vector, especially if the index might be dynamically determined 
during runtime.

Both methods give you access to the vector's elements and allow you to read or modify them.
*/
