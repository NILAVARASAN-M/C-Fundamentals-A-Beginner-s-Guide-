// lets see three functions clear(), at(), swap(), emplace()
// and the [] operator.

#include<iostream>
#include<map>
#include<string>

// clear deletes all the contents/pairs/iterators etc from the map.
// no parameter, and nothin is returned.

// CPP program to illustrate 
// Implementation of clear() function 
 
int main1() 
{ 
	// Take any two maps 
	std::map<int, std::string> map1, map2; 
	// Inserting values 
	map1[1] = "India"; 
	map1[2] = "Nepal"; 
	map1[3] = "Sri Lanka"; 
	map1[4] = "Myanmar"; 
	// Print the size of map 
	std::cout<< "Map size before running function: \n"; 
	std::cout << "map1 size = " << map1.size() << std::endl; 
	std::cout << "map2 size = " << map2.size() << std::endl;; 
	// Deleting the map elements 
	map1.clear(); 
	map2.clear(); 
	// Print the size of map 
	std::cout<< "Map size after running function: \n"; 
	std::cout << "map1 size = " << map1.size() << std::endl; 
	std::cout << "map2 size = " << map2.size(); 
	return 0; 
} 

// at() function

int main2(){
    std::map<int, std::string> map1; 
	map1[1] = "India"; 
	map1[2] = "Nepal"; 
	map1[3] = "Sri Lanka"; 
	map1[4] = "Myanmar"; 
    auto val=map1.at(1);
    std::cout<<map1[1]<<val;
    map1.at(1)="nila";
    std::cout<<map1[1];
    //  the at() function returns an refrence, so now when u change, the value it will get reflecected in the map object also.
    std::cout<<map1.at(10);
    // this will throw an error, because the at() function will check for bounds, if the key we specified is not there, then it will throw error.
    // unlike operator[], which will initialzie with the default value.
    return 0;
}

// swap function,
// we will not swap the itrators, not the swap in arrays, like this is not possible in map.
// think logically, since the elements are in ssomre order, swapping will distub the order.
// so swapping in map is nothing but, swaping the conetnt between two maps,
// initial map1 data will go to map2, and initila map2 will go to map1.
int main3(){
    // Take any two maps
    std::map<int, char> map1, map2;
    map1[1] = 'a';
    map1[2] = 'b';
    map1[3] = 'c';
    map1[4] = 'd';
 
    map2[5] = 'w';
    map2[6] = 'x';
    map2[7] = 'y';
 
    // Swap elements of queues
    swap(map1, map2);

    for(std::pair<const int, char> val: map1){
        std::cout<<val.first<<" "<<val.second<<std::endl;
    }
    for(std::pair<const int, char> val: map2){
        std::cout<<val.first<<" "<<val.second<<std::endl;
    }
    return 0;
}

// When you perform a swap operation between two maps (map1 and map2 in your case), you are swapping the internals of these maps. This means their 
// content, size, and any property related to their elements, including their comparison object, are exchanged.

// emplace() function.
// refer the emplace that we were seen in the vectors, the internal is same.
// the paramteres and the return are same as insert function in std::map.
// return std::pair< iterator of that map type, bool>
int main(){
    // initialize container
    std::map<int, int> mp;
    // insert elements in random order
    mp.emplace(2, 30);
    mp.emplace(1, 40);
    mp.emplace(2, 20);
    mp.emplace(1, 50);
    mp.emplace(4, 50);

    // prints the elements
    std::cout << "\nThe map is : \n";
    std::cout << "KEY\tELEMENT\n";
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
        std::cout << itr->first << "\t" << itr->second << std::endl;
}