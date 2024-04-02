//Note: Scope of the loop variables that are declared in the initialization section is limited to the for loop block.


#include<iostream>
using namespace std;

// initialiaing mutiple variable in a single for loop.
void fun1(){
    int m, n; 
    // loop having multiple variable and updations 
    for (m = 1, n = 1; m <= 5; m += 1, n += 2) { 
        cout << "iteration " << m << endl; 
        cout << "m is: " << m << endl; 
        cout << "j is: " << n << endl; 
    } 
}

// infiniet for loop.

void fun2(){
    int num;
    for(;;){
        cin>>num;
        if(num==5){
            return;
        }
    }
}
