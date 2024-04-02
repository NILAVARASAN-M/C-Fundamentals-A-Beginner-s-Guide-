// lets see some small application using empty in c++

#include<iostream>
#include<vector>

int main(){
    std::vector<int> myvector{ 1, 5, 6, 3, 9, 2 };
    int sum=0;
    while(!myvector.empty()){
        sum+=myvector.back();
        // this will return the last element in the vector
        myvector.pop_back();
        // this function will remove the last elemnet, but will not return the last element. and therfore reduces 
        // the size of the vector by 1.
    }
    std::cout<<sum<<std::endl;
}