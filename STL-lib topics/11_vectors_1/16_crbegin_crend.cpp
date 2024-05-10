// just an reverse iterator, being const that's all.
// TYPE: const_reverse_iterator.

#include <iostream> 
#include<vector> 
using namespace std; 

int main1() 
{ 
vector<string> str{"avi","aniket","akash","ajay"}; 
vector<string>::const_reverse_iterator itr=str.crend()-1; 
std::cout<< *itr; 
return 0; 
}

int main() 
{ 
vector<string> v{"akash","ajay","aniket","avi"}; 
vector<string>::const_reverse_iterator itr=v.crbegin(); 
cout<<*itr; 
return 0; 
}
