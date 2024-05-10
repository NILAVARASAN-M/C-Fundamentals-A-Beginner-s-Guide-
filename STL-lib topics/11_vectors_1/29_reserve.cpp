// initially the capacity will the of the no-of element, example std::vector<int> v{1,2,2,3,4,5,6}; --> capacity of v is now 7, but now
// when u add element the capacity will become 14, next 28 ans so it gets doubled. so each time when the capacity increase we are allocating
// new meomoey and copying the elemnts from the old-address, this is o(n). to avoid this if we before-hand only know the minimum-elements we use.
// then we use reserve function, this and pass the value int n, this tell suppose if n=1024, then the capacity will be 1024.

#include <vector>
#include <iostream>

int main1() {
    std::vector<int> vec;

    std::cout << "Initial capacity: " << vec.capacity() << std::endl;

    // Reserve space for 10 elements
    vec.reserve(10);
    std::cout << "Capacity after reserve(10): " << vec.capacity() << std::endl;

    // Add elements to the vector
    for (int i = 0; i < 10; ++i) {
        vec.push_back(i);
    }
    
    // Capacity remains unchanged after adding elements
    std::cout << "Capacity after adding elements: " << vec.capacity() << std::endl;

    // Size of the vector changes as elements are added
    std::cout << "Size after adding elements: " << vec.size() << std::endl;

    return 0;
}

// Its primary purpose is to request that the container allocate enough memory to hold a specified number of 
// elements without requiring further allocations.

// 2-conditions:
// 1st: if the reserve for 'n' is greater then current capacity, then the capacity will increase. but the size will not inc.
// 2nd: if the reserve for 'n' is lesser then current capacity, then the capacity will be as such, will NOT dec.

int main(){
    std::vector<int> v{1,2,3,4,5};
    std::cout<<"Capacity: "<<v.capacity()<<", Size: "<<v.size()<<std::endl;
    // initiall capacity will be 5
    v.reserve(120);
    //  capacity will be 120, n>initial_capcity, so capacity increase but size remains same.
    std::cout<<"Capacity: "<<v.capacity()<<", Size: "<<v.size()<<std::endl;
    //  capacity will be 2, n<initial_capcity, so capacity remains same as goes for the size also.
    v.reserve(2);
    std::cout<<"Capacity: "<<v.capacity()<<", Size: "<<v.size()<<std::endl;
    for(int i=0; i<=120;i++){
        v.push_back(i);
    }
    // now the capacity is 120, but the elements has exceeded, 120. so reallocated, now the new capacity will be 240.
    std::cout<<"Capacity: "<<v.capacity()<<", Size: "<<v.size()<<std::endl;
}