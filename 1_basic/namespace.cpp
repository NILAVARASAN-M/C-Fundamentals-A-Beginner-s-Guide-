#include <iostream>

// Define a custom namespace called myNamespace
namespace myNamespace {
    // Define a function called cout
    void cout() {
        std::cout << "This is my custom cout function" << std::endl;
    }
}

int main() {
    // Call the custom cout function from the myNamespace namespace
    myNamespace::cout();

    // Use the cout object from the std namespace to output data
    std::cout << "This is output using std::cout" << std::endl;

    return 0;
}