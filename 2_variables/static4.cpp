// creating a object inside a scope of an block.
#include <iostream>
using namespace std;

class GfG {
	int i;

public:
	GfG()
	{
		i = 0;
		cout << "Inside Constructor\n";
	}
	~GfG() { cout << "Inside Destructor\n"; }
};

int main()
{
	int x = 0;
	if (x == 0) {
		GfG obj;
	}
	cout << "End of main\n";
}
/*
In the above program, the object is declared inside the if block as non-static. 
So, the scope of a variable is inside the if block only. So when the object is 
created the constructor is invoked and soon as the control of if block gets over the 
destructor is invoked as the scope of the object is inside the if block only where it is declared.
*/
// the object gets deleted when they are the end of the block, so destructor get envoked.