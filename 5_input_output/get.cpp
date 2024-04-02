// C++ program to illustrate the use 
// of cin.get() 
#include <iostream> 
using namespace std; 

void fun1(){
    char ch; 
	cin.get(ch); 
	// Print ch 
	cout << ch; 
}
// above only one arguments since ch is a character
void fun2(){
    char ch[25]; 
	cin.get(ch, 25); 
	// Print ch 
	cout << ch;
}
// above is here two arguments, since it is array of characters, strings so only.
// Driver Code 
int main() 
{
	fun2();
	return 0;
}

// difference between get and getline function is that:

/*
get() function:
in here it is similiar to the raw string in python, where suppose u type "nila\nwow", it will consider \n not as an special character 
but as an string will read, but

getline() function:
here when it first enciunters \n, the code will be termiated and will read till that only, and the later will be excluded.
*/