// when you use compare comparsion operators on immutable type's like char, double, float, int, unsigned, size_t, short, long.
// so a < b , here both a and b if they are of different-type, the compiler will not throw error. But it will convert one of the
// the variable to other-variable type. this is implicitly done by the compiler. Now compiler will choose which variable type,
// as the common type for comparsion. there are some key points for this see below.

/*
In C++, when comparing values of different types, the compiler performs implicit type conversion to ensure 
that both values are of the same type before comparison. This process is known as type promotion.

Here's how the compiler generally chooses the type for comparison:

1. **Integral Promotion**: If one operand is of a smaller integral type (like `char` or `short`) and the 
other is of a larger integral type (like `int`), the smaller type is promoted to the larger type.

2. **Usual Arithmetic Conversion**: If one operand is of an integral type and the other is of a 
floating-point type, the integral type is converted to the floating-point type.

3. **Signedness Conversion**: If one operand is unsigned and the other is signed, the signed
 operand is converted to unsigned if possible.

4. **Floating-Point Promotion**: If one operand is of type `float`, the other is promoted to `float`. 
Similarly, if one operand is of type `double`, the other is promoted to `double`.

5. **Enum Conversion**: Enumerations are converted to integral types before comparison.

In your example, `96` is an `int`, and `'a'` is a `char`. Before comparison, the `char` value `'a'` is
promoted to an `int`, and then the comparison is performed. The ASCII value of `'a'` is 97, so the comparison 
`96 < 'a'` becomes `96 < 97`, which evaluates to `true`.
*/

// so this is clear, so we will see some example's.
#include<bits/stdc++.h>
using namespace std;

// for promotion conversion
int main1(){
    int num=96;
    char ch='a';
    cout<<(num<ch)<<endl;
    // this is an promotion type so, the char is converted to the longer-range, in this case that is integer.
    // a is converted as 97.
    return 0;
}

// Usual Arithmetic Conversion
int main2(){
    int num=96;
    float fl=96.1;
    cout<<(num<fl)<<endl;
    // in this type so num will be implicitly converted to float-type. so 96<96.1   
    return 0;
}

// Signedness Conversion
int main(){
    int num=1;
    size_t us_num=100;
    cout<<(num<us_num)<<endl; // in this type of conversion, the signed will be converted to unsigned.
    // here num=1, which when converted to unsigned will be 1 only. so this true.
    int num2=-1;
    cout<<(num2<us_num)<<endl; // here the problem arises, since num2 is signed and its value being -1, when converted to
    // unsigned since not in range, b/c -1 is not possible in unsigned so num2 will be the maximium number possible
    // so num2 will be 2^32-1.
    // so only above is giving 0, eventhough -1<100.

    // to coorect this, convert the other type to integer explcitly.
    cout<<(num2<(int)us_num)<<endl;
    // this work's, so be carefull i faced an big problem, and was searching for the error more than 1-hour.
    return 0;
}