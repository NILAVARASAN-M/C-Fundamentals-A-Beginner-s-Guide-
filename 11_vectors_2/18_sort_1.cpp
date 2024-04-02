// we will see how to use inbuilt functions to sort an vector/ array etc.
// we will also see how to sort in ascending/ descending/ lexicographically/ or any form.

// the sort can be achivied for both array/vector.
// three paramaters are to be passed, 
// 1-para: the start index/ iterator/ pointer of the array/ vector.
// 2-para: the end index/ iterator/ pointer of the array/vector.
// 3-para: this is like the key, which is in python. similar to that and is optional.
// be default the sort will sort in scending order, but if u want other order, then use the third parameter.

#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<string>


template<typename T>
void display(T& v){
    for(auto items: v){
        std::cout<<items<<" ";
    }
    std::cout<<std::endl;
    return;
}



// 1.) sorting array, key is default. --> so ascending order.

int main_1(){
    int arr[]={2,3,1,4,2,-1,10,4,5,23,100,0,12,3};
    std::vector<int> vect{2,3,1,4,2,-1,10,4,5,23,100,0,12,3};
    std::sort(vect.begin(), vect.end());
    display(vect);
    std::sort(arr, arr+(sizeof(arr)/sizeof(arr[0])));
    display(arr);
    return 0;
}

// lets see how to use the key, this one is similiar to the key in python,
// so we will see.
// for they key, just keep in mind and write fnction with the following thumbrules-->
// 1.) write an function which takes two arguments
// 2.) now with these two parameters, return boolean value, so this boolean value is based on your requirement.
// example for dec-order, (int a, int b) --> return a>b; ,,,,,, (int a, int b) --> return abs(a)<abs(b);  ,,,
// (string a, string b) --> return a.length<b.length;
// so create a function which takes two arguments, and return a boolean value based on this paramters only.
// 3.) pass the function as the third parameter in the 

// We can also write our own comparator function and pass it as a third parameter. This “comparator”
// function returns a value; convertible to bool, which basically tells us whether the passed “first” argument
// should be placed before the passed “second” argument or not. 


// 2.) sorting in decreasing order.
bool decOrder(int a , int b){
    return a>b;
}

int main_2(){
    std::vector<int> vect{2,3,1,4,2,-1,10,4,5,23,100,0,12,3};
    std::sort(vect.begin(), vect.end(), decOrder);
    display(vect);
    return 0;
}
// 3.) sorting asc_order and desc-order for absolute values.

bool absDecOredr(int a, int b){
    return std::abs(a)>std::abs(b);
}

bool absAscOrder(int a, int b){
    return std::abs(a)<std::abs(b);
}

int main_3(){
    std::vector<int> vect{2,3,1,4,2,-1,10,4,5,23,100,0,12,3, -2, -3, -4, -1000, -123, -321};
    std::sort(vect.begin(), vect.end(), absDecOredr);
    display(vect);
    std::sort(vect.begin(), vect.end(), absAscOrder);
    display(vect);
    return 0;
}

// 4.) sorting a vector of strings, based on the length of the string.

bool lenStrOrder(std::string a, std::string b){
    return a.length()<b.length();
}

int main_4(){
    std::vector<std::string> vect{"apple", "banana", "orange"};
    std::sort(vect.begin(), vect.end(), lenStrOrder);
    display(vect);
    return 0;
}

// 5.) having an stl::pair<int, string>, so sort based on the first one.

bool pair_comparsion(std::pair<int, std::string> a, std::pair<int, std::string> b){
    return a.first<b.first;
}

int main_5(){
    std::vector<std::pair<int, std::string>> vect{{3, "three"}, {1, "one"}, {2, "two"}};
    std::sort(vect.begin(), vect.end(), pair_comparsion);
    for (const auto& pair : vect) {
        std::cout << "{" << pair.first << ", " << pair.second << "} ";
    }
    return 0;
}

// this are the some ways that we can do sorting apart from this we can do many other sorting, so just create a dunction for two paramters
// return a boolean value, that's all --> just follow the thumb_rues that's all.

