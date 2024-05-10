// count generally used in stl-library to see how much time
// an value that we passed is there, count will return tha count of value

// here since the values will be unique, so 
// 1 or 0 is possible value's returned.
// 1-->value present in the set.
// 2-->values not present in the set.

#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> set={1,2,3,4};
    cout<<set.count(1)<<" "<<set.count(100);
}