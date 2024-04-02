// 2.) scope for an function.

#include<iostream>

class Temp{
    public:
    void fun1();
};
void Temp::fun1(){
    std::cout<<"this is the fun1"<<std::endl;
}
int main(){
    // Temp obj=new Temp(); ---> error b/c the "new" will create space in heap, dynamically so after creating space in heap it will
    // return a piinter pointing to that space in memory so, pointer we use "new", else geneerally we deal with stck so we use normal way.
    Temp obj;
    obj.fun1();
    return 0;
}