// see the link geekforgeeks link to understand more and very clearly. ----> https://www.geeksforgeeks.org/inline-functions-cpp/?ref=lbp

// in short why to use inline functions is due to.
/*
Why Inline Functions are Used?
When the program executes the function call instruction the CPU stores the memory address of the 
instruction following the function call, copies the arguments of the function on the stack, and finally 
transfers control to the specified function. The CPU then executes the function code, stores the function 
return value in a predefined memory location/register, and returns control to the calling function. This can
 become overhead if the execution time of the function is less than the switching time from the caller function to called function (callee). 

For functions that are large and/or perform complex tasks, the overhead of the function call is usually 
insignificant compared to the amount of time the function takes to run. However, for small, commonly-used 
functions, the time needed to make the function call is often a lot more than the time needed to actually execute
 the function’s code. This overhead occurs for small functions because the execution time of a small function is less than the switching time.
*/

// C++ provides inline functions to reduce the function call overhead.
//  An inline function is a function that is expanded in line when it is called. 
//  When the inline function is called whole code of the inline function gets inserted or substituted at the point of the inline function call. 
//  This substitution is performed by the C++ compiler at compile time. An inline function may increase efficiency if it is small.

// Syntax:

/*
inline return-type function-name(parameters)
{
    // function code
}
*/