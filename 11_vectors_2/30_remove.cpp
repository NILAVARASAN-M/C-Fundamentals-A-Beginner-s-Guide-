// we use this function to remove all the target eleemnt in the vector.
// we cant specify any offset for this, like u say target_value=3, and give a offset 4.
// so the remove function will remove only the first offset values which are equal to target <---- this is not possible.
// for this to be achivied we use remove_if() function.

// Three parameters for remove() function,
// 1.), 2.) is the range for the vector/ arrays/ list using index/ iterators/ pointers.
// 3rd parameter, this is the target value.

// WORKING: so how the function works is, from the range of the vector, we remove all the values which matches the target value.
// return: this function basically returns an iterator, so basically this iteartor is the new end of the vector. the begining remains same.
// so vector.begin()...itr(returned by the remove function)--> this is the new vector with all the non-equal target values.

#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::vector<int> vec{ 10, 20, 30, 30, 20, 10, 10, 20 };
    std::vector<int> ve{ 10, 20, 30, 30, 20, 10, 10, 20 };
    auto itr1=std::remove(vec.begin(), vec.end(), 10);
    auto itr2=std::remove(ve.begin(), ve.end(), 20);
    auto temp=vec.begin();
    int count=0;
    while(temp!=itr1){
        std::cout<<*temp<<" ";
        temp++;
        count++;
    }
    std::cout<<*(itr1++)<<*(itr1++)<<*(itr1);
    std::cout<<std::endl;
    for(int num: vec){
        std::cout<<num<<" ";
    }
    return 0;
}