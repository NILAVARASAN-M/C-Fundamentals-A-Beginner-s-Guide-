// we will see the final file for this begin and end function of the vetors in c++.

#include<iostream>
#include<vector>

int main(){
    std::vector<int> vect{1,2,3,4,5,6,7,8,9};
    auto it_1=vect.begin();
    auto it_2=vect.end();
    std::cout<<*it_1<<" "<<*it_2;
}
// begin(), will return the first iterator from the vectors.
// end(), will return the element after the last elmenet in the vector that iterator, so when u derefrence
// the iterator returned by the end() function, will show garbage value because it is the iterator of the elemenet after
// the last element.