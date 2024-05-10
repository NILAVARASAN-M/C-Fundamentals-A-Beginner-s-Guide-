#include <iostream>
#include <vector>

int main() {
    // Define the maximum capacity of the vector
    int maximumCapacity = 10;

    // Allocate memory for the vector
    std::vector<int> myVector;
    myVector.reserve(maximumCapacity);

    // Now myVector has memory reserved for the maximum capacity, but its size is still zero
    std::cout << "Vector size: " << myVector.size() << std::endl;

    // Add elements to the vector
    for (int i = 1; i <= maximumCapacity; ++i) {
        myVector.push_back(i);
    }

    // Now the vector is filled with elements
    std::cout << "Vector size after adding elements: " << myVector.size() << std::endl;

    return 0;
}
