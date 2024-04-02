// there are two ways of incrementing ++a and a++.
// 1.) a++ --> post increment.
// 2.) ++a --> pre increment.

//1.) a++
/*
here after using the value in the expression, then only incrementaion occurs in a.
a++ (post-increment):
With a++, the current value of a is used in the expression where a occurs, and then a is incremented by 1.
This means that the original value of a is used in the expression, and the incrementation happens afterward.
After the operation, a holds the incremented value.
*/

//2.) ++a
/*
here after incrementing the value then only the value will be passed to the equation. just opposite of the above case.
++a (pre-increment):

With ++a, a is first incremented by 1, and then the incremented value of a is used in the expression where a occurs.
This means that the incrementation happens before the value of a is used in the expression.
After the operation, a holds the incremented value.
*/

#include<iostream>

int main(){
    int a = 5;
    int b = a++; // b is assigned the value of a (5), then a is incremented to 6
    std::cout<<a<<"  "<<b<<std::endl;

    a = 5;
    b = ++a; // b is assigned the value of a (5), then a is incremented to 6
    std::cout<<a<<"  "<<b<<std::endl;
    for(int i=0;i<5;i++){
        std::cout<<i<<std::endl;
    }
    for(int i=0;i<5;++i){
        std::cout<<i<<std::endl;
    }
    return 0;
}
// the same is for the decrement, just two types post and pre inc/dec that's all.