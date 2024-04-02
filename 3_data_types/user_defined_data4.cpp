// last one typedef, same as the one we studied in th c++. will give easy name of any data-type, even orimitive, user-defined etc.

#include<iostream>

typedef long long  num;
typedef struct Random_Data{
    int x, y;
    float sum;
}Random_Data;

int main(){
    Random_Data temp;
    temp.x=1;
    temp.y=3;
    temp.sum=temp.x+temp.y;
    std::cout<<temp.sum<<std::endl;
    temp.sum=static_cast<float>(temp.x)+temp.y;
    std::cout<<temp.sum<<std::endl;
    return 0;
}