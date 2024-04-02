#include<iostream>

class Temp{
    public:
    int num1=10;
    int num2=20;
    float num3=45.3;
    char name='a';

    void addition(){
        std::cout<<"the addition of the number is :"<<num1+num2<<num2<<name<<std::endl;
    }
    private:
    // we can include here the private members here
    protected:
    // we can include here the members of the protected here
};

int main(){
   Temp obj;
   obj.addition();
   return 0;
}

// unlike java we cannot tell about the acces specifier of the class, like in java we say public class name{}.
// we have to explicitily tell in the header file of the c++, but if create a header file it is actually nothing but that the source code is public
// we are saying this indirectly.

//in java we can declare like public class etc, we are saying the class is public and we  can say tell about the access specifier in the class of any kind, but in c++ how will tell that

/*
In C++, the concept of access specifiers for classes is a bit different from Java. In Java, you can declare a class as `public`,
 `protected`, or `private` directly in the class declaration itself. However, in C++, the access specifiers for classes are typically 
 handled through the visibility of the class declaration itself in the scope where it's declared.

Here's how it works in C++:

1. **Header Files and Source Files**:
   - Typically, class declarations are placed in header files (`.h` or `.hpp` files), while the implementations are defined in source files (`.cpp` files).
   - When you declare a class in a header file, its visibility is determined by where the header file is included.

2. **Public Interface**:
   - If you want the class to be accessible from other translation units (source files), you include the header file containing the class declaration wherever you need to use it.
   - By including the header file, you make the class declaration visible in that translation unit, effectively making the class accessible.

3. **Private Implementation Details**:
   - If you want to hide the implementation details of a class, you can keep the class declaration in a header file and the implementation in a separate source file.
   - You only provide the necessary public interface in the header file, while the private implementation details remain hidden.

4. **Access Specifiers for Members**:
   - Within the class definition, you use access specifiers (`public`, `protected`, `private`) to control the visibility of member variables and member functions.
   - These access specifiers determine who can access the members of the class from outside the class itself.

In summary, in C++, the visibility of a class is determined by where its declaration is included and how its members are declared with 
access specifiers. You typically use header files to declare the public interface of a class, while the access specifiers within the
 class definition control the visibility of its members.
*/