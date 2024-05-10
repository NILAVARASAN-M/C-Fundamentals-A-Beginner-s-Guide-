// we use this function to remove all the target eleemnt in the vector.
// we cant specify any offset for this, like u say target_value=3, and give a offset 4.
// so the remove function will remove only the first offset values which are equal to target <---- this is not possible.
// for this to be achivied we use remove_if() function.

// Three parameters for remove() function,
// 1.), 2.) is the range for the vector/ arrays/ list using index/ iterators/ pointers.
// 3rd parameter, this is the target value.

// WORKING: so how the function works is, from the range of the vector, we remove all the values which matches the target value.
// return: this function basically returns an iterator, so basically this "itr"-->iteartor is the new end of the vector. the begining remains same.
// so vector.begin()...itr(returned by the remove function)--> this is the new vector with all the non-equal target values.
// exclude itr.
// An iterator to the element that follows the last element not removed.
// The range between first and this iterator includes all the elements
// in the sequence that do not compare equal to val.

#include<iostream>
#include<vector>
#include<algorithm>

int main_1(){
    std::vector<int> vec{ 10, 20, 30, 30, 20, 10, 10, 32333 };
    std::vector<int> ve{ 10, 20, 30, 30, 20, 10, 10, 20 };
    auto itr1=std::remove(vec.begin(), vec.end(), 10);
    auto temp=vec.begin();
    int count=0;
    while(temp!=itr1){
        std::cout<<*temp<<" ";
        temp++;
        count++;
    }
    std::cout<<std::endl;
    for(int num: vec){
        std::cout<<num<<" ";
    }
    // Once the iteration is complete, all elements that match value will be "removed" from the range, and 
    // std::remove returns an iterator pointing to the new logical end of the range, where the removed elements are now located. 
    // The elements beyond this iterator are considered removed from the range, 
    // although they still physically exist in memory.
    return 0;
}
// so we may notice that the elements still physically exist in the disk, but still if u want to explicittly remove (physically remove).
// then use assign for the range (vect.begin, itr).

// next we will 