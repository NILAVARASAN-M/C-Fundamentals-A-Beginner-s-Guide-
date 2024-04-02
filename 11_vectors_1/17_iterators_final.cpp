// we will just club, all the iterators that we have so far studied in the one cpp file.

#include<iostream>
#include<vector>
int main(){
    // using pushback function
    std::vector<int> vect;
    for(int i=0;i<10;i++){
        vect.push_back(i);
    }

    // using at function and size function.
    for(int i=0;i<vect.size();i++){
        std::cout<<vect.at(i)<<" ";
    }
    std::cout<<std::endl;

    // using begin() and end() functions.
    for(auto itr=vect.begin();itr!=vect.end();itr++){
        std::cout<<*itr<<" ";
    }
    std::cout<<std::endl;

    // using rbegin() and rend() functions.
    for(auto itr=vect.rbegin();itr!=vect.rend();itr++){
        std::cout<<*itr<<" ";
    }
    std::cout<<std::endl;
    
    // using cbegin() and cend() functions.
    for(auto itr=vect.cbegin();itr!=vect.cend();itr++){
        std::cout<<*itr<<" ";
    }
    std::cout<<std::endl;

    // using begin() and end() functions.
    for(auto itr=vect.crbegin();itr!=vect.crend();itr++){
        std::cout<<*itr<<" ";
    }
    std::cout<<std::endl;
}