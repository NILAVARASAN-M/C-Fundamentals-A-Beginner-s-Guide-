/*
Friend Function


A friend function is a special function in C++ which in spite of not being a member function of a class has the privilege to 
access private and protected data of a class.
A friend function is a non-member function or an ordinary function of a class, which is declared by using the keyword “friend”
inside the class. By declaring a function as a friend, all the access permissions are given to the function.
The keyword “friend” is placed only in the function declaration but not in the function definition.
When the friend function is called neither the name of the object nor the dot operator is used. However, it may accept the 
object as an argument whose value it wants to access.
A friend function can be declared in any section of the class i.e. public, private, or protected.
*/

// Friend Function:

#include <iostream>

class MyClass {
private:
    int privateMember, number1, number2;

public:
    MyClass(int value1, int value2, int value3) : privateMember(value1), number1(value2), number2(value3) {}
    MyClass(int val) : privateMember(val) {}
    MyClass() : privateMember(0), number1(0), number2(0) {}

    // the above is a way for declaring the defined variables in the class, the same can be done inside the class also but this gives more 
    // cleanes to the code, and is way better then initialzing inside, eventhough the task can  be accompolished even inside.
    // Overall, initializing member variables in the constructor initializer list promotes efficiency, clarity, and correctness in C++ code.

    // Declare the friend function
    friend void friendFunction(const MyClass& obj);

    
};

// Definition of the friend function
void friendFunction(const MyClass& obj) {
    // Access private member using public member function
    std::cout << "Accessing private member from friend function: " << obj.privateMember << std::endl;
}

int main() {
    MyClass obj(42);
    // Call the friend function
    friendFunction(obj);

    return 0;
}

// so now many question will arise, see part-2 for the questions to be understand