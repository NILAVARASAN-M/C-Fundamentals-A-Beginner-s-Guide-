#include<iostream>
#include<vector>
using namespace std;

int main() {
    // Define the maximum capacity of the vector
    int maximumCapacity = 10;

    // Allocate memory for the vector
    std::vector<int> vect;
    vect.reserve(maximumCapacity); // using this is different the using
    
    // -----------------
    vect.insert(vect.begin(), 1);
    auto itr=vect.begin();
    vect.insert(vect.begin(), 2);
    cout<<*itr<<endl;
    // itr=vect.begin();
    cout<<*itr<<endl;
    // ---------------------
    
    // ------------------
    vect.insert(vect.begin(), 3);
    
    cout<<*itr<<endl; 
   // itr=vect.begin();
    cout<<*itr<<endl;
    vect.insert(vect.begin(), 4);
    cout<<*itr<<endl; 
    //------------------

    // ---------------
    vect.insert(vect.begin(), 5);
    cout<<*itr<<endl;
 //  itr=vect.begin();
    cout<<*itr<<endl; 
    vect.insert(vect.begin(), 6);
    cout<<*itr<<endl;
    vect.insert(vect.begin(), 7);
    cout<<*itr<<endl;
    vect.insert(vect.begin(), 8);
    cout<<*itr<<endl;
    // --------------------

    // ---------------
    vect.insert(vect.begin(), 9);
    cout<<*itr<<endl;
    vect.insert(vect.begin(), 10);
    cout<<*itr<<endl;
    // ------------------------

    // this code wil work fine, because the vector has the capacity now. so since we will not realloacte. so which means vect.begin()=itr, will be vaild
    // for the initial, 10 iterators. so only here the value is printed corretly, unlike throwing garbage value's.
    // No Garbage-value due to no re-allocation, since we have reserved initially for the vector
    /*
     std::vector<int> vect;
    vect.reserve(maximumCapacity);
    */
    // now the vector is full in capacity, so when you insert an iterator, reallocation will happens
    // which make vect.begin(), again an inavlid-iterator will throw garbage value.
    vect.insert(vect.begin(), 11);
    cout<<*itr<<endl;
    return 0;
}