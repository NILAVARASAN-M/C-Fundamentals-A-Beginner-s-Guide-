#include <iostream>
#include <vector>
using namespace std;

// let see at() and swap() functions.

// at() function:

// If the position is not present in the vector, it throws out_of_range error..
// u pass, the index n as parameter. it will return the valuea at that index, but if u pass a value 'n'. and this n happens to be greater, 
// then size. this will throw error unlike the '[]' operator.(which will not thorw error.)
int main_1()
{
	vector<int> myvector{1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (int i = 0; i < myvector.size(); i += 2) {

		cout << myvector.at(i);
		cout << " ";
	}
	return 0;
}

// swap() function:

// suppose if there are two vectors, and if the vectors of same type. then u can perform this swap operation, where the cotents between the vectors.
// will get swapped, inly constraint is the vector should be same type, the size can differ.

// This function is used to swap the contents of one vector with another vector of same type and sizes of vectors may differ.

void display(std::vector<int> v){
    for(int items: v){
        std::cout<<items<<" ";
    }
    std::cout<<std::endl;
    return;
}

int main(){
	vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> v2{10,100,1000};
    display(v1);
    display(v2);
    // now swap.
    v1.swap(v2);
    display(v1);
    display(v2);
}
// for same type of vector only this is valid, but if different throws an error.
// valid for different size.