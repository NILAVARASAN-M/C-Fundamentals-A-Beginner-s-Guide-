// this rbegin function returns an iterator to the last element in the vector, and now when u increment the interator it will 
// move in reverse direction, basically it helps in traversing the vector in the back-ward direction.

// so it is basically opposite of the begin function, which returns the first iterator. but here the last element in the vectors
// iterator.


#include<iostream>
#include<vector>

int main1(){
    std::vector<int> vect{1,2,3,4,5,6,321,23,1000};
    auto it=vect.rbegin();
    std::cout<<*it<<"---> this is the last element in the vector."<<std::endl;
    it++;
    std::cout<<*it<<std::endl;
    it+=3;
    std::cout<<*it<<std::endl;  
    it--;
    std::cout<<*it<<std::endl;
    it-=3;
    std::cout<<*it<<std::endl;
    // just view in reverse order.

    // iterating over the loop using rbegin()
    for(auto i=vect.rbegin();i!=vect.rend();i++){
        std::cout<<*i<<" ";
    }
}
// rend() is just the same as end(), here it will the left iterator that is the empty iterator which resides to the left
// of the first element in the vect vector.

int main(){
    std::vector<int> vect{1,2,3,4,5,6,321,23,1000};
    for(auto i=vect.rend();i!=vect.rbegin();i--){
        std::cout<<*i<<" ";
    }
}
// this is not the correct way to use, just to show how it can be used.
// this rend(), is the theortical iterator which is to the left of the first element in the vector.

/*
In C++, rbegin() is a member function of the std::vector container, which is part of the Standard Template Library (STL).
 It returns a reverse iterator pointing to the last element of the vector (which is the element preceding the first element 
in reverse order). This function enables you to iterate through the vector in reverse order.
*/
// In this example, rbegin() is used to create a reverse iterator pointing to the last element of the vector numbers, 
// and then the loop iterates over the vector in reverse order. 
// The loop prints the elements in reverse order: 5, 4, 3, 2, 1.

// In this example, rbegin() is used to create a reverse iterator pointing to the last element of the vector numbers, 
// and then the loop iterates over the vector in reverse order. 
// The loop prints the elements in reverse order: 5, 4, 3, 2, 1.

// see the rbegin returns it type will be of the form std::vector::reverse_iterator