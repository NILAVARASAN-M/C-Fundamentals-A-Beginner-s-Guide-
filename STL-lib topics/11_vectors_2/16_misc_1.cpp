// lets see some small-question that can be asked from vectors, relate to vectors like searching, finding, index, sort etc.

#include<iostream>
#include<vector>
#include<algorithm>

void display(std::vector<int> v){
    for(int items: v){
        std::cout<<items<<" ";
    }
    std::cout<<std::endl;
    return;
}
// QUESTION-1: How to Check if a Vector Contains a Given Element in C++?

// WAY-1
int main_1(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    std::vector<int> vect(arr, arr+(sizeof(arr)/sizeof(arr[0])));
    display(vect);
    int target_value=100;
    auto index=std::find(vect.begin(), vect.end(), target_value); // this will return the iterator if found, if not found then will return vect.end()
    if(index!=vect.end()){
        std::cout<<"Found the element";
    }
    else{
        std::cout<<"Not Found the element";
    }
    return 0;
}

// WAY-2
int main2(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,10,10,101,10,10};
    std::vector<int> vect(arr, arr+(sizeof(arr)/sizeof(arr[0])));
    int target_value=10;
    int count_val=std::count(vect.begin(), vect.end(), target_value);
    // count will return the number of times the element has been occured.
    if(count_val){
        std::cout<<"Found the element"<<count_val;
    }
    else{
        std::cout<<"Not Found the element";
    }
    return 0;
}

// QUESTION-2 How to find index of a given element in a Vector in C++

// WAY-1
int main_3(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,10,10,101,10,10};
    std::vector<int> vect(arr, arr+(sizeof(arr)/sizeof(arr[0])));
    int target_value=10;
    auto itr=std::find(vect.begin(), vect.end(), target_value);
    if(itr!=vect.end()){
        int index=itr-vect.begin();
        std::cout<<"INDEX: "<<index;
    }
    else{
        std::cout<<"No elemenet";
    }
    return 0;
}
// above will tell us at the first occurence only, but if u want to find all the occurence then. belwo
// WAY-2 
int main_2(){
    int arr[]={10,2,10,3,4,5,6,7,8,9,10,10,10,101,10,10};
    std::vector<int> vect(arr, arr+(sizeof(arr)/sizeof(arr[0])));
    int target_value=10;
    auto itr=std::find(vect.begin(), vect.end(), target_value);
    while(itr!=vect.end()){
        std::cout<<itr-vect.begin()<<" ";
        vect.erase(itr);
        itr=std::find(vect.begin(), vect.end(), target_value);
    }
    return 0;
}