#include<iostream>
#include<vector>
#include<algorithm>


/*
C++ for_each loop accepts a function that executes over each of the container elements.

This loop is defined in the header file <algorithm> and hence has to be included for the successful operation of this loop.

SYNTAX: for_each ( InputIterator start_iter, InputIterator last_iter, Function fnc);

Parameters
start_iter: Iterator to the beginning position from where function operations have to be executed.
last_iter: Iterator to the ending position till where function has to be executed.
fnc: The 3rd argument is a function or a function object which would be executed for each element.
*/

void printSquare(int x) {
    std::cout << x * x << " ";
}
// using for_each function in vectors

void fun1(){
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    // Apply printSquare function to each element in numbers
    std::for_each(numbers.begin(), numbers.end(), printSquare);
    std::cout << std::endl;
}

// refer 3_pointers_backup.cpp for to understand the below.

void fun2(){
    int arr[] = {1, 2, 3, 4, 5};
    // Apply printSquare function to each element in the array
    std::for_each(arr, arr + 5, printSquare); 
    std::cout << std::endl;
}

int main(){
    fun1();
    fun2();
}