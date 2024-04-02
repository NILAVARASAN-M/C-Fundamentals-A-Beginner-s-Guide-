//1) To access a global variable when there is a local variable with same name: 

#include<iostream>

using namespace std;
int num=10;

int main(){
    int  num=23;
    cout<<num<<endl;
    cout<<::num<<endl;
    return 0;
}