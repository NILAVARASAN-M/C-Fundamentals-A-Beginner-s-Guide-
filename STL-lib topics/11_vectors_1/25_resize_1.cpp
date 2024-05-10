// vector::resize()
// The function alters the container’s content in actual by inserting or deleting the elements from it. It happens so,

// If the given value of n is less than the size at present then extra elements are demolished.
// If n is more than current size of container then upcoming elements are appended at the end of the vector.

// case-1 when Size of the vector container is lowered. 

#include<iostream>
#include<vector>

using namespace std;
int main111(){
    vector<int> vect{1,2,3,4,5,6,7,8,9};
    for(int vals: vect){
        cout<<vals<<" ";
    }
    cout<<endl;
    vect.resize(5);
    for(int vals: vect){
        cout<<vals<<" ";
    }
}
// in the above code we will see that, we resize to an size less than current size so the elements from start till that
// that is kept, and the rest is erased.

// case-2 when we resize to an greater number, greater then the cureent vector size. (2. Size of the vector container is increased.)

int main222(){
    vector<int> vect{1,2,3,4,5,6,7,8,9};
    for(int vals: vect){
        cout<<vals<<" ";
    }
    cout<<endl;
    vect.resize(14);
    for(int vals: vect){
        cout<<vals<<" ";
    }
}
// we will see that since we have resized to an size which, is greater is greater then the current size of the vector.
// the rest values are filled with zero, 


// case-3: 3.Size of the vector container is increased and new elements are initialized with specified value. 

int main(){
    vector<int> vect{1,2,3,4,5,6,7,8,9};
    for(int vals: vect){
        cout<<vals<<" ";
    }
    cout<<endl;
    vect.resize(14, 321);
    for(int vals: vect){
        cout<<vals<<" ";
    }
}