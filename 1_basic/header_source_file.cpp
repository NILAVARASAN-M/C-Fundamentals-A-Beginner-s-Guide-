//what is the difference between normal file and header file in c++

//--------------------------------------------------------------------------------------------------------//
/*

In C++, both normal files (source files) and header files serve different purposes in the organization and compilation of your code:

1. **Source Files (.cpp)**:
   - Source files, typically with a `.cpp` extension, contain the actual implementation of your C++ code.
   - They consist of function definitions, variable declarations, and other executable code.
   - Source files are compiled by the compiler into object files (`.o` or `.obj`) containing machine code.
   - They usually include header files to access declarations and definitions of functions and classes defined elsewhere.

2. **Header Files (.h or .hpp)**:
   - Header files, often with a `.h` or `.hpp` extension, contain declarations of functions, classes, variables, and constants.
   - They provide interfaces to the functionality implemented in source files.
   - Header files are not compiled independently but are included in source files using the `#include` directive.
   - They help in separating the interface from the implementation, promoting modularity and reusability.
   - Header files may include guard directives (`#ifndef`, `#define`, `#endif`) to prevent multiple inclusion, ensuring that the declarations are processed only once.

In summary, source files contain the actual code implementation, while header files contain declarations that describe the interface of the code. The separation allows for better organization, modularity, and reusability of code in large projects.
*/
//--------------------------------------------------------------------------------------------------------//


// usage of header file.

//--------------------------------------------------------------------------------------------------------//
/*
Certainly, let's break down these points:

1. **Separating Interface from Implementation**:
   - Header files provide a way to declare the interface of a module, including function prototypes, class definitions, constants, and type declarations.
   - The interface is essentially what functions and classes are available to users of the module, without revealing how they are implemented internally.
   - The actual implementation of the functions and classes is placed in the corresponding source files (`.cpp` files).
   - This separation allows users of the module to interact with its functionality through the interface defined in the header file without needing to know the implementation details. It promotes abstraction and encapsulation.

2. **Promoting Modularity and Reusability**:
   - By separating interface from implementation, header files facilitate modularity in software design. Each module can be developed and maintained independently.
   - Modules can be reused in different parts of a program or in different programs altogether without needing to rewrite the same functionality.
   - For example, a header file containing the declaration of a utility class can be included in multiple source files across different projects, promoting code reuse.
*/
//--------------------------------------------------------------------------------------------------------//

// will header file created automatically???

//--------------------------------------------------------------------------------------------------------//
/*
When you create a source file like `nila.cpp`, typically, a corresponding header file (`nila.h` or `nila.hpp`, for example) is not created automatically. It's up to you as the developer to decide whether you need a header file for your source file and then create it manually.
Header files are commonly used to declare function prototypes, class declarations, constants, and other declarations that need to be shared across multiple source files. They serve as interfaces to the functionality implemented in the corresponding source files.

If you determine that your `nila.cpp` file requires declarations that need to be shared with other source files or if you want to promote modularity and code reuse, you can create a header file (`nila.h`, for example) manually and define the necessary declarations in it.

Once you've created the header file, you can include it in your source files using the `#include` directive to make the declarations available to the compiler during compilation.

So, to answer your question: No, header files are not created automatically when you create a source file. You should decide whether you need a header file for your source file and create it manually if necessary.*/
//--------------------------------------------------------------------------------------------------------//

// header gaurds
//--------------------------------------------------------------------------------------------------------//
/*
Header guards, also known as include guards, are preprocessor directives used in C and C++ to prevent a header file from being included more than once in a single translation unit. This prevents issues such as duplicate declarations and definitions, which can lead to compilation errors or undefined behavior.

Here's how header guards work:

1. **Define a Unique Symbol**: At the beginning of the header file, you define a unique symbol using `#define`. This symbol serves as a flag indicating whether the header file has already been included.

   ```cpp
   #ifndef MY_HEADER_H
   #define MY_HEADER_H
   ```

   In this example, `MY_HEADER_H` is a symbol chosen to represent the header file. You can name it anything you want, but it's common practice to use the header file name in uppercase with underscores.

2. **Check if the Symbol is Defined**: Next, you use `#ifndef` (if not defined) to check if the symbol defined in step 1 is not already defined. If it's not defined, it means the header file has not been included yet.

3. **Define the Symbol and Include Contents**: Inside the `#ifndef` block, you `#define` the symbol to mark it as defined. Then, you include the contents of the header file.

   ```cpp
   #ifndef MY_HEADER_H
   #define MY_HEADER_H

   // Contents of the header file

   #endif // MY_HEADER_H
   ```

4. **End of Header Guard**: At the end of the header file, you include a comment indicating the end of the header guard.

   ```cpp
   #endif // MY_HEADER_H
   ```

When the compiler encounters an `#include` directive for a header file, it processes the header file and replaces the `#include` directive with the contents of the header file. If the header file contains a header guard, the preprocessor checks if the guard symbol is defined. If it's not defined, the contents of the header file are included, and the guard symbol is defined. If the guard symbol is already defined, the preprocessor skips the contents of the header file.

Header guards ensure that each header file is included only once per translation unit, preventing duplicate declarations and definitions and avoiding compilation errors. They are a standard practice in C and C++ programming.
*/
//--------------------------------------------------------------------------------------------------------//