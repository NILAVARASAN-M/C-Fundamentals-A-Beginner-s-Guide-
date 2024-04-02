// defining the functions and special function inside the scope.
#include <iostream>

class MyClass {
public:
    int num;

    // Constructor defined inside the class
    MyClass() {
        num = 0; // Initialize num to 0
    }

    // Member function defined inside the class
    void display() {
        std::cout << "Number: " << num << std::endl;
    }
};

int main() {
    // Creating an object using the constructor defined inside the class
    MyClass obj;

    // Calling the member function defined inside the class
    obj.display(); // Output: Number: 0

    return 0;
}