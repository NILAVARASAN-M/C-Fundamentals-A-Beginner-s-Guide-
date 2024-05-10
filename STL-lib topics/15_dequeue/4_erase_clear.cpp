#include<iostream>
#include<deque>

using namespace std;

template<typename T>

void display(deque<T> vect){
    for(T val: vect){
        cout<<val<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    deque<int> d={1,2,3,4,5,6,7,8};
    deque<int> temp=d;
    display(d);
    d.clear();
    display(d);

    display(temp);
    // deleting an specific iterator.
    temp.erase(temp.begin()+1);
    display(temp);

    // deleting an range of iterators.
    temp.erase(temp.begin()+1, temp.begin()+3);
    display(temp);
    return 0;
}