#include<bits/stdc++.h>
using namespace std;

void display(unordered_set<int> &uset){
    for(auto itr=uset.begin(); itr!=uset.end(); itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
}

// **************QUESTION********** we have an array of nums, and to check if there are dupliactes and store it in another array.
int main(){
    vector<int> vect={1,2,2,3,4,5,6,7,7,8,8,100};
    unordered_set<int> uset1;
    unordered_set<int> uset2;

    // duplicates will be stored in uset2.
    for(auto itr: vect){
        if(uset1.count(itr)){
            uset2.insert(itr);
        }
        else{
            uset1.insert(itr);
        }
    }
    // duplicates are stored in uset2, now
    display(uset2);
    return 0;
}