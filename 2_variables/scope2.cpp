// if there is a variable name temp declared and global, but again the same variable is defined in a local scope, then if print what is the value??
// so the compiler will take value defined in the local scope into account, and not the global variable.
// EXAMPLE:

#include<iostream>

int temp=10;
int main(){
    int temp=234;
    std::cout<<temp<<std::endl;
    std::cout<<::temp<<std::endl;
    return 0;
}
// this will not affect the global variable.