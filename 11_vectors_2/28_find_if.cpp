// we will see find_if and find_if_not both the functions.
// it takes three paramters, 
// 1.) and 2.) tells the range of the array/vectors/list/string using iterators, pointers etc.
// 3rd parameter is an unary function, which take one value at a time from the vector, and returns true if the condn satisfies.
// so it takes the argument, to the function performs operation return bool.
// the first true returned will the the value given by  this function, if not found then returns the last iterator.
// used when u want to find the first occurence of odd/even/prime number in a vector similar many appliaction

#include<iostream>
#include<vector>
#include<algorithm>

// 1.) find_if() --> function

int main_1(){
    std::vector<int> vect={ 2, 30, 45, 33, 56, 23, 47, 20, 10 };
    auto itr1=std::find_if(vect.begin(), vect.end(), [](int num){
        return num%2;
    });
    auto itr2=std::find_if(vect.begin(), vect.end(), [](int num){
        return num%10==0;
    });
    if(itr2!=vect.end()){
        std::cout<<"The first 10 mutiplr number is: "<<*itr2;
    }
    if(itr1!=vect.end()){
        std::cout<<"The first odd number is: "<<*itr1;
    }
    return 0;
}
// this returns the first iterator, which returns true by the lambda-function.

// 2.) find_if_not() --> function
int main(){
    std::vector<int> vect={ 2, 30, 45, 33, 56, 23, 47, 20, 10 };
    auto itr1=std::find_if_not(vect.begin(), vect.end(), [](int num){
        return num%2;
    });
    auto itr2=std::find_if_not(vect.begin(), vect.end(), [](int num){
        return num%10==0;
    });
    if(itr2!=vect.end()){
        std::cout<<"The first not 10 mutiplr number is: "<<*itr2<<std::endl;
    }
    if(itr1!=vect.end()){
        std::cout<<"The first even number is: "<<*itr1;
    }
    return 0;
}
// this returns the first iterator, which returns false by the lambda-function.