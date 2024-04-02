// static variables in a function. 
// but this feautre is not allowed in java, in there it is only allowed to be declared in class.
// defining static variable inside the function:

#include<iostream>

void chumma(){
    static int number=0;
    std::cout<<number<<std::endl;
    number++;
}
int main(){
    for(int i=0;i<5;i++){
        chumma();
    }
    return 0;
}
// here in c++ possibel to declare in a scope, then as same as normal static variable.

