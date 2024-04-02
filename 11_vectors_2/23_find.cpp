// let see find function,
// this function we pass three paramaters,
// 1.) the startindex, 2.) and the end index , 3.) the target element.
// this function return the iteraor/ pointer/ index of the first occurence of the target value.
// if not found then in case of vector returns vect.end().


#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
std::vector<int> vec{10, 20, 30, 40};

std::vector<int>::iterator it;

// Element to be searched
int ser = 30;
// std::find function call
it = std::find(vec.begin(), vec.end(), ser);
if (it != vec.end()) 
{
	std::cout << "Element " << ser << 
				" found at position : ";
	std::cout << it - vec.begin() << 
				" (counting from zero) \n";
}
else
	std::cout << "Element not found.\n\n";

// 
return 0;
}
