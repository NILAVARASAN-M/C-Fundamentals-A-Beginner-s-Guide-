// lets see about the functions defined in a class.
// actually all the functions defined in a class are in-line exceept some expections, some type of functions.

/*
It is also possible to define the inline function inside the class. In fact, all the functions defined
 inside the class are implicitly inline. Thus, all the restrictions of inline functions are also applied here.
  If you need to explicitly declare an inline function in the class then just declare the function inside the class 
  and define it outside the class using the inline keyword. 
*/

/*
However, it's important to note that the compiler ultimately decides whether to inline 
a function based on various factors like function size, complexity, optimization settings, and the 
surrounding code context. While member functions are treated as inline by default, the compiler may 
choose not to inline them in certain situations, such as when the function is large or recursive, or
 when inlining would not yield performance benefits.
*/

/*
While functions inside a class are implicitly inline, it's up to the compiler to decide whether to 
actually inline them. The inline keyword is a hint to the compiler, not a strict command. The compiler 
may choose not to inline functions if it determines that inlining would not result in performance improvements 
or if the function is too larg
*/

// Ah, I see. No, not all functions in a class are implicitly considered as inline functions. 
// In C++, member functions defined inside the class declaration are implicitly considered as inline functions. 
// However, this doesn't apply to functions that are defined outside the class declaration.

//Here's a breakdown:

// 1. **Member Functions Inside Class Declaration**: When you define member functions inside the class 
// declaration itself, they are implicitly considered as inline functions. This means that the compiler may choose to 
// inline them at its discretion.

    class MyClass {
    public:
        void foo() {
            // Function definition inside the class declaration
        }
    };

// 2. **Member Functions Defined Outside Class Declaration**: If you define member functions outside the class
//  declaration, they are not implicitly inline. You can still declare them as inline explicitly if you want them to be treated as such.
    class MyClass {
    public:
        void bar();
    };

    inline void MyClass::bar() {
        // Function definition outside the class declaration with inline keyword
    }


// So, in summary, only member functions defined inside the class declaration are implicitly 
// considered as inline functions. Member functions defined outside the class declaration, even if they are 
// defined inline, are not implicitly treated as inline functions by the compiler.