// let's see the methods/ way's to initialize an unordered-map, in c++.

/*
Different ways to initialize an unordered_map in C++:

Initialization using assignment and subscript operator
Initialization using an initializer list
Initialization using an array of pairs
Initialization from another map using unordered_map.insert() method
Initialization from another map using the copy constructor
Initialization through a range
*/

#include<unordered_map>
#include<string>
#include<vector>
using namespace std;
// Initialization using assignment and subscript operator
int main1(){
    unordered_map<int, int> umap;
    umap[1]=1;
    umap[2]=2;
    umap[0]=0;
    umap[3]=3;
}
// Initialization using an initializer list
int main2(){
    unordered_map<string, int> umap;
    umap={{"Nila", 1}, {"mani", 2}, {"priya", 3}};
    return 0;
}
// Initialization using an array of pairs
int main3(){
    pair<string, int> arr_pairs[3];
    arr_pairs[0]=make_pair("Nila", 1);
    arr_pairs[1]=make_pair("mani", 2);
    arr_pairs[2]=make_pair("priya", 3);
    int n=sizeof(arr_pairs)/sizeof(arr_pairs[0]);

    unordered_map<string, int> umap(arr_pairs, arr_pairs+n);
}
// Initialization using an vwctor of pairs
int main4(){
    vector<pair<string, int>> vect;
    vect.push_back(make_pair("Nila", 1));
    vect.push_back(make_pair("mani", 2));
    vect.push_back(make_pair("priya", 3));
    unordered_map<string, int> umap(vect.begin(), vect.end());
}
// Initialization from another map using unordered_map.insert() method, using range
int main5(){
    unordered_map<string,string>old_map;
    old_map["Ground"] = "Grass";
    old_map["Floor"] = "Cement";
    old_map["Table"] = "Wood";
    unordered_map<string, string>New_map;
    New_map.insert(old_map.begin(),
                   old_map.end());

    // using range,
    unordered_map<string, string>New_map_range(old_map.begin(), old_map.end());
}
// Initialization from another map using the copy constructor
int main6(){
    unordered_map<string,string>old_map;
    old_map["Ground"] = "Grass";
    old_map["Floor"] = "Cement";
    old_map["Table"] = "Wood";
    unordered_map<string, string>New_map(old_map);
}