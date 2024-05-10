#include<iostream>
#include<deque>

using namespace std;
// front(), back(), empty() functions also.
// pop back(), pop_front(), function.
// parameters: no parameter's.
// returns: it retuns nothing, it is an void function.
int main(){
    std::deque<int> d;
    d.push_front(1);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);
    d.push_front(5);

    deque<int> temp(d.begin(), d.end());

    // using pop_front(), front(), empty().
    while(!d.empty()){
        cout<<d.front()<<" ";
        d.pop_front();
    }
    cout<<endl;
    // using pop_back(), back(), empty().
    while (!temp.empty())
    {
        cout<<temp.back()<<" ";
        temp.pop_back();
    }

    return 0;
}