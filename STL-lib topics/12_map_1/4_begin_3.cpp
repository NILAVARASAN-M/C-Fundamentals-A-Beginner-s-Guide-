#include<iostream>
#include<map>
#include<string>


struct Player{
    std::string name;
    int age;
    Player(std::string val, int num): name(val), age(num){}
    bool operator<(const Player &obj) const {
        return this->age<obj.age;
    }
};

// bool operator>(const Player &obj1, const Player &obj2){
//     return obj1.age>obj2.age;
// }
// ---> this is waste, as we know that this case will not arise,
// operator< --> this will arise b/c the default map, so sorting in ascending order.
// so it will take two elemnets, compare the both using operator<, if true, then positions are swapped, else false then not swapped.
// so this case will occur, but operator> will not occur, so 

struct comp1
{
    bool operator()(const Player &a, const Player &b){
        return a.age>b.age;
    }
};


int main(){
    std::map<Player, int> map;
    map[Player("nila", 10)]=1;
    map[Player("Messi", 2)]=2;
    map[Player("Ronaldo", 3)]=3;
    map[Player("vijay", 100)]=4;
    map[Player("pl1", -1)]=5;
    map[Player("pl2", 4)]=6;
    // DEFAULT:
    for(auto &val: map){
        std::cout<<val.first.name<<" "<<val.first.age<<std::endl;
    }
    // DESCINDING.
    std::map<Player, int, comp1> map1;
    map1[Player("nila", 10)]=1;
    map1[Player("Messi", 2)]=2;
    map1[Player("Ronaldo", 3)]=3;
    map1[Player("vijay", 100)]=4;
    map1[Player("pl1", -1)]=5;
    map1[Player("pl2", 4)]=6;
    // DEFAULT:
    for(auto &val: map1){
        std::cout<<val.first.name<<" "<<val.first.age<<std::endl;
    }
}