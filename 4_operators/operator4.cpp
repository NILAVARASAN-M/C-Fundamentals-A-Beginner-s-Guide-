// usage of -> operator in c++
// this is mainly used to access the class members using a pointer.
//In C++, the -> operator is primarily used for accessing members of a class or structure through a pointer. 
//Here are the main contexts where you use ->:

class MyClass{
    public:
    void memberFunction(){}
    int dataMember=0;
};

/*
1.) Accessing Members through Pointers:

When you have a pointer to an object of a class or structure, 
you use -> to access its members instead of the dot operator (.).
*/

void fun1(){
    MyClass *ptr = new MyClass();
    ptr->memberFunction(); // Accessing member function
    ptr->dataMember = 10;  // Accessing data member
}

/*
2.) Accessing Members of Pointer to Structure:

Similar to class objects, you use -> to access members of a 
structure through a pointer to that structure.
*/

void fun2(){
    struct Point {
    int x;
    int y;
};
Point *ptr = new Point();
ptr->x = 5;  // Accessing member x
ptr->y = 10; // Accessing member y
}

/*
3.)Accessing Members of Class Objects Returned by Pointers:

If a function returns a pointer to an object, you can directly use -> 
to access its members without storing the pointer in a separate variable.
*/
   MyClass* createObject() {
    return new MyClass();
}

void fun3(){
createObject()->memberFunction(); // Accessing member function
createObject()->dataMember = 10;  // Accessing data member
}

// so now what is the use of "new"--> keyword, and where will this new be generally used ???
/*
If the function is responsible for dynamically allocating memory for the object it returns, 
then it typically uses new to allocate memory. 
This is common when you want to create an object on the heap and return a pointer to it.
-------------------------------
In this example, createObject() dynamically allocates memory for a MyClass object using new,
and then returns a pointer to that object. The caller can then use the returned pointer to access
 members of the dynamically allocated object.
*/

// below is the next case where we dont use "new" keyword.

MyClass globalObject;

MyClass* funct() {
    return &globalObject; // Return a pointer to an existing object
}

funct()->memberFunction(); // Access member function of the object

/*
However, if the object being returned is not dynamically allocated or if the function 
simply returns a pointer to an existing object (perhaps a member of a class or a static object),
 then new would not be necessary.
 -----------------
In this case, getObjectPointer() simply returns the address of the globalObject, which is not dynamically
allocated using new. The caller can still use the returned pointer to access members of globalObject.
*/
