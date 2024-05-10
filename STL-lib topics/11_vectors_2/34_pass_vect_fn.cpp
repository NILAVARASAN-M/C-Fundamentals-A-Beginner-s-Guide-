// there are three way of passing an function.

// 1.) pass by value
// 2.) pass by refrence
// 3.) pass by refrence with const

// 1.
// the first one is not a proper approach to follow because here we are passing by value, so here we basically 
// creating nother copy of the vector in the memory. so there is an heavy waste of memory while doing this.
// so dont use.
// changesin the function will not get reflected in the original vector.

// 2.
// better use this, this pass by refrence where we dont creta of the array. when u use pass by refrence,
// now this variable is the parameter of the function is in allies with the vector.
// so no wastage of memory, but the changes in the function will be reflected in the original vector also.

// 3.
// so in the above one, the changes will get reflected in the original-vector.
// to avoid from any changes occuring we use const keyword, so the vector will not change due-course of the function.
// we can print, copy etc. but no delete/ insertion/ erase/ remove etc.

#include<iostream>
#include<vector>

void funct_type_1(std::vector<int> vect){
    vect.insert(vect.begin(), 5, 123);
    return;
}

void funct_type_2(std::vector<int>& vect){
    vect.insert(vect.begin(), 5, 123);
    return;
}

void funct_type_3(const std::vector<int>& vect){
    // vect.insert(vect.begin(), 5, 123); --> will trow erroe b/c  are going to modify an constant vector.
    return;
}

void display(std::vector<int>& vect){
    for(int val: vect){
        std::cout<<val<<" ";
    }
    std::cout<<std::endl;
}

int main(){
    std::vector<int> vect{2,3,4};
    display(vect);
    funct_type_1(vect);
    display(vect);
    funct_type_2(vect);
    display(vect);
    funct_type_3(vect);
    display(vect);
    return 0;
}