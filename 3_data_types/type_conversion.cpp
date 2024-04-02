// we can convert from one data-type to another eithier expcitly or impliciltly.

// 1.) using implicitly, converting from one type to another, in this the compiler itself will convert the user doesnot need to convert.
// but this conversion is  possible from small data-type to large type and opposite is also possible.
// order in size below:
/*
bool -> char -> short int -> int -> 

unsigned int -> long -> unsigned -> 

long long -> float -> double -> long double
*/
// this is the order in which procceds, so bool to char possible and vice versa also possible.

#include<iostream>

void fn1(){
    bool a=10;
    char c='a';
    int i=c, j=a;
    float f=i, f2=c;
    std::cout<<a<<std::endl;
    std::cout<<c<<std::endl;
    std::cout<<i<<std::endl;
    std::cout<<j<<std::endl;
    std::cout<<f<<std::endl;
    std::cout<<f2<<std::endl;
}
void fn2(){
    int x = 10; // integer x 
    char y = 'a'; // character c 
  
    // y implicitly converted to int. ASCII 
    // value of 'a' is 97 
    x = x + y; 
  
    // x is implicitly converted to float 
    float z = x + 1.0; 
  
    std::cout << "x = " << x << std::endl 
         << "y = " << y << std::endl 
         << "z = " << z << std::endl; 
}
void fn3(){
    int num=97;
    char y = num;
    std::cout<<y;
}
int main(){
    fn1();
    fn2();
    fn3();
    return 0;
}