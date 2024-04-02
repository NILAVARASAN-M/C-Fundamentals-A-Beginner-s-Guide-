// inlineing function and macros.

// What is wrong with the macro? 

/*
Readers familiar with the C language know that the C language uses macro. The preprocessor replaces all macro calls 
directly within the macro code. It is recommended to always use the inline function instead of the macro. According to 
Dr. Bjarne Stroustrup, the creator of C++ macros are almost never necessary in C++ and they are error-prone. There are 
some problems with the use of macros in C++. Macro cannot access private members of the class. Macros look like function 
calls but they are actually not. 
*/

// first understand what is macros??

/*
In C++, a macro is a fragment of code that has been given a name. Whenever the name is used, it is replaced by the contents of the macro. 
Macros are defined using the `#define` directive, and they can be used to define constants, inline functions, or to perform text substitution.

Here's a simple example of a macro defining a constant:

```cpp
#define PI 3.14159
```

After defining this macro, every occurrence of `PI` in the code will be replaced by `3.14159`.

Macros can also take arguments and perform substitution based on those arguments. For example:

```cpp
#define SQUARE(x) ((x) * (x))
```

This macro defines a function-like macro `SQUARE` that takes one argument `x` and returns the square of `x`. So, wherever
 `SQUARE` is used, it will be replaced by the square of the argument.

However, macros have limitations compared to other constructs in C++, such as functions or constants defined using `const` or 
`constexpr`. Macros are purely textual replacements and don't have type checking, scoping, or namespace control, which can lead
 to unexpected behavior and errors if not used carefully. In modern C++, macros are often avoided in favor of safer and more powerful
  language features.
*/

// lets see above explanation more clearly now..

/*
Certainly! Let's break down each aspect:

1. **Usage of Macros in C**:
   In C programming, macros are used to define symbolic constants and to create short, reusable code snippets. They are defined
    using the `#define` directive and can be used to replace text throughout the code.

   ```c
   #include <stdio.h>

   #define PI 3.14159
   #define SQUARE(x) (x * x)

   int main() {
       double radius = 5.0;
       double area = PI * SQUARE(radius);
       printf("Area of the circle: %f\n", area);
       return 0;
   }
   ```

   In this example, `PI` and `SQUARE` are macros. When the code is compiled, the preprocessor replaces all occurrences of 
   `PI` with `3.14159` and `SQUARE(radius)` with `(radius * radius)`.

2. **Problems with Macros in C++**:
   While macros can be useful, they have several drawbacks in C++:
   - **Scope Issues**: Macros are not aware of the scope and can cause name collisions.
   - **Type Safety**: Macros do not perform type checking, leading to potential runtime errors.
   - **Readability and Debugging**: Macros can make code harder to read and debug because they are replaced before compilation.
   - **Function-like Behavior**: Macros can behave unexpectedly due to their text substitution nature, especially when used with complex expressions.

3. **Usage of Inline Functions in C++**:
   C++ offers inline functions as an alternative to macros. Inline functions provide the benefits 
   of macros without the associated drawbacks. They are declared with the `inline` keyword and behave like regular functions.

   ```cpp
   #include <iostream>

   // Inline function to calculate the square of a number
   inline int square(int x) {
       return x * x;
   }

   int main() {
       int num = 5;
       int result = square(num);
       std::cout << "Square of " << num << " is " << result << std::endl;
       return 0;
   }
   ```

   Inline functions offer better type safety, scoping, and maintainability compared to macros. They are also easier to debug and understand.

4. **Accessing Private Members**:
   Unlike functions, macros do not have access to the private members of a class. Inline functions, on the other hand, 
   can access private members if they are declared as part of the class.

In summary, while macros have their uses in C programming, they are generally discouraged in C++ in favor of inline 
functions due to the latter's better type safety, scoping, and maintainability. Macros are error-prone and can lead to 
unexpected behavior, especially in larger codebases.
*/

// what is the difference between pre-proccesor and c++ compiler??

/*
The C++ compiler and preprocessor are both integral parts of the compilation process, but they serve different purposes and 
operate at different stages. Here's a breakdown of their roles and differences:

1. **Preprocessor**:
   - **Purpose**: The preprocessor is responsible for handling preprocessing directives and manipulating the source code 
   before actual compilation.
   - **Tasks**: It performs tasks such as macro substitution, file inclusion, conditional compilation, and line control.
   - **Directives**: Preprocessor directives start with `#` and are processed before the code is compiled. Examples include 
   `#include`, `#define`, `#ifdef`, `#ifndef`, `#if`, `#endif`, etc.
   - **Output**: The preprocessor generates a modified version of the source code, known as the preprocessed code, which 
   is then passed to the compiler for compilation.

2. **Compiler**:
   - **Purpose**: The compiler translates the preprocessed source code into machine-readable instructions or object code.
   - **Tasks**: It performs lexical analysis, parsing, semantic analysis, optimization, and code generation.
   - **Input**: The compiler takes the preprocessed code (usually in the form of translation units) and produces object files
    or executable binaries.
   - **Optimization**: The compiler may apply various optimizations to improve the performance or size of the generated code.
   - **Output**: The output of the compiler is usually machine code or intermediate code that can be further processed by a
    linker to generate executable programs.

**Differences**:

- **Timing**: The preprocessor runs before the actual compilation process begins, while the compiler runs during the compilation phase.
- **Tasks**: The preprocessor handles preprocessing directives and text manipulation, while the compiler performs actual code 
translation and optimization.
- **Input and Output**: The preprocessor takes source code as input and produces modified source code as output, whereas the
 compiler takes preprocessed source code as input and produces machine code or object files as output.
- **Scope**: The preprocessor operates at the level of individual source files and headers, while the compiler analyzes and 
translates entire translation units or modules.

In summary, while both the preprocessor and compiler are essential components of the compilation process, they serve 
different roles: the preprocessor prepares the source code for compilation by manipulating text, while the compiler 
translates the modified source code into executable machine code.
*/

// now from the above definition:

// C++ compiler checks the argument types of inline functions and necessary conversions are performed correctly. 
// The preprocessor macro is not capable of doing this. One other thing is that the macros are managed by the 
// preprocessor and inline functions are managed by the C++ compiler. Remember: It is true that all the functions
//  defined inside the class are implicitly inline and the C++ compiler will perform inline calls of these functions, 
//  but the C++ compiler cannot perform inline if the function is virtual. The reason is called to a virtual function 
//  is resolved at runtime instead of compile-time. Virtual means waiting until runtime and inline means during compilation,
//  if the compiler doesn’t know which function will be called, how it can perform inlining? One other thing to remember is 
//  that it is only useful to make the function inline if the time spent during a function call is more compared to the function 
//  body execution time. 

// ------> for see the below explanation??

// what does this mean---> but the C++ compiler cannot perform inline if the function is virtual. 

/*
When a member function of a class is declared as `virtual`, it means that the function is intended to
 be overridden by derived classes. In other words, the actual implementation of the function to be executed is determined 
 dynamically at runtime based on the type of the object.

However, inlining a function means that the compiler replaces the function call with the actual body of 
the function at the call site, potentially improving performance by eliminating the overhead of a function call. 
This optimization is usually done for small, frequently called functions.

The statement "the C++ compiler cannot perform inline if the function is virtual" means that the compiler cannot 
inline a virtual function. This is because the decision of which function to call is deferred until runtime, making
 it impossible for the compiler to determine at compile time which version of the function to inline.

In summary, when a function is declared as `virtual`, it cannot be inlined because the decision of which 
function to call is dynamic and determined at runtime, whereas inlining requires the decision to be made statically at compile time.
*/