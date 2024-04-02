// deault argument using in constructors. can be used in constructors also, even methods also.

// CPP code to demonstrate use of default arguments in
// Constructors

#include <iostream>
using namespace std;

class A {
	private:
		int var = 0;
	public:
		A(int x = 0): var(x){}; // default constructor with one argument
								// Note that var(x) is the syntax in c++ to do : "var = x"
		void setVar(int s){
			var = s; // OR => this->var = s;
			return;
		}
		int getVar(){
			return var; // OR => return this->var;
		}
};
int main(){
	A a(1);

	a.setVar(2);

	cout << "var = " << a.getVar() << endl;
	
	/* ANOTHER APPROACH:
	A *a = new A(1);

	a->setVar(2);

	cout << "var = " << a->getVar() << endl;
	*/
}