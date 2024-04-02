// we will see the varoius ways we can declare the vectors in c++

#include<iostream>
#include<vector>

int main(){
    // way-1  ------>  std::vector<dataType> vectorName;
    std::vector<int> vect1;
    // this creates an vector, vect1 which is of the type integer.

    // way-2 -------> vector<dataType> size, value); 
    std::vector<int> vect2(5, 10);
    // this creates an vector of size 5, with the integers being assigned as 10.

    // way-3 ------> vector<dataType> { value1, value2, value3 ....}; 
    std::vector<int> vect3{1,2,3,3,2,1};
    // this creates a vect3 vector with the predefined values being 1,2,3,3,2,1 etc.

    // way-4 ------> vector<dataType> (other_vec);
    std::vector<int> vect4(vect3);
    // this creates an copy of an vect3 in vect4.

    // way-5 ------> 
    std::vector<int> vect5;
    vect5=vect3;
    // this is another way of copying the contents to an vector.
}