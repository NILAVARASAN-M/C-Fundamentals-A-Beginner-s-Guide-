// The unordered_set internally implements a hash table to store elements. By default we can store only predefined type as int, 
// string, float etc. 
// If we want to store the element of user defined type as structure then compiler will show an error 
// because before storing elements into unordered_set compiler performs some checking. And while comparing
//  two user defined type compiler can not compare them hence it generate an error. 
// So, in order to store a structure in a unordered_set, some comparison function need to be designed.
// Since unordered_set also store implements hash table to store elements we should also have to implement
// hash function to perform hashing related work. 

#include<bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    int roll;
    Student(int val, string s): roll(val), name(s){}

    bool operator==(const Student &obj)const{
        return this->name==obj.name && this->roll==obj.roll;
    }
};

struct hash_fn{
    size_t operator()(const Student &obj)const{
        return hash<int>{}(obj.roll)+hash<string>{}(obj.name);
    }
};

int main(){
    Student obj1(1, "a");
    Student obj2(2, "b");
    Student obj3(3, "c");
    Student obj4(4, "d");
    Student obj5(5, "e");
    Student obj6(6, "f");
    Student obj7(7, "g");
    Student obj8(8, "h");

    unordered_set<Student, hash_fn> uset;
    uset.insert(obj1); 
    uset.insert(obj2); 
    uset.insert(obj3); 
    uset.insert(obj4); 
    uset.insert(obj5); 
    uset.insert(obj6); 
    uset.insert(obj7); 
    uset.insert(obj8);

    for(auto itr=uset.begin(); itr!=uset.end(); itr++){
        cout<<itr->name<<" "<<itr->roll<<endl;
    } 
    return 0;
}

// suppose if i come to page and did not understand why i have used this operator==, and hash_function etc.
// then go and see unordered_map folder and then come here.

