#include<bits/stdc++.h>
using namespace std;
// size
// this function returns the number of total elements
// present accross the container.
// will give the count of all elements present in all buckets of the set.\

int main1(){
    unordered_set<int> set={1,2,2,3,4,4,5,6,7};
    cout<<set.size()<<endl;
    set.clear();
    cout<<set.size()<<endl;
    return 0;
}
// swap
// swap here, will not swap two values. But swap here is used for swapping
// two containers. if set1 and set2, we will copy the contents in set1 to set2 and set2 to set1.
// so the size may change, and the order will change if the hash-function used here and there is different.
void display(unordered_set<int> &uset){
    for(auto itr=uset.begin(); itr!=uset.end(); itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
}

int main2(){
    unordered_set<int> set1={1,2,2,3,4,4,5,6,7};
    unordered_set<int> set2={1,2,5,6,7};
    display(set1);
    display(set2);
    set1.swap(set2);
    cout<<"--------"<<endl;
    display(set1);
    display(set2);
    return 0;
}

// emplace
// suppose if we are going to insert only one-element. Then this is 
// prefered then insert() function. because insert() wil create an object,
// and then copy that object, and insert that copy in location.
// but emplace function will create and insert inplace in that location.
// for inserting a element, emplace is prefered.

// parameter: unordered_set_name.emplace(element)
// we can pass only one element, which means using emplace we cant insert 
// range of values.

// returns an pair.
 
int main()
{
 
    unordered_set<string> sampleSet;
 
    // Inserting elements using
    // emplace() function
    sampleSet.emplace("Welcome");
    sampleSet.emplace("To");
    sampleSet.emplace("GeeksforGeeks");
    sampleSet.emplace("Computer Science Portal");
    sampleSet.emplace("For Geeks");
 
    // displaying all elements of sampleSet
    cout << "sampleSet contains: ";
    for (auto itr = sampleSet.begin(); itr != sampleSet.end(); itr++) {
        cout << *itr << " ";
    }
 
    return 0;
}