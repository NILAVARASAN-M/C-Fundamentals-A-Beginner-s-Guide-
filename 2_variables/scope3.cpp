// now suppose if there is the temp variable which is both global and local, and u want to use both the variable then like this.
// C++ program to show that we can access a global 
// variable using scope resolution operator :: when 
// there is a local variable with same name 
#include<iostream> 
using namespace std; 

// Global x 
int x = 0; 
	
int main() 
{ 
// Local x	 
int x = 10; 
cout << "Value of global x is " << ::x; 
cout<< "\nValue of local x is " << x; 
return 0; 
} 
