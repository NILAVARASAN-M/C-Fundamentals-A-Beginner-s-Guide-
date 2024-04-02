// CPP program to illustrate
// class objects as static
#include <iostream>
using namespace std;

class GfG {
	int i = 0;

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
		static GfG obj;
	}
	cout << "End of main\n";
}
// in here since the object is static, so the static object deleted only at the last. so the oredr will change.