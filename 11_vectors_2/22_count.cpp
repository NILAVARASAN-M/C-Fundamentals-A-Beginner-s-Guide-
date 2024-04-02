// lets see how to use count function on an vector.
// count is an function defined under algorithms header file.
// count basically takes three parameters
// 1.) the startindex, 2.) and the end index , 3.) the target element.
// so it count the number of occurence of an the target element in the vect.

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main(){
    std::vector<int> vect{1,2,2,3,3,33,43,3,3,3,2,2,2,21,10,1};
    std::cout<<"The number of occurence of 2 is"<<std::count(vect.begin(), vect.end(), 2);
    std::cout<<"The number of occurence of 10 is"<<std::count(vect.begin(), vect.end(), 10);
    std::cout<<"The number of occurence of 100 is"<<std::count(vect.begin(), vect.end(), 100);
    std::string name= " geeksforgeeks";
    std::cout<<"The number of occurence of e is"<<std::count(name.begin(), name.end(), 'e');
    // std::cout<<"The number of occurence of e is"<<std::count(name.begin(), name.end(), "ee");
    // this is error because it accepts only character, and not a string. so we cant use coumt here, but we can use find function.
    return 0;
}