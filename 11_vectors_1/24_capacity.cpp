// The vector::capacity() function is a built-in function which returns the size of the storage space currently
// allocated for the vector, expressed in terms of elements. This capacity is not necessarily equal to the vector 
// size. It can be equal to or greater, with the extra space allowing to accommodate for growth without the need
// to reallocate on each insertion. The capacity does not suppose a limit on the size of the vector. When this 
// capacity is exhausted and more is needed, it is automatically expanded by the container (reallocating it storage space). 
// The theoretical limit on the size of a vector is given by member max_size. 

// so capacity is the pratical memory space allocated for an vector, and if the size exceeds then it is copied to another space.
// suppose u create an vector and the capacity returns an integer number equal to or greater then that.
// so this is the size of the vector allocted space in memory, but it does not mean that it is the limit,
// if grows bigger rhen is reallocated.

// returned value is represented in terms of number of elements

// C++ program to illustrate the
// vector::capacity() function
#include <bits/stdc++.h>
using namespace std;

int main1()
{
	vector<int> v;

	// inserts elements
	for (int i = 0; i < 10; i++) {
		v.push_back(i * 10);
	}

	cout << "The size of vector is " << v.size();
	cout << "\nThe maximum capacity is " << v.capacity();
	return 0;
}


int main()
{
	vector<int> v;

	// inserts elements
	for (int i = 0; i < 100; i++) {
		v.push_back(i * 10);
	}

	cout << "The size of vector is " << v.size();
	cout << "\nThe maximum capacity is " << v.capacity();
	return 0;
}


int main_2(){
    std::vector<int> vect1{1,2,3,3,4,5,6,5,4,444,3};
    int i=20;
    while(i){
        std::cout<<"size:"<<vect1.size()<<",  "<<"capacity:"<<vect1.capacity()<<std::endl;
        vect1.push_back(i--);
    }
}

// in this code, vect1 size is "11" initially, so the capacity will be 11 initially, whenever it exceeds the limit it will get doubed eg:
// initaill 11, 22, 44, 88, 176........