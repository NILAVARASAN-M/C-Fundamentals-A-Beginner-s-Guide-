// similar to python, we can give default arguments, suppose if the user passes lesser arguments then required, b/c that is the need
// it will raise error but to avoid this we can use this default argument by specying some random value.

/*
A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the calling function 
doesn’t provide a value for the argument. In case any value is passed, the default value is overridden. 
*/

#include<iostream>

int sum(int x, int y, int a=0, int b=0){
    return x+y+a+b;
}

int main(){
    std::cout<<sum(5,6)<<std::endl;
    std::cout<<sum(5,6,1)<<std::endl;
    std::cout<<sum(5,6,1,1)<<std::endl;
}

// generally this can be done using three function, and using the concept of overloading.
// but many lines, so alternatively this can be accompolised using this default arguments, so now the user can either pass 2, 3, 4 arguments etc.


// the below code will cause error if u bserve carefully because, if the user only pass's only two arguments then now the compiler
// will get confused, so below cose seems to look correct but due to ambituious overrdding it will cause error.

/*
// CPP Program to demonstrate Function overloading in
// Default Arguments
#include <iostream>
using namespace std;

// A function with default arguments, it can be called with
// 2 arguments or 3 arguments or 4 arguments.
int sum(int x, int y, int z = 0, int w = 0)
{
	return (x + y + z + w);
}
int sum(int x, int y, float z = 0, float w = 0)
{
	return (x + y + z + w);
}
// Driver Code
int main()
{
	cout << sum(10, 15) << endl;
	cout << sum(10, 15, 25) << endl;
	cout << sum(10, 15, 25, 30) << endl;
	return 0;
}

*/