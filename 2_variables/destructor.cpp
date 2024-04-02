// this destructor is similar to the constructor, expect that the constructor gets envoked at first,
// but now the destructor will get invoked only at the last, it is invoked when the block in where the object is created is
// is going to end and it is also non-static. then this destructor will get invoked.
// this destructor is used for clearing the resources or to say doing all the final ending rituals before the object is shutdown.
/*
In C++, a destructor is a special member function of a class that is automatically called when an object of that class goes out of scope or is 
explicitly deleted. Its primary purpose is to release resources that the object may have acquired during its lifetime.

Here are some key points about destructors:

1. **Name and Syntax**:
   - A destructor has the same name as the class preceded by a tilde (`~`). For example, the destructor for a class `MyClass`
    is written as `~MyClass()`.
   - It doesn't take any parameters, nor does it return any value, not even `void`.

2. **Usage**:
   - Destructors are primarily used to perform cleanup tasks such as releasing dynamically allocated memory, closing files, 
   releasing network connections, etc.
   - They are automatically invoked by the compiler when an object goes out of scope or is explicitly deleted using the `delete` operator.

3. **Implicit and Explicit Definition**:
   - If a class does not have an explicitly defined destructor, the compiler generates a default destructor for it. 
   This default destructor performs no action.
   - You can also define your own destructor explicitly to perform custom cleanup tasks.

4. **Order of Execution**:
   - Destructors are called in the reverse order of constructors. That is, the destructor of a base class is called before the 
   destructor of a derived class.
   - For objects created within a function or block, the destructor is called when the function or block exits.

Here's a simple example illustrating the concept of a destructor:

```cpp
#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    // Creating an object of MyClass
    MyClass obj;

    // Object goes out of scope at the end of the block,
    // Destructor is automatically called
    return 0;
}
```

In this example, the destructor `~MyClass()` is automatically called when the object `obj` goes out of scope at the end of the `main()` function.
*/