// lets see erase function in c++.
// there are three ways we can pass the parameters/ 3-ways of deleting:

#include<map>
#include<iostream>
#include<string>

// WAY-1: of deleting.
// in this way of deleteing, we pass the key that is needed to be deleted. (only one parameter)
// PARAMETERS: we will only pass one parameter, that is the key.
// SYNTAX: mapname.erase(key);
// RETURN: returns an integer value, if 1--> tit means the key was found and deleted, else 0--> means there is is no key like that in the map.

int main1(){
    std::map<int, std::string> obj;
    obj[1]="Ni";
    obj[2]="la";
    obj[3]="va";
    obj[4]="ra";
    obj[5]="san";
    obj[6]="Nila";
    obj[7]="Nilava";
    // if val is refrence.

    // ERROR-1:
    // for(std::pair<int, std::string> &val: obj){}
    // the above is wrong, because since val is refrence to the pair, so we can access the element through the val, and any effect in val
    // will get affected in the key-value pair in map also. but the key should not get affected(RULE).
    // so we have to make sure the key is const, (so that it wonnt get affected).
    //CORRECT-1
    for(std::pair<const int, std::string> &val: obj){} // only the key is const
    // CORRECT-2
    for(const std::pair<int, std::string> &val: obj){} // the pait itself const.

    // if val is not refrence.
    // if val is not refrence, then val has the copy of the pair,  that respective pair of map is somehwere in the memory.
    // similarly val has the copy of the pair, and is again in somehere in the memory.
    // so change in val will not get refrelected.
    // so noo need of pair to have any const.
    for(std::pair<int, std::string> val: obj){}

    for(std::pair<const int, std::string> &val: obj){
        std::cout<<val.first<<" "<<val.second<<std::endl;
    }
    std::cout<<std::endl;
    // WAY-1 of erasing.
    auto val1=obj.erase(2);
    auto val2=obj.erase(100);
    auto val3=obj.erase(5);
    std::cout<<val1<<" "<<val2<<" "<<val3<<"\n";
    for(std::pair<const int, std::string> &val: obj){
        std::cout<<val.first<<" "<<val.second<<std::endl;
    }
    return 0;
}


// WAY-2: of deleting.
// in this way of deleteing, we pass the iterator that is needed to be deleted. (only one parameter)
// PARAMETERS: we will only pass one parameter, that is the iterator/ position, (key-value pair that u want to delete that iterator alone).
// SYNTAX: mapname.erase(iterator pair<>);
// RETURN: returns  nothing.

// WAY-3 of deleting.
// we give an range of iterators, and the range of that iterators will be deleted.
// PARAMETERS: two parameters are to be passed, 1st PARA: the start position iterator (eg:map.begin())
// 2nd PARA: tell where u want to delete that position/ iterator (eg:map.end())
// SYNTAX: mapname.erase(iterator start1, iterator start2); from start1 to start2 are deleted, start2 is exclusive
// RETURN: returns  nothing.

int main(){
    std::map<int, std::string> obj;
    obj[1]="Ni";
    obj[2]="la";
    obj[3]="va";
    obj[4]="ra";
    obj[5]="san";
    obj[6]="Nila";
    obj[7]="Nilava";
    for(std::pair<const int, std::string> &val: obj){
        std::cout<<val.first<<" "<<val.second<<std::endl;
    }
    std::cout<<std::endl;
    // WAY-1 of erasing.
    auto val1=obj.erase(obj.begin());
   // auto val2=obj.erase(obj.begin()+5); --> worng see why in  the explantion in 1_basic.cpp
   // using next function()
    auto val2=std::next(obj.begin(), 5); // now we got the iterator at the location 5;
    obj.erase(val2); 
    // using advange function
    auto itr=obj.begin();
    std::advance(itr, 3);
    obj.erase(itr);
    for(std::pair<const int, std::string> &val: obj){
        std::cout<<val.first<<" "<<val.second<<std::endl;
    }
}