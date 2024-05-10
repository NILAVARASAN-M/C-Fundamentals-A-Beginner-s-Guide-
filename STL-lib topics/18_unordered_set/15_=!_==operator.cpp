// comparsion operator.

// 1.) check the size.
// 2.) checks each and every values in set1 and set2.

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    unordered_set<string>
        a = { "C++", "Java", "Python" },
        b = { "Java", "Python", "C++" },
        c = { "C#", "Python", "Java" };
 
    if (a != b) { // operator !=
        cout << "a and b are not equal\n";
    }
    else {
        cout << "a and b are equal\n";
    }
 
    if (a == c) { // operator ==
        cout << "a and c are  equal\n";
    }
    else {
        cout << "a and c are not equal\n";
    }
 
    return 0;
}