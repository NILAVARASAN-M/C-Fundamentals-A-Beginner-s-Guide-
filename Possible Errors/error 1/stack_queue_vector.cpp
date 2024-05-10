// we will see here one of the very common error we make in stack's, queue, vector. This error is very much prone
// in stack actually. Very much prone in stack's.

#include<bits/stdc++.h>
using namespace std;

int main1(){
    stack<int> sta;
    cout<<sta.top()<<endl;
    return 0;
}

// always hen ur using pop()/ top operation first of all always first check if the stack is not empty.
// if not-empty, then only do. This error may be hard-to find in an big-code.
// So always use top/pop when the stack is not empty, same applies for vector, queue etc.

int main2(){
    stack<string> sta;
    cout<<((sta.empty())?"Stack empty so top operation not possible" :sta.top())<<endl;
    //     cout<<((sta.empty())?"Stack empty so top operation not possible" :sta.top())<<endl;
    // you may think why stack is changed from int to string from main1 to main2 function b/c,
    // the in ternary operand both the thing will/should be of same type, since iam passing an message
    // so the other one should be also string.
    sta.push("NILA");
    cout<<((sta.empty())?"Stack empty so top operation not possible" :sta.top())<<endl;   
    return 0;
}

// same when using queue / vector/ string/ dequeue etc.