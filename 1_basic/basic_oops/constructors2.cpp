#include <iostream>

class MyClass {
public:
    // Default constructor declaration
    MyClass();

    // Parameterized constructor declaration
    MyClass(int x, double y);

private:
    int num;
    double value;
};

// Default constructor definition
MyClass::MyClass() {
    num = 0;
    value = 0.0;
}

// Parameterized constructor definition
MyClass::MyClass(int x, double y) {
    num = x;
    value = y;
}

int main() {
    // Creating objects using constructors
    MyClass obj1;             // Calls the default constructor
    MyClass obj2(10, 3.14);   // Calls the parameterized constructor

    return 0;
}
