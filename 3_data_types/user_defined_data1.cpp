// these are the user defined types.
/*
1.) class
2.) structure
3.) enumeration
4.) typedef
5.) union
*/

//2.) structure 
// this one is very similar to the struct in c language.
// this struct helps in creating a user-defined datatype, can contain many different types.
/*
A Structure is a user-defined data type in C/C++.
 A structure creates a data type that can be used to group items of possibly different types into a single type
struct structName{     
char  varName[size];        
int varName; 
};
*/

#include<iostream>

struct D3_point{
    int x, y, z;
};

int main(){
    struct D3_point obj;
    obj.x=obj.y=obj.z=3;
    std::cout<<obj.x<<" "<<obj.y<<" "<<obj.z<<std::endl;
    return 0;
}