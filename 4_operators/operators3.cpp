// now next is the 7.) sizeof(), just returns size of that data-type.
// 8.) comma operator.

// there are many use cases of this the uses are listed below:

#include<iostream>

// here we are basically doing mutiple operation at same time.
/*
Sequence of Expressions:

The comma operator allows you to sequence multiple expressions within a single statement.
It evaluates each expression from left to right, discarding the result of all but the last expression.
This can be useful in cases where you want to perform multiple operations in a single statement.
*/
void fun1(){
    int a = 5, b = 10, c = 15;
    int result = (a += 2, b -= 3, c *= 2); // result = 30, a = 7, b = 7, c = 30
    std::cout<<a<<b<<c<<result<<std::endl;
}

// this another way of using comma seperated statements.
void fun2(){
    // Update with comma operator
for (int i = 0; i < 10; ++i, std::cout << i << " ") {
    // Loop body
}
}

int main(){
    fun1();
    fun2();
    return 0;
}