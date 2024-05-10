// there are two main-ways we can traverse an map.

#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

// using for/ while loop and iterators.
int main1(){
    // Map created 
    std::unordered_map<std::string, int> ExampleMap; 
    // elements are inserted into unordered_map 
    ExampleMap.insert( 
        std::pair<std::string, int>("Sunday", 1)); 
    ExampleMap.insert( 
        std::pair<std::string, int>("Monday", 2)); 
    ExampleMap.insert( 
        std::pair<std::string, int>("Tuesday", 3)); 
    ExampleMap.insert( 
        std::pair<std::string, int>("Wednesday", 4)); 
    ExampleMap.insert( 
        std::pair<std::string, int>("Thursday", 5)); 
    ExampleMap.insert( 
        std::pair<std::string, int>("Friday", 6)); 
    ExampleMap.insert( 
        std::pair<std::string, int>("Saturday", 7)); 
    

    for(auto itr=ExampleMap.begin(); itr!=ExampleMap.end(); itr++){
        std::cout << itr->first << " :: " << itr->second << std::endl; 
    }
    unordered_map<string, int>::iterator itr=ExampleMap.begin();
    while(itr!=ExampleMap.end()){
        std::cout << itr->first << " :: " << itr->second << std::endl; 
        itr++;
    }
}


#include<algorithm>
// using for_each loop.
int main(){
    // Map created 
    std::unordered_map<std::string, int> ExampleMap; 
    // elements are inserted into unordered_map 
    ExampleMap.insert( 
        std::pair<std::string, int>("Sunday", 1)); 
    ExampleMap.insert( 
        std::pair<std::string, int>("Monday", 2)); 
    ExampleMap.insert( 
        std::pair<std::string, int>("Tuesday", 3)); 
    ExampleMap.insert( 
        std::pair<std::string, int>("Wednesday", 4)); 
    ExampleMap.insert( 
        std::pair<std::string, int>("Thursday", 5)); 
    ExampleMap.insert( 
        std::pair<std::string, int>("Friday", 6)); 
    ExampleMap.insert( 
        std::pair<std::string, int>("Saturday", 7)); 
    
    for_each(ExampleMap.begin(), ExampleMap.end(), [](pair<const string, int> &p){
        std::cout << p.first << " :: " << p.second << std::endl; 
    });
}