// You're correct. Recursive functions cannot be inline because inline functions must have a finite number
//  of calls, and recursion implies potentially infinite calls. Therefore, a recursive function declared and 
//  defined within a class will not be considered inline by default, even if it's defined inside the class.

class MyClass {
public:
    // Recursive function declaration and definition inside the class
    int factorial(int n) {
        if (n <= 1) {
            return 1;
        } else {
            return n * factorial(n - 1); // Recursive call
        }
    }
};

// In this case, `factorial` is a recursive function, and even though it's defined inside the class, it won't be 
// considered inline because of its recursive nature. You can still define it inside the class for organizational purposes,
//  but it won't be treated as an inline function.