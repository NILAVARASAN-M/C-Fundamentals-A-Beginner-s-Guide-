// return is used when u want to exit the code
// but to be clear when we set a condition, we use this return. this return will exit from that function.
// whenever return statement is encountered, it will return only from that function.
// except void, for all the functions we will return that respective type.

#include<iostream>

using namespace std;
int fun1(){
    cout << "Begin ";
    for (int i = 0; i < 10; i++) {
 
        // Termination condition
        if (i == 5)
            return 0;
        cout << i << " ";
    }
    cout << "end";
 
    return 0;
}

void fun2(){
    int x=10, y=100;
    if (x > y) {
        cout << x << " "
             << "is greater"
             << "\n";
        return;
    }
    else {
        cout << y << " "
             << "is greater"
             << "\n";
        return;
    }
}