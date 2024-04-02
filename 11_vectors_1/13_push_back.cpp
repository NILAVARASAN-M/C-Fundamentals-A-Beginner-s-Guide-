// In C++, push_back() is a member function of the std::vector container from the Standard Template Library (STL).
// It's used to add elements to the end of the vector.

// Behavior: The push_back() function increases the size of the vector by one and adds the specified value
//  to the end of the vector.

// returns void type, so nothing is returned

#include<iostream>
#include<vector>

int main(){
    std::vector<int> vect;
    for(int i=0;i<10;i++){
        vect.push_back(i);
    }

    for(int i:vect){
        std::cout<<i<<" ";
    }
    return 0;
}

// push_back just add's the element to the end of the vector, just like the push statement in stack.