// there re two scopes local and global.
/*
local scoop:
anything declared between the {} is considered as an scope, and the variable declared will be available only in that scope, 
and is not visible outside thta.

global scope:
this is declared at the top most and this variable can be seen by all the functions, scopes, main function etc.
any change on the variable will be reflected.
*/

#include<iostream>

int num=10; // this is global variable

int main(){
    int local=100; // this is local variable
    std::cout<<num<<std::endl;
    std::cout<<local<<std::endl;
}