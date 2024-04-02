// what difference will friend make compare to the other functions??

/*
due to the encapsulations and other stuff we cant use a normal function to access the private and protected members of an class,
but we can access th public, this is nothing, but accessing the private and protected is not possible. 

but this can be achivied using the friend function, but the friend functil will not be a part of an member of the class.
*/

// is it compulsary to pass the object of the class??

/*
it is not, it depends on ur need, suppose if u want to access the members then we need the object to be passed, so as parameter 
else no need of parameter. --> but this question will question us  the  why we need of friend function??
*/

/*
In C++, a friend function is a function that is not a member of a class but has access to the private and protected
 members of the class. Here are some use cases for friend functions:

Accessing Private Members: Sometimes, it might be necessary for a function outside the class to access private member
 variables or functions of that class. In such cases, declaring the function as a friend of the class allows it to access these private members.

Operator Overloading: When overloading certain operators like << for stream insertion or >> for stream extraction, 
it is common to declare these functions as friend functions to access private members of the class.

Non-Member Utility Functions: Sometimes, there are utility functions that logically belong to a class but do not operate
 on any specific instance of the class. In such cases, these functions can be declared as friend functions to give them access 
 to the private members of the class.

Improved Encapsulation: While friend functions allow access to private members, they should be used judiciously. However, 
in some cases, they can be used to improve encapsulation by providing controlled access to certain private members without
 exposing them through public member functions.
*/


/*
Yes, that's correct. Even though friend functions have access to the private and protected members of the class 
in which they are declared as friends, they do not inherit access to those members. This means that if a class inherits 
from another class, the friend functions of the base class do not automatically have access to the private or protected members 
of the derived class.
*/

// example is below.

#include <iostream>

class Base {
private:
    int privateData;

public:
    Base(int data) : privateData(data) {}

    // Declaration of friend function
    friend void friendFunction(const Base& obj);
};

void friendFunction(const Base& obj) {
    // Accessing private member of Base class
    std::cout << "Value of privateData in Base class: " << obj.privateData << std::endl;
}

class Derived : public Base {
private:
    int derivedPrivateData;

public:
    Derived(int baseData, int derivedData) : Base(baseData), derivedPrivateData(derivedData) {}
};

int main() {
    Derived obj(42, 100);
    friendFunction(obj); // This will cause a compilation error
    return 0;
}
