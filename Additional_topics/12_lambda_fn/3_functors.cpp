// lets not dwelve deep into this functors, we just see some outline of this functors.

#include<iostream>
#include<vector>
#include<algorithm>


// lets understand this first, 
// this is the struct, which is similar to the class, with name simple_print. actually 
// we can say that whatever functionlalties the class like encapsulation, polymorphism, creating object/ instnces,
// constructors/ destructors, methods, access-modifiers, inheritances, abstraction etc. 
//  all these are the features avaibale for the class in c++ and many. but all this are there in struct also.
// only thing is that class will be easy readable, eaier to use. but for struct we have to explicitlty define each time.

//  so struct all the proeprties of the class's in c++, but class is readble and easy.
// so for small task we use struct, for bigger lines/ tsk we use class's.

/* In summary, while class provides default behavior that's aligned with object-oriented programming principles,
 struct gives you more explicit control over access levels and member visibility. So, while class might be more 
 suitable for complex object-oriented designs due to its default encapsulation features and conventions, you can
  technically achieve the same functionality with a struct, albeit with more explicit specification and 
  potentially reduced readability.
*/

struct simple_print{
        void operator()(int x) const{
            std::cout<<x<<"\n";
        }
        void temp(){
            return;
        }
};

// so lets understand the struct CODE:

// In C++, operator() is an overloaded operator function. It is a special member function that allows 
// objects of a class or struct to be called as if they were a function. When an object is called like a 
// function, the operator() function is invoked, performing whatever action is defined within it.
// Now the object whenever u pass will invokes the function also.
// operator() ---> is the name of the function. This function acts as the functional call operator for objects of the simple_print struct.
// const ---> at the end of the function declaration indicates that the function does not modify the state of the object it is called on. 
// It ensures that the function can be called on const objects of the simple_print struct.
// in the below code when u pass the object as integer argument, The purpose of this operator() function in the simple_print 
// struct is to define the behavior of the struct when it is used as a functor. Functors are objects that can be called as 
// if they were functions. In this case, when a simple_print object is called with an integer argument, it will print that 
// integer to the standard output followed by a newline.

// FUNCTORS:
// A functor in C++ is an object that can be called as if it were a function. It achieves this by overloading the function call 
// operator operator(). Functors provide a flexible way to encapsulate behavior and can be used in various contexts,
// such as algorithms that expect function-like objects as arguments.

// lets see some functors example:

// EXAMPLE-1
struct example1{
    int num;
    void operator()(int x){
        std::cout<<x<<"\n";
    }
    example1(int a, int b){
        num=a+b;
    }
    example1(){}
};

int main1(){
    // example1 obj1(); -->(line 1)
    example1 obj;  // -->(line 2)
    // the line 1 and line 2 are not same the, first one actually is a function declaration where the name of the function is obj1
    // which takes no arguments, and returns an object of the class example1.
    // line-1 --> function declartion
    // line-2 --> creating a object, if no constructor there.
    // if constructor with parameters present then see below use like that. 
    example1 obj1(10, 20);

    std::vector<int> vect={1,2,3,4,5,4,10,23,3,2,4,50};
    std::for_each(vect.begin(), vect.end(), obj); // passing an object
    std::for_each(vect.begin(), vect.end(), example1()); // creating an temporary object.
    return 0;
}

//EXAMPLE-2
struct add{
    int operator()(int a, int b) const{
        return a+b;
    }
};

int main(){
    // std::cout<<"SUM: "<<add(5,10);
    // this will produce the error, because we create an temporary object using like this class_name() --> if no paramters the constructor
    // or no constructor is present, then the system will use the default constructor. 
    // add(5,10) --> this basically here means is that u are creating an temporary object of the class add, with the constructor
    // which takes in two arguments, but there is no constructor defined like that. so only error.
    // if suuch constructor defined then no error.
    std::cout<<"SUM: "<<add()(5,10);
    // this code add() --> creates temporary object, so now we ca use this ibject as functor, aso passing the arguments that's all 
}