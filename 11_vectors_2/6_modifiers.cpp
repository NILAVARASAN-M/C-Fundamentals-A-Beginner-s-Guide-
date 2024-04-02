/*
Modifiers:

assign() – It assigns new value to the vector elements by replacing old ones
push_back() – It push the elements into a vector from the back
pop_back() – It is used to pop or remove elements from a vector from the back.
insert() – It inserts new elements before the element at the specified position
erase() – It is used to remove elements from a container from the specified position or range.
swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
clear() – It is used to remove all the elements of the vector container
emplace() – It extends the container by inserting new element at position
emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
*/

// lets see the assign() function first, assign()

// vector:: assign() is an STL in C++ which assigns new values to the vector elements by replacing old ones. 
// It can also modify the size of the vector if necessary.

#include<iostream>
#include<vector>

void display(std::vector<int> v){
    for(int items: v){
        std::cout<<items<<" ";
    }
    std::cout<<std::endl;
    return;
}

// ***************************** WAY-1 using assign ****************************************
int main1(){
    std::vector<int> vect{1,2,3,4,5,6,7,8,9,10};
    display(vect);
    vect.assign(5, 123);
    display(vect);
    return 0;
}
// now the vect is replaced with values->123 5->times. vect->{123, 123, 123, 123, 123};

// **************************** WAY-2 using assign ******************************************
int main2(){
    std::vector<int> vect{1,2,3,4,5,6,7,8,9,10};
    display(vect);
    int arr[]={100,10,1000,100000};
    vect.assign(arr, arr+(sizeof(arr)/ sizeof(arr[0])));
    display(vect);
    vect.assign(arr, arr+1);
    display(vect);
    vect.assign(arr, arr+4);
    display(vect);
    vect.assign(arr, arr+0);
    display(vect);
    vect.assign(arr+2, arr+4);
    display(vect);
    vect.assign(arr+1, arr+4);
    display(vect);
    return 0;
}
// the first argument is the starting address of the array(begin, the stating can be anything), and the
// second argument is the last address of the array, and the last will not be included, and it is excluded. 
// this a way for copying an array to an vector.
// so first argument: initial pointer(included), second argument: final pointer(excluded)

// ******************************** WAY-3 using assign *****************************
int main_3(){
    std::vector<int> vect;
    vect.assign(7, 10);
    display(vect);
    std::cout<<vect.capacity()<<std::endl;
    vect.assign(vect.begin(), vect.begin()+5);
    display(vect);
    std::cout<<vect.capacity()<<std::endl;
    return 0;
}
// the same as for array, but here we pass the iterator of the vector, since no pointers. vect.begin() --> will return the first iteraor.
// vect.begin()+5--> returns the iteartor at the six-location, and this excluded.
// this a way for assigning a vector, but it better to use resize here. more easy.
// the capacity will also not change remains same.

// using data(), which returns pointer of the underlying array.
int main_4(){
    std::vector<int> vect;
    vect.assign(7, 10);
    display(vect);
    std::cout<<vect.capacity()<<std::endl;
    vect.assign(vect.data(), vect.data()+5);
    display(vect);
    std::cout<<vect.capacity()<<std::endl;
    return 0;
}

// ******************************* WAY-4 using assign *******************************
// assign a vector with an initializer list.
int main(){
    std::vector<int> vect;
    display(vect);
    vect.assign({1,2,3,4,5,5,6});
    display(vect);
    return 0;
}