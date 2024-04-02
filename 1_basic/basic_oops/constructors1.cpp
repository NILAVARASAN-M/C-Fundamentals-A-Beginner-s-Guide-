class ClassName {
public:
    // Constructor declaration
    ClassName(); // Default constructor
    ClassName(int parameter1, double parameter2); // Parameterized constructor
};
ClassName::ClassName() {
    // Constructor body
}

ClassName::ClassName(int parameter1, double parameter2) {
    // Constructor body
}

// here the constructor can be defined outside the class, is declared using the namespace.
// unlike python, and similar to java, we can have multiple constructors, and this constructors parameters will only differ.