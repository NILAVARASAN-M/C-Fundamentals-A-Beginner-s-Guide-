#include<iostream>
#include<vector>

// increment and decrement, and add an offset to the iterators.
int main1(){
    std::vector<int> vect{1, 10, 100, 1000, 1, 2, 3, 4};
    auto it=vect.begin();
    std::cout<<*it<<" ";
    it++;
    std::cout<<*it<<" ";
    it+=2;
    std::cout<<*it<<" ";
    it--;
    std::cout<<*it<<" ";
    it+=5;
    std::cout<<*it<<" ";
    return 0;
}

// always an non-const iterator is returned, but if u want an const interator, u can use cbegin for this.

int main(){
    std::vector<int> vect{1, 10, 100, 1000, 1, 2, 3, 4};
    auto cit=vect.cbegin();
    std::cout<<*cit<<std::endl;
    cit++;
    *cit=999;
    // here cit++ is not a problem because we are changing the iterator to the next iterator, but
    // if u try to change the value defined in the iterator, then only throw an error.
    std::cout<<*cit<<std::endl;   
    
    std::vector<int> lst{1, 10, 100, 1000, 1, 2, 3, 4};
    const std::vector<int>::iterator cit_2=lst.begin();
    cit_2++; 
    *cit_2=100;
    // above error is because we are saying that the iterator cit_2 itself is an const type, so u cannot change the iteraor.
    // but u can change the value defined in the iterator.
}
// this is how we return an const iterator, u can change the iterator like cit++, cit+=5 etc.
// but u can't change the value of the iterator.