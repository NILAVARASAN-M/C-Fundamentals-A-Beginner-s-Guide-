// defining the functions and special function outside the scope.
#include <iostream>

// Class declaration
class MyClass {
public:
    // Constructor declaration inside the class
    MyClass();                        // Default constructor
    MyClass(int parameter1);          // Parameterized constructor

    // Member function to display data
    void display();
    
private:
    int num;
};

// Default constructor definition outside the class
MyClass::MyClass() {
    num = 0; // Initialize num to 0
}

// Parameterized constructor definition outside the class
MyClass::MyClass(int parameter1) {
    num = parameter1; // Initialize num to the value of parameter1
}

// Member function definition outside the class
void MyClass::display() {
    std::cout << "Number: " << num << std::endl;
}

int main() {
    // Creating objects using constructors
    MyClass obj1;           // Calls the default constructor
    MyClass obj2(10);       // Calls the parameterized constructor

    // Calling member function to display data
    obj1.display();         // Output: Number: 0
    obj2.display();         // Output: Number: 10

    return 0;
}
