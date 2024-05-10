/*
Syntax: size_type count(Key);
Parameters: This function accepts a single parameter key which is needed to be checked in the given unordered_map container.
Return Value: This function returns 1 if there exists a value in the map with the given key, otherwise it returns 0.
*/

// count tell's, whether an key is present or not in the unordered_map. 1-> present, 0->not present.

#include<iostream>
#include<unordered_map>

using namespace std;

int main1(){
    unordered_map<int, int> umap;
    umap[1]=1;
    umap[2]=2;
    umap[3]=3;
    umap[4]=4;

    for(int i=0;i<7;i++){
        cout<<"KEY :"<<i<<" is "<<(umap.count(i)? "Present": "Not present")<<endl;
    }
    return 0;
}

// using make_pair function to insert an pair.

int main() 
{ 
	unordered_map<int , string> umap; 
	umap.insert(make_pair(1,"Welcome")); 
	umap.insert(make_pair(2,"to")); 
	umap.insert(make_pair(3,"GeeksforGeeks")); 
	umap.insert(make_pair(3,"CS Portal")); 
	cout<<"Count of elements in map, mapped with key 3: "
			<<umap.count(3); 
    // if an key is aldready present, and again u try to insert an key-value pair, it will be ignored.
    cout<<umap[3];
	return 0; 
} 

// we have to pass an argument, it is mandtory.