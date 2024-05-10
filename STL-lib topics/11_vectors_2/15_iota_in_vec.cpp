// lets see how we wcan apply iota function in vetors.
// iota is an function defined under the numeric-header. it just used to populate values, it will always increment by 1 only.
// we will pass three paramters, 
// parameter 1.) for vector the start iterator and 
// parameter 2.) the end iterator, 
// parameter 3.) an integer values. // supppose if we give '8', then it will start with inserting 8 at the iterator=vect.begin() and increment
// then the next value will be placed in the next iterator, continues till vect.end() --> but this is excluded.

#include<iostream>
#include<vector>
#include<numeric>

void display(auto v){
    for(auto items: v){
        std::cout<<items<<" ";
    }
    std::cout<<std::endl;
    return;
}

// way-1 ,
int main_1(){
    std::vector<int> v(5);
    std::iota(v.begin(), v.end(), 2);
    display(v);
    return 0;
}
// way-2
int main_2(){
    std::vector<char> v(5);
    std::iota(v.begin(), v.end(), 'a');
    display(v);
    return 0;
}
// way-3
int main_3(){
    std::vector<int> v(100);
    std::iota(v.begin(), v.end(), 10000);
    display(v);
    return 0;
}
// way-4
int main(){
    std::vector<int*> v(10);
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    std::iota(v.begin(), v.end(), arr);
    display(v);
    return 0;
}
// u cannot (dec, or inc by an offset value, reverse etc. ) only increment is possible.