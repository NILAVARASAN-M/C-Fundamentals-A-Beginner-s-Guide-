#include<iostream>

int main(){
    int arr[]={1,2,2,3,4,5,6,7};
    std::cout<<sizeof(arr)<<std::endl;
    std::cout<<(sizeof(arr)/sizeof(arr[0]))<<std::endl; // <--- length of the array
    return 0;
}