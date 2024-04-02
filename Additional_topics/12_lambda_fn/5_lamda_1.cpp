// we can see that defining an struct, was quite easy. but due to some internal, it is not still effcient.
// so only this lambda functions were intrdocued in the c++11.

// SYNTAX: [] () specifiers exception attr -> return {code}.
/*
The expression `[] () specifiers exception attr -> return {code}` represents the syntax of a lambda function in C++. Let's break down each part:

1. `[]`: This is the lambda capture specifier, which specifies how variables are captured from the surrounding scope. An empty capture `[]` indicates that no variables are captured, meaning the lambda function does not access variables from its surrounding scope. Other options include `[=]` (captures variables by value), `[&]` (captures variables by reference), and `[x, y]` (captures specific variables `x` and `y` by value).

2. `()`: This part defines the parameter list of the lambda function. It can be empty if the lambda function takes no parameters, or it can contain parameters separated by commas. For example, `int x` or `int x, int y`.

3. `specifiers`: These are optional type specifiers that define the return type of the lambda function. They can include `mutable`, `constexpr`, and `noexcept`. If omitted, the return type is deduced by the compiler.

4. `exception`: This is an optional exception specification that specifies which exceptions the lambda function can throw. It can include `throw()` (no exceptions) or `throw(type1, type2)` (specific exception types).

5. `attr`: These are optional attributes that can be applied to the lambda function, such as `[[nodiscard]]`, `[[deprecated]]`, or `[[maybe_unused]]`.

6. `-> return`: This part specifies the return type of the lambda function. It can be omitted if the return type can be deduced by the compiler. Otherwise, it follows the `->` arrow, followed by the return type.

7. `{code}`: This is the body of the lambda function, enclosed in curly braces `{}`. It contains the statements and expressions that define the behavior of the lambda function.

Putting it all together, the lambda function syntax allows you to create anonymous functions in C++ with flexible capture, parameter, return type, and exception handling capabilities. Here's an example of a simple lambda function:

```cpp
[] (int x, int y) noexcept -> int {
    return x + y;
}
```

This lambda function takes two `int` parameters (`x` and `y`), does not throw any exceptions (`noexcept`), and returns their sum as an `int`. Since it captures nothing from the surrounding scope, the capture list `[]` is empty.
*/

// so specifiers exception attr --> this ones can bes omitted, we dont much use them.
// refined: 
// SYNTAX: [] () -> return {code}.

// EXAMPLE-1:   []{};    
// here we are not capturing anything, also we are not passing anything.

// EXAMPLE-2: 
// [](float f, int a) { return a * f; };
// [](int a, int b) { return a < b; };
// we are passing, parameters, the return type is not need, the compiler will automatically deduce it.

// EXAMPLE-3: [](MyClass t) -> int { auto a = t.compute(); print(a); return a; };
// we are explicitly telling about the return type.

// now whenever we declare the lamda function, the compiler will convert it to an function and the function will be passed.
// this is what will happen internally. also ths lambda function is prvalue (pure rvalue). and of type closure type.
// he process of translation or “expansion” can be easily viewed on C++ Insights⁶ an online
// tool which takes valid C++ code and then produces a source code version that the compiler
// generates: like anonymous function objects for lambdas, template instantiation and many
// other C++ features

// so u see that lambda function will converted by the compile time, so it will be hard to dedctu the type, explicitly by us.
// so we use auto or decltype --> to deduce the type of lambda function.

// EXAMPLE-4: 
// auto myLambda = [](int a) -> double { return 2.0 * a; };

// What’s more, if you have two lambdas that look the same:
// auto firstLam = [](int x) { return x * 2; };
// auto secondLam = [](int x) { return x * 2; }

// u will think that firstLam and secondLam are same. 
// Their types are different even if the “code-behind” is the same! The compiler is required to
// declare two unique unnamed types for each lambda

/*
#include <type_traits>
int main() {
const auto oneLam = [](int x) noexcept { return x * 2; };
const auto twoLam = [](int x) noexcept { return x * 2; };
static_assert(!std::is_same<decltype(oneLam), decltype(twoLam)>::value,
"must be different!");
}
*/

// from this it is clear that they are not same.

// so it is better to use an auto, decltype etc.
// but if u still want to know, what it the type, this may not be the proper way, but still this is an way of declaring the type of
// an lambda fubction.

// However, while you don’t know the exact name, you can spell out the signature of the lambda
// and then store it in std::function. In general, what can’t be done with a lambda defined as
// auto can be done if the lambda is “expressed” through std::function<> type. For example,
// the previous lambda has a signature of double(int) as it takes an int as an input parameter
// and returns double. We can then create a std::function object in the following way:
// std::function<double(int)> myFunc = [](int a) -> double { return 2.0 * a; };

// std::function is a heavy object because it needs to handle all callable objects. To do that, it
// requires advanced internal mechanics like type punning or even dynamic memory allocation.
// We can check its size in a simple experiment

// below is the code, where we use auto, and std::function<double(int)>. and we will also see the size of the object

/*
#include <functional>
#include <iostream>
int main() {
const auto myLambda = [](int a) noexcept -> double {
return 2.0 * a;
};
const std::function<double(int)> myFunc =
[](int a) noexcept -> double {
return 2.0 * a;
};
std::cout << "sizeof(myLambda) is " << sizeof(myLambda) << '\n';
std::cout << "sizeof(myFunc) is " << sizeof(myFunc) << '\n';
return myLambda(10) == myFunc(10);
}
*/

// OUTPUT: myLambda -> 1(size), myFunc->40(size).
// the size difference is huge so u better use auto only.