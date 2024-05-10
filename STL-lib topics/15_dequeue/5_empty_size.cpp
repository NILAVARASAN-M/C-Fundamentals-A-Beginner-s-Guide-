#include<iostream>
#include<deque>

using namespace std;


int main(){
    deque<int> d={1,2,3,4,5,6,7,8};
    deque<int> temp;
    cout<<d.size()<<" "<<d.empty()<<endl;
    cout<<temp.size()<<" "<<temp.empty();
    return 0;
}
