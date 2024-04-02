// enum is also a user-defined data type where we give meaning to the integer value, so instead of directly assigning
// integer value we give meaning to them, this is called enum.
/*
Enumeration (or enum) is a user-defined data type in C. It is mainly used to assign names to integral constants,
 the names make a program easy to read and maintain.
*/
#include<iostream>

//METHOD-1:
//enum Days1{Sun, Mon, Tue, Wed, Thu, Fri, Sat};
// METHOD-2:
enum Days2{Sun=10, Mon=11, Tue=12, Wed=13, Thu=14, Fri=15, Sa=16};
int main(){
    enum Days2 obj1;
    obj1=Wed;
    std::cout<<obj1<<std::endl;
    obj1=Tue;
    std::cout<<obj1<<std::endl;
}
// this will throw a error since enum is previsously declared so error is thrown.
// just comment any one enum.
// main idea of enum is that to give meaning to the integer values that is all