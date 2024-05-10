/*
queue::empty()	O(1)
queue::size()	O(1)
queue::emplace()	O(1)
queue::front()	O(1)
queue::back()	O(1)
queue::push(g) 	O(1)
queue::pop() 	O(1
*/

// this are the only functions available for queue's in c++, unlike dequeue, queue has very limmited functions.

#include<iostream>
#include<queue>

// so we cant access the iterators, of the queue. Then how can we access or iterate in an dequeue???
// WAY-1: we have to copy the elemnts to another queue, and we can use front and pop, elemnts accordingly to do operation.
// WAY-2: We can use dequeue, to perfrom queue operation. since we can access elemnts directly using [], we have iterators using .begin() .. etc
// using dequeue in place of queue will be an better option.

using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    queue<int> temp(q);
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}