// lets see how to declare an iterator without using the auto-keyword.

#include<iostream>
#include<vector>

int main(){
    std::vector<int> vect{3,2,1};
    std::vector<int>::iterator obj1=vect.begin();

    const std::vector<int> vect2{1,2,3,4,5};
    std::vector<int>::const_iterator pbj2=vect2.begin();

    std::vector<int>::const_iterator itr1=vect.cbegin();
    std::vector<int>::iterator itr1=vect.cbegin(); // beacuse cbegin() will always return an iterator of type const_iterator. since we dont want the
    // values in the vector to get modified.
    
    std::cout<<*obj1<<std::endl;
    // here we derefrencing and printing the value
    std::cout<<obj1<<std::endl;
    // here the cout does not how to print this obj1, since it is an iterator, so it gives an compilation error.
}