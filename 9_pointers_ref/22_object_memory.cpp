#include <iostream>

// in here we are creating a class called Temp_class.
// from main function we are passing the object of the class, to see how the object works.

// in here when we pass the object that is created in main function, to the function. now a new space will be created 
// in the memory for the passed object
// so all the contents of the object will be there, (1) we will see the output as 10, b/c whatever the object has all that are copied in
// new memory, since new memory the changes will not be reflected in the main function.



class Temp_class {
public:
    int value;
    
    // Constructor
    Temp_class(int val) : value(val) {}
};

// Function to modify the object passed by value
void funct(Temp_class obj) {
    // Modify the value of the object
    std::cout<<obj.value<<std::endl; // ---->(1) 
    obj.value = 100;
    std::cout<<obj.value<<std::endl;
}

int main() {
    // Create an object in the main function
    Temp_class obj(10);
    // Call the function and pass the object by value
    funct(obj);
    // Print the value of the object
    std::cout << "Value after modification: " << obj.value << std::endl;
    return 0;
}

// in short when we pass the object in a function, a new space in memory will be allocated for that object.
// to avoid that we use pass by refrences.