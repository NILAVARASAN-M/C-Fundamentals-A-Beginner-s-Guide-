#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

int main(){
    deque<int> de;
    for(int i=0;i<10;i++){
        de.push_front(i);
    }

    auto itr=find(de.begin(), de.end(), 100);
    if(itr!=de.end()){
        cout<<"value found at the location: "<<(de.begin()-itr)<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}