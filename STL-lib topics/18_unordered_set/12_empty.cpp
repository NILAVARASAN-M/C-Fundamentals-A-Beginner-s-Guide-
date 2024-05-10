// Return Value: It returns a boolean value True if \addindex
// unordered_set container is empty, else false. 

#include <iostream>
#include <unordered_set>
using namespace std;
 
int main1()
{
    unordered_set<int> uset;
    uset.insert({ 5, 6, 7, 8 });
    cout<<uset.empty()<<endl;
    uset.erase(uset.begin(), uset.end());
    cout<<uset.empty()<<endl;
    return 0;
}

