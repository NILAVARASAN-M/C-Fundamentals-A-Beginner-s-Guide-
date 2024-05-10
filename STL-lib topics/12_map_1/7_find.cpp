// how to check if an key is present or not ?? --> for this we can use the find function
// to see if the key is  present.

#include<iostream>
#include<string>
#include<map>

int main(){
    std::map<std::string, int> obj;
    obj["Nil1"]=123;
    obj["wow"]=132;
    auto itr1=obj.find("wow");
    auto itr2=obj.find("hi");
    // the find function takes one parameter, that is the key u want to check, if found then it retuns that iterator, of that key.
    // else if not found then it returns map.end()
    if (itr1 != obj.end()) {
        std::cout << "Key 1 is present. Value: " << itr1->second << std::endl;
    } else {
        std::cout << "Key 1 is not present." << std::endl;
    }
    if (itr2 != obj.end()) {
        std::cout << "Key 1 is present. Value: " << itr1->second << std::endl;
    } else {
        std::cout << "Key 1 is not present." << std::endl;
    }

    auto val=obj["Temp"];
    // but we can see that Temp is no present, in this case an key with name "Temp" is created with value as default (0),
    // if value is of type string then ""(empty string)
    std::cout<<val;
    std::cout<<obj["Temp"];
}

// Suppose if we want to find if an key exist in the map or not, we can use eithier find(), or count()
// if key present then find() returns the iterator, key retuns 1.
// if key not present the find() return obj.end(), key returns 0.

