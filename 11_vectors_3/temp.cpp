#include<iostream>
#include<vector>

struct tump{
    int num1;
    char name;
};


int main(){
    tump obj1;
    std::vector<tump> v={tump(), tump(), tump()};
    v.insert(v.end(), tump());
}