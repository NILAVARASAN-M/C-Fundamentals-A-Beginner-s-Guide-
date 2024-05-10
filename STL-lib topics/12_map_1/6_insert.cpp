// insert() funcion how to use in map, it is quite different from the vectors. the insert function.
// usage of insert(), pass the range, the position, value.
// here no range, just insert the value, and it will get arranged based on the key automatically.

// parameters: --> pass the pair of key and value
// way 1 of passing is by using is using list_initializer: just pass like this {key, value}.
// way 2: we use std::make_pair(key, value), as the paramter.
// so pass one parameter, a pair of key-value as one parameter is passed

// return: --> it retuns an std::pair of the type std::pair<iterator of type of the map, bool>
// pair.first : this is the iterator, where the new pair is inserted, but if aldready such pair exists then that iterator is returned.
// pair.second : this is an boolean value if TRUE indicating the inserted pair is an new pair which was not available in the map
// if FALSE indicating that the pair we tryed to insert was aldreadu present.

// suppose u are going to insert an key-value pair, and if that pair is aldready present then the value will not updated, it will just be ignored.

#include<iostream>
#include<map>
#include<string>
#include<vector>

int main1(){
    std::map<std::string, int> maps;
    std::pair<std::map<std::string, int>::iterator, bool> itr1=maps.insert({"nila", 231});
    auto itr2=maps.insert({"Messi", 2});
    auto itr3=maps.insert({"Ronaldo", 3});
    auto itr4=maps.insert({"vijay", 4});
    auto itr5=maps.insert({"pl1", 5});
    auto itr6=maps.insert({"pl2", 6});
    auto itr7=maps.insert({"Messi", 2321});
    auto itr8=maps.insert(std::make_pair("nii", 100000));
    std::vector<std::pair<std::map<std::string, int>::iterator, bool>> vect={itr1, itr2, itr3, itr4, itr5, itr6, itr7, itr8};
    for (auto val: vect){
        if(val.second){
            std::cout<<"inserted "<<(*(val.first)).first<<std::endl;
        }
        else{
            std::cout<<"No "<<(val.first)->first<<std::endl;
        }
    }
    return 0;
}

// we can also insert an range of iterators, from one std::map to another std::map.
// parameters: 
// para-1: start iterator of the map to be inserted.
// para-2: end iterator of the map to be inserted(exclusive).
// just inserts the iterators in the given range, if an key is aldready present, then that key-value pair is ignored.

int main(){
    std::map<int, std::string> destMap = {{1, "one"}, {2, "two"}};
    std::map<int, std::string> sourceMap = {{2, "www"}, {3, "three"}};
    // lets insert all the elements in sourcemap to destmap.
    destMap.insert(sourceMap.begin(), sourceMap.end());
    for(auto val: destMap){
        std::cout<<val.first<<val.second<<std::endl;
    }
    return 0;
}





// sing insert(): Insert function is used to insert the key-value pair in the map. After insertion, 
// the reordering of elements takes place and the map is sorted w.r.t the key. 

// This function is implemented in 3 ways:


// insert(pair): This function inserts the pair in the map. The insertion only takes place when the key passed is not already inset. 
// It returns a pointer pair. First element points to the pair already present or newly inserted. 
// The second element returns the boolean status “true” or “false”. 


// Time complexity: log(n) where n is the size of the map
// insert(hint, pair): In this implementation, the hint pointer is sent with the pair to be inserted.
//  The use of a hint pointer is to help insert() know where the actual insertion has to take place. 
// Hence, trying to reduce the time to allocate the pair. 
// Hint pointer does not force the insertion at a specific position. This function returns the pointer to the position where the pair is inserted. 
// Time complexity: log(n) where n is the size of the map if the hint is optimal then O(1)
// insert(beg_ptr, end_ptr): This type of insertion is required to insert the pairs of other containers into the map. 
// The repeated pairs are not inserted if they are present in the destination container. 
// Time complexity: k*log(n) where n is the size of the map, and k is no. of elements inserted.

// C++ code to demonstrate the working of insert() 
	
#include<iostream> 
#include<map> // for map operations 
using namespace std; 
	
int main() 
{ 
	// declaring map 
	// of char and int 
	map< char, int > mp; 
		
	// declaring iterators 
	map<char, int>::iterator it ; 
	map<char, int>::iterator it1; 
	map<char, int>::iterator it2; 
		
	// declaring pair for return value of map containing 
	// map iterator and bool 
	pair <map<char, int>::iterator, bool> ptr; 
		
	// using insert() to insert single pair 
	// inserting 'a' with 20 
	ptr = mp.insert( pair<char, int>('a', 20) ); 
		
	// checking if the key was already present or newly inserted 
	if(ptr.second) 
		cout << "The key was newly inserted" ; 
	else
		cout << "The key was already present" ; 
		
	cout << endl ; 
		
	// printing map pairs after insertion 
	cout << "The map pairs after 1st insertion are : \n"; 
		
	for (it1 = mp.begin(); it1!=mp.end(); ++it1) 
		cout << it1->first << "->" << it1->second << endl; 
		
	it = mp.begin(); 
		
	// inserting map pair using hint 
	mp.insert(it, pair<char, int>('b', 24) ); 
		
	cout << endl ; 
		
	// printing map pairs after insertion 
	cout << "The map pairs after 2nd insertion are : \n"; 
		
	for (it1 = mp.begin(); it1!=mp.end(); ++it1) 
		cout << it1->first << "->" << it1->second << endl; 
		
	// initializing another map 
	map<char, int> mp2; 
		
	// using insert(beg_iter, end_iter) to copy all elements 
	mp2.insert(mp.begin(), mp.end()); 
		
	cout << endl ; 
		
	// printing new map pairs after insertion 
	cout << "The new map pairs after insertion are : \n"; 
		
	for (it1 = mp2.begin(); it1!=mp2.end(); ++it1) 
		cout << it1->first << "->" << it1->second << endl; 
		
}
