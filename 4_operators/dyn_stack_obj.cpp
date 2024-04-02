#include <iostream>

// Define a simple class
class MyClass {
public:
    MyClass() {
        std::cout << "MyClass constructor called" << std::endl;
    }
    ~MyClass() {
        std::cout << "MyClass destructor called" << std::endl;
    }
    void foo() {
        std::cout << "foo() called" << std::endl;
    }
};

int main() {
    // Creating an object using dynamic memory allocation (pointer)
    MyClass* ptr = new MyClass();
    // Accessing member function using arrow operator
    ptr->foo();
    // Deleting the dynamically allocated object
    delete ptr;

    std::cout << std::endl;

    // Creating an object on the stack
    MyClass obj;
    // Accessing member function directly
    obj.foo();

    return 0;
}
// suppose if we dont delete the heap, then the data will remain there, so try deleting using heap.