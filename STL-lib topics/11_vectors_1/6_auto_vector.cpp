#include<iostream>
#include<vector>

int main1(){
    std::vector<int> vect{1,2,3,4,5,6,10,100,1000};
    auto it=vect.begin();
    std::cout<<*it<<std::endl;
    return 0;
}
// here this auto keyword is used to deduce the type of the vector dynamically, since there are many type's in the vector.
// exact type of it is determined by the value returned by the vect.begin() .

// the vector type depends only on two factors that is data-type, and whether const or non-const (whether the vector is const-qualified.)

// FOR AN NON-CONST TYPE OF VECTORS.
int main2(){
    std::vector<int> vect{32,2,1,321,34};
    auto it=vect.begin();
    std::cout<<*it<<std::endl;
}
// The type of it will be std::vector<T>::iterator. This is a mutable iterator,
// meaning you can use it to modify the elements of the vector.
// T can be std::string, int, float etc.

// FOR AN CONST TYPE OF VECTORS.
int main3(){
    const std::vector<int> vect{3,2,1,1,2,3};
    auto it=vect.begin();
    std::cout<<*it<<std::endl;
}
// the type of it will be std::vector<T>::const_iterator. This is a constant iterator, which means you 
// cannot use it to modify the elements of the vector. You can only read them.

// begin():

// Returns an iterator that allows modification of the elements if the container itself is non-const.
// If you call begin() on a non-const container, it returns an iterator (iterator).
// If you call begin() on a const container, it returns a const iterator (const_iterator).
// cbegin():

// Always returns a const iterator, regardless of whether the container is const or non-const.
// Introduced in C++11 to provide a way to obtain a const iterator more explicitly.
// Useful when you want to ensure that the elements of the container cannot be modified through the obtained iterator.



//  ******************* FINALLY**********************
int main(){
    std::vector<int> vec = {1, 2, 3};
    auto it = vec.begin(); // Here, it is of type std::vector<int>::iterator
    const std::vector<int> cvec = {1, 2, 3};
    auto cit = cvec.begin(); // Here, cit is of type std::vector<int>::const_iterator
}
// auto is better, since writing the types will be compex, and is not advisable.

// The use of auto simplifies the syntax and makes the code more readable, especially with templates or types with complex names. 
// It's particularly useful in cases where the type is obvious from
// the context or overly verbose to write out.