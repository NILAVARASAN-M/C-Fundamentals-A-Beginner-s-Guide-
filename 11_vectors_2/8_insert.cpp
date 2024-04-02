// insert the value at the location u give, supppose if u give location 5, then the value will get inserted there, and the value 
// in that location will get shifted to the next position, u dont give integer value as the location but the iterator, that is what 
// u pass.

// std::vector::insert() is a built-in function in C++ STL that inserts new elements before the element at the specified position.

/*
The insert function is overloaded to work on multiple cases which are as follows:

1.) Insert an element at the given index.
2.) Insert an element multiple times.
3.) Insert a range of elements at the given index.
*/
#include<iostream>
#include<vector>

void display(std::vector<int> v){
    for(int items: v){
        std::cout<<items<<" ";
    }
    std::cout<<std::endl;
    return;
}
// 1.) Insert an element at the given index.

int main_1(){
    std::vector<int> vect{1,2,3,4,5,4,3,2,1};
    display(vect);
    vect.insert(vect.begin()+3, 444);
    display(vect);
    vect.insert(vect.begin(), 10101);
    display(vect);
    vect.insert(vect.end(), 99999);
    display(vect);
    return 0;
}

// 2.) Insert an element multiple times.
int main_2(){
    std::vector<int> vect{1,2,3,4,5,4,3,2,1};
    display(vect);
    vect.insert(vect.begin()+1, 5, 100000);
    display(vect);
    return 0;
}

// 3.) Insert a range of elements at the given index.
int main(){
    std::vector<int> vect{1,2,3,4,5,4,3,2,1};
    std::vector<int> dummy{10,100,1000,10000,100000,1000000};
    display(vect);
    vect.insert(vect.begin()+2, dummy.begin()+1, dummy.begin()+6);
    display(vect);
    int arr[]={10,100,1000,10000,100000,1000000};
    vect.insert(vect.end(), arr, arr+5);
    display(vect);
    return 0;
}
// taking the range of values from one vector and inserting at some location in the another vector.

// see in this case we pass three paramters,  vect.insert(vect.end(), arr, arr+5);
// 1st parameter tells at which place u want to insert that vector which ur going to insert.
// 2nd parameter is the first index of that resepect array/ vector. and 3rd paramter is the final index of the array/vector (excluded).
// so take the range of values from arr/vector[2nd_param:3rd_param], insert at the another vector at the index told in 1st_param.