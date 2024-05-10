// find() function.

// find function's check if an key is present in the unordered_map, if present then will return the iterator.
// else will return the end-iterator.

/*
Syntax:  unordered_map.find(key);
Parameters: It takes the key as a parameter.
Return values: If the given key exists in unordered_map it returns an iterator
 to that element otherwise it returns the end of the map iterator.
*/

#include <bits/stdc++.h> 
using namespace std; 

int main1() 
{ 
	unordered_map<int, bool> um; 
	um[12] = true; 
	um[6789] = false; 
	um[456] = true; 
	if (um.find(23) == um.end()) cout << "Element Not Present\n"; 
	else cout << "Element Present\n"; 
	// Searching for element 12 
	if (um.find(12) == um.end()) cout << "Element Not Present\n"; 
	else cout << "Element Present\n"; 
	return 0; 
} 

// empty function.
// checks if the map is empty or not.
/*
Syntax: unordered_map_name.empty()
Parameters: This function does not accept any parameter 
Return type: This function returns boolean value TRUE or FALSE.
*/

int main2(){
    unordered_map<int, bool> um; 
	um[12] = true; 
    unordered_map<int, int> umap;
    cout<<um.empty()<<" "<<umap.empty();
    return 0;
}

/*
erasing by iterator: It takes an iterator as a parameter and erases the key and value present at that iterator.
Syntax
unordered_map.erase(const iterator);
erasing by key: It takes a key as a parameter and erases the key and value.
Syntax
unordered_map.erase(const key);
erase by range: It takes two iterators as a parameter and erases all the key and values present in between (including the starting iterator and excluding the end iterator).
Syntax:
unordered_map.erase(const iteratorStart, const iteratorEnd);
*/

// 1.) delete by iterator, 2.) delete by key, 3.) delete by range.
// if we pass an key/ iterator, and not present then will have no effect/ will not throw error also.

void display(unordered_map<int, bool> umap){
    for (auto p : umap) 
        cout << p.first << "==>" << p.second << "\n"; 
    return;
}

int main() 
{ 
  
    unordered_map<int, bool> um; 
    um[12] = true; 
    um[4189] = false; 
    um[519] = true; 
    um[40] = false; 
    um[4991] = true; 
  
    cout << "Contents of the unordered_map : \n"; 
    display(um);
    
    // erase by iterator 
    cout << "After erasing by Iterator : \n"; 
    um.erase(um.begin()); 
    display(um);
  
    // erase by value 
    cout << "After erasing by Key : \n"; 
    um.erase(4189); 
    display(um);
  
    // erase by range 
    cout << "After erasing by Range : \n"; 
    auto it = um.begin(); 
    it++; // Returns iterator pointing to second element 
    um.erase(it, um.end()); 
    display(um);
    return 0; 
} 