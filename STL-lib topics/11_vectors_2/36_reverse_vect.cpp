#include<iostream>
#include<vector>
#include<algorithm>


void display(std::vector<int>& vect){
    for(int val: vect){
        std::cout<<val<<" ";
    }
    std::cout<<std::endl;
}

int main(){
    std::vector<int>v = {1, 3, 10, 3, 10, 1, 3, 3, 10, 7, 8, 1, 3, 10};
    display(v);
    std::reverse(v.begin(), v.end());
    display(v);
    std::reverse(v.begin(), v.begin()+5);
    display(v);
    return 0;
}