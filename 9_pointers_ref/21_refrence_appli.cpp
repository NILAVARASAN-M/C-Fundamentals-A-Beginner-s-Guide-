// there are many applications of the refrences in c++. some are listed below.
/*
1.)Modify the passed parameters in a function
2.)Avoiding a copy of large structures
3.)In For Each Loop to modify all objects
4.)For Each Loop to avoid the copy of objects
*/

// 1. Modify the passed parameters in a function: 
#include<iostream>
#include<string>
using namespace std;
 void swap(int& num1, int& num2){
    int temp=num1;
    num1=num2;
    num2=temp;
 }

int main1(){
    int num1=100, num2=123;
    std::cout<<num1<<" "<<num2;
    swap(num1, num2);
    std::cout<<num1<<" "<<num2;
}

//  2. Avoiding a copy of large structures: 

//Imagine a function that has to receive a large object. If we pass it without reference, a new copy 
// of it is created which causes a waste of CPU time and memory. We can use references to avoid this. 
struct Student {
    string name;
    string address;
    int rollNo;
};
// If we remove & in below function, a new
// copy of the student object is created. 
// We use const to avoid accidental updates
// in the function as the purpose of the function
// is to print s only.
void print(const Student &s)
{
    cout << s.name << "  " << s.address << "  " << s.rollNo
         << '\n';
}
// to better understand the above see the 22.cpp