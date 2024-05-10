// the problem arised when i solved, the question in this path
// PATH: A:\DSA\Leetcode Solutions Using C++\stack's\MEDIUM\146. LRU Cache\using-STL\using_vector_wrong.cpp

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vect;
    vect.insert(vect.begin(), 1);
    auto itr=vect.begin();
    // initially the capacity is 1
    vect.insert(vect.begin(), 2);
    // since now we increase the capacity, so it will get double the capacity.
    // and the previous itertaor, will be copied to some new location now.
    cout<<*itr<<endl;
    // since copied to some new location , so only some garbage value is thrown.
    itr=vect.begin(); // now itr will be pointing to an vector, of capaity only 2 and its values are 1, 2.
    cout<<*itr<<endl; // now the outptut will be correct.
    
    // ------------------
    vect.insert(vect.begin(), 3);
    // now since the capacity, is only 2 and you want insert another iterator. so now again the previous 1 and 2, and this 3 will be copied.
    cout<<*itr<<endl; // so when you print this will be garbage value again, since this now the itaerators are in new location.
    // since we inserted an value, when the capacity was 2. So now it will be doubled.
    itr=vect.begin();
    cout<<*itr<<endl; // since updates it will work. 
    vect.insert(vect.begin(), 4);
    // now here since the capacity of the vector is 4, but the size is 3 only . So there is a vacant place that can be inserted without reallocation
    // so now it will be not reallocated and now 4 will be inserted.
    cout<<*itr<<endl; // will print correctly
    //------------------ AGAIN THE CAPACITY OF THE VECTOR IS FULL, NOW WHEN YOU INSERT AN NEW ITERATOR THE CAPACITY WILL BE DOUBLED.

    // ---------------
    vect.insert(vect.begin(), 5);
    cout<<*itr<<endl; // garbage value again, since till-case above the capacity of the vector, was full now inserting an new-value so we are
    // re-allocating in the memory, so previously itr was poiting somewhere, so print that, so only garbage value.
    itr=vect.begin();
    cout<<*itr<<endl; 
    vect.insert(vect.begin(), 6);
    cout<<*itr<<endl;
    vect.insert(vect.begin(), 7);
    cout<<*itr<<endl;
    vect.insert(vect.begin(), 8);
    cout<<*itr<<endl;
    //till here it will print correctly, the capacity was increased from 4 to 8. so no need to re-allocate, so `itr=vect.begin();` will
    // be an valid loaction
    // AGAIN THE CAPACITY OF THE VECTOR IS FULL(8), NOW WHEN YOU INSERT AN NEW ITERATOR THE CAPACITY WILL BE DOUBLED(16).
    // -------------------------

    // so again here the garbage value printed, due to re-allocation. dut to the capacity was full.
    vect.insert(vect.begin(), 9);
    cout<<*itr<<endl;
    vect.insert(vect.begin(), 10);
    cout<<*itr<<endl;
    // why is the output different
}