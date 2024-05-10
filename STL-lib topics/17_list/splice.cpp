// list in c++, is an double-linked list. All the functions of vectors, umap also available in this list also.

// splice : which helps in inserting nodes from one list to another.
// 1.) transefer all nodes from list2 to list1
// 2.) transfer only an specific from list2 to list1.
// 3.) transfer an specfic nodes in an range [begin, end), from node2 to node1.

// SYNTAX:
/*
list1_name.splice (iterator position, list2)
                or 
list1_name.splice (iterator position, list2, iterator i)
                or 
list1_name.splice (iterator position, list2, iterator first, iterator last
*/

// parameters:
/*
position – Specifies the position where the elements are to be transferred.
list2 – It specifies a list object of the same type which is to be transferred.
i – It specifies an iterator to the position of an element in list2 which is to be transferred.
first, last – Iterators specifying a range of elements in list2 which is to be transferred in list1. The range includes all the elements between first and last, including the element pointed by first but not the one pointed by last.
*/

// way-1
// when we use splice function, all the nodes will be removed from the list 2 and placed in list 1. which means list 2 and list 3
// in the below code will be empty.
#include<bits/stdc++.h>
using namespace std;

int num=0;
void display(list<int> l){
    for(auto itr=l.begin(); itr!=l.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<"-----"<<num<<endl;
    num++;
}

int main1(){
    // initializing lists
    list<int> l1 = { 1, 2, 3 };
    list<int> l2 = { 4, 5 };
    list<int> l3 = { 6, 7, 8 };
    display(l1);
    l1.splice(l1.begin(), l2);
    display(l1);
    l1.splice(l1.end(), l3);
    display(l1);
    // l1.splice(l1.begin(), l1);
    // display(l1);
    // this will be an infinite loop, so please dont try.
    display(l2);
    display(l3);
    return 0;
}

// WAY-2

// when inserting only-one node from another list to this list the nodes will be removed from this list.
// so basically there, that node will be removed from list 2 and place the node in list 1 in the specfied location.
int main2(){
    // initializing lists
    list<int> l1 = { 1, 2, 3 };
    list<int> l2 = { 4, 5 };
    list<int> l3 = { 6, 7, 8 };
    display(l1);
    l1.splice(l1.begin(),l1, l2.begin());
    display(l1);
    display(l2);
    // taking a node from same list and placing in a location.
    // l1.splice(l1.begin(), l1, l1.end()-1);  --> we can't use arithmetic operation on a list.
    // since here the memory is not contogious like vector, so here the nodes are in random-location and are connected.
    // so for we have to use advance-function, for going from ane node to, the other node(with the given step-size).
    // l1.splice(l1.begin(), l1, advance(l1.end(), -1)); // will not work since advance will not return anything.
    auto itr=l1.end();
    advance(itr, -1);
    l1.splice(l1.begin(), l1, itr);
    // here we rmove and add from an the same list, this is also possible.
    display(l1);
    return 0;
}

// way-3
int main(){
    // initializing lists
    list<int> l1 = { 1, 2, 3 };
    list<int> l2 = { 4, 5 };
    list<int> l3 = { 6, 7, 8 };

    auto itr1=l1.begin();
    advance(itr1, 2);
    auto itr2=l3.begin();
    advance(itr2, 2);
    display(l2);
    l2.splice(l2.begin(), l1, l1.begin(), itr1);
    display(l2);
    l2.splice(l2.end(), l3, l3.begin(), itr2);
    display(l2);
}