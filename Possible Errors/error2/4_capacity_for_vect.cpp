#include<iostream>
#include<vector>
using namespace std;

int main() {
    // Define the maximum capacity of the vector
    int maximumCapacity = 10;

    // Allocate memory for the vector
    std::vector<int> vect;
    vect.reserve(maximumCapacity);
    cout<<*vect.begin()<<endl;
}