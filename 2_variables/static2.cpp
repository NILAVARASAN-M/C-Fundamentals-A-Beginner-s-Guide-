// declaring static variable in class level

/*
As the variables declared as static are initialized only once as they are allocated space in 
separate static storage so, the static variables in a class are shared by the objects. 
There can not be multiple copies of the same static variables for different objects. Also because of 
this reason static variables can not be initialized using constructors. 
*/

#include <iostream>
using namespace std;

class GfG {
public:
	static int i;

	GfG(){
		// Do nothing
	};
};

int main()
{
	GfG obj1;
	GfG obj2;
	obj1.i = 2;
	obj2.i = 3;

	// prints value of i
	cout << obj1.i << " " << obj2.i;
	return 0;
}
// this will produce error becausethe class GFG will only define the variable, like that vraible details, its scope, class etc. nothing else
//so we have to allocate space in memory and this explcitily done by the user.

// the above code will produce error because 
/*
You can see in the above program that we have tried to create multiple copies of the static variable 
i for multiple objects. But this didn’t happen. So, a static variable inside a class should be initialized explicitly by the 
user using the class name and scope resolution operator outside the class as shown below: 
*/
