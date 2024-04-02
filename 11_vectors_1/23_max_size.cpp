// this max_size function, give the maximum size the vector can hold.
// this represents the maximum-space that is been allocated for the container-vector, to store the elemenets

#include<iostream>
#include<vector>

int main(){
    std::vector<int> vect{3,2,1,4};
    std::cout<<" The maximum elements that the container can accomadate is:"<<vect.max_size();
}

// This code will output the maximum number of elements that the vector vec can hold. Keep in 
// mind that this number represents a theoretical limit and may not be practically achievable due
// to memory constraints or other limitations of the system.