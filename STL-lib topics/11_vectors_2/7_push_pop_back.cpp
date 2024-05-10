// let see push_back() and pop_back() fn.

// push_back() function is used to push elements into a vector from the back. The new value is inserted into the vector 
// at the end, after the current last element and the container size is increased.

#include<iostream>
#include<vector>

void display(std::vector<int> v){
    for(int items: v){
        std::cout<<items<<" ";
    }
    std::cout<<std::endl;
    return;
}

// push_back()
int main1(){
    std::vector<int> vect{1,2,2,3,4,5};
    display(vect);
    std::cout<<vect.capacity()<<std::endl;
    (vect.push_back(23),vect.push_back(31), vect.push_back(345));
    display(vect);
    std::cout<<vect.capacity()<<std::endl;
    return 0;
}

// pop_back()
int main(){
    std::vector<int> vect{1,2,2,3,4,5,6,7,8,9,10,12};
    display(vect);
    std::cout<<vect.capacity()<<std::endl;
    (vect.pop_back(), vect.pop_back(), vect.pop_back());
    display(vect);
    std::cout<<vect.capacity()<<std::endl;
    std::cout<<vect[10];
}
// when the pop_back() function is called, the element and the value both are demolishied, by calling the destructor. but if the container size
// is not reduced, then the value may not be part of the vect, but the value can be still accessed. since the container is not demoloished.