// this function is used to check if an vector is empty or not, returns an boolean value TRUE/FALSE, for the vector.
// The empty() function is used to check if the vector container is empty or not.
// True, if vector is empty
// False, Otherwise

#include<iostream>
#include<vector>

int main(){
    std::vector<int> vect;
    for(int i=0;i<10;i++){
        vect.push_back(i);
    }
    std::cout<<((vect.empty())?"EMPTY":"FULL")<<std::endl;
    vect={};
    std::cout<<((vect.empty())?"EMPTY":"FALSE")<<std::endl;
    return 0;    
}