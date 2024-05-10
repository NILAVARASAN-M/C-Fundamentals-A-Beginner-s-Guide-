// lets see push_back() and push_front() function, in c++.
// push_front is not available in vector

#include<iostream>
#include<deque>

using namespace std;

// push front(), function.
// parameters: takes the value that needs to be insereted at the front of the container.
// returns
int main1(){
    std::deque<int> d;
    d.push_front(1);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);
    d.push_front(5);
    d.push_front(6);
    d.push_front(7);
    d.push_front(8);
    for(int val: d){
        cout<<val<<" ";
    }
    return 0;
}

// push_back(), function.
// parameters: takes the value that needs to be insereted at the back of the container.
// returns
int main(){
    std::deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);
    d.push_back(7);
    d.push_back(8);
    for(int val: d){
        cout<<val<<" ";
    }
    return 0;
}

// similarly we have emplace_front() and emplace_back().
// just refer vector, what is the difference between emplace() and insert().

/*
Performance: emplace_back() and emplace_front() can offer better performance in some cases because
 they construct elements directly in place, avoiding the need for temporary objects and potentially 
 saving on copy or move operations.
Usage: Use push_back() and push_front() when you already have an object created and you want to add
 it to the deque. Use emplace_back() and emplace_front() when you want to construct the object in place, 
 which can be more efficient if you're passing arguments for the constructor of the object to be stored.
*/