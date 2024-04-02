#include<iostream>
#include<map>
#include<string>

int main1(){
    std::map<std::string, int> map;
    map["nila"]=1;
    map["Messi"]=2;
    map["Ronaldo"]=3;
    map["vijay"]=4;
    map["pl1"]=5;
    map["pl2"]=6;
    /// size retuns the number of pairs in the map.
    std::cout<<map.size()<<std::endl;
    // max_size returns the theoritical max size that the container can hold.
    std::cout<<map.max_size()<<std::endl;
    return 0;
}

// empty funtion,
// paramtere: no parameter
// return: True if the map has no elements, False if the map is empty --> usefull in while-loop's

int main(){
    std::map<std::string, int> map;
    map["nila"]=1;
    map["Messi"]=2;
    map["Ronaldo"]=3;
    map["vijay"]=4;
    map["pl1"]=5;
    map["pl2"]=6;
    std::cout<<map.empty()<<" ";
    std::map<int, int> temp;
    std::cout<<temp.empty();
    return 1;
}