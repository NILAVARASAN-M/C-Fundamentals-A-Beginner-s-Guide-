// lets see this two function.
// begin() function is used to return an iterator pointing to the 
// first element of the vector container. begin() function returns a bidirectional iterator to the first element of the container.

// here the iterator is bi-directional, meaning that we can increment as well as decrement.
// but not only that but we can also increase by an offset value.

#include<iostream>
#include<vector>

int main(){
    std::vector<int> vect{1,2,3,4,5,6,7,5,4,3,2,1};
    auto obj=vect.begin();
    std::cout<<*obj;
    return 0;
}

// here the obj is of the type iterator, and not pointer. this concept of iterator and pointer is somewhat different. and learn 
// next coming files.

// so this obj is not an pointer but an iterator, but to understand the conecpt we treat obj as pointer, since it has all the 
// similar functions like * --> for derefrencing, [] --> for accessing an specfic element, +4, +3, ++, -- for accesing the next
// next element .etc