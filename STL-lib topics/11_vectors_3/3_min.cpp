// lets see min(), max(). but what is the difference between min and min_elemment, max and max_element first.

// min(), max() --> is for dealing only with two elements, or an list(list is different from vector. anything enclosed in brackets{} is an 
// std::initializer_list<int>)
// min, max work for two numbers, list. so no other go it will return an integer value.

//min_element(), max_element() here we will pass on the range of vectors/ arrays/ list/ sets etc.
// and will return an iterator, not that value. will return ITERATOR*.
// so this min_element() will not work for std::initializer_list<int>. that is anything {}.

#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::vector<int> vect={1,2,3,410,23,-10,234};
    //std::cout<<std::min(vect.begin(), vect.end()); --> wrong
    std::cout<<"MIN: "<<std::min({1,2,3,410,23,-10,234});
    // std::cout<<"MIN: "<<std::min_element({1,2,3,410,23,-10,234}); --> wrong
    std::cout<<"MIN: "<<*std::min_element(vect.begin(), vect.end());
    int arr[]={1,2,3,410,23,-10,234};
    std::cout<<"MIN: "<<*std::min_element(arr, arr+sizeof(arr)/sizeof(int));
}

// and all the functions can take an predicate, but be carefull while handing with predicates.