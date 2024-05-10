// front returns the first element of the vector.
// back returns the last element of the vector.

// 1. If the vector container is empty, it causes undefined behavior.  
// 2. It has a no exception throw guarantee if the vector is not empty.
// valid for both front() and back() also.

#include<iostream>
#include<vector>

using namespace std;

// front();
int main_1(){
    vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int& ref_var=v1.front();
    // this front() function returns, the refrence of the variables, so now ref is allies with that referenced value returned by the front().
    ref_var=123321;
    while(!v1.empty()){
        cout<<v1.front()<<" ";
        v1.erase(v1.begin());
    }
    return 0;
}

int main(){
    vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int& ref_var=v1.back();
    // this front() function returns, the refrence of the variables, so now ref is allies with that referenced value returned by the front().
    ref_var=123321;
    while(!v1.empty()){
        cout<<v1.back()<<" ";
        v1.pop_back();
    }
}