#include <iostream>
#include <unordered_map>
#include<string>
using namespace std;

class Students{
    public:
    string name;
    string father_name;
    Students(string name1, string name2) : name(name1), father_name(name2) {}
    bool operator==(const Students &obj) const {
        return (this->father_name==obj.father_name) && (this->name==obj.name);
    }
};
struct hash_fn_for_students_correct{
    size_t operator()(const Students &obj) const{
        return hash<string>{}(obj.name)+hash<string>{}(obj.father_name);
    }
};
// unordered_map<Students, int, hash_fn_for_students_correct> um; 

// this is the hash-function we used, but we can even use our very own hash-function, insted of using hash<string>{}.
// only one constraint it should return an size_t type that's all.
// we wil declare an functor, for calculating our very own hash-function below.
struct hash_fn_calc_hash_own{
    size_t operator()(const Students& obj)const{
        int val1=obj.father_name.size();
        int val2=obj.name.size();
        return val1 ^ (val2 << 1);
    }
};


int main1(){
    unordered_map<Students, int, hash_fn_calc_hash_own> um; 
    Students p1("kartik", "kapoor");
    Students p2("Ram", "Singh");
    Students p3("Laxman", "Prasad");
 
    um[p1] = 100;
    um[p2] = 200;
    um[p3] = 100;
 
    for (auto e : um) {
        cout << "[" << e.first.name << ", "
             << e.first.father_name
             << "] = > " << e.second << '\n';
    }
    return 0;
}

// what if in the above hash-function, which is for calculatiog our hash-values. if you want to pass your additional arguments also.

struct hash_fn_calc_hash_own_pass_args{
    int arg1;
    int arg2;
    hash_fn_calc_hash_own_pass_args(int num1, int num2): arg1(num1), arg2(num2) {}
    size_t operator()(const Students &obj) const{
        return hash<string>{}(obj.name)+static_cast<size_t>(arg1)+static_cast<size_t>(arg2)+hash<int>{}(obj.father_name.size());
    }
};


int main(){
    unordered_map<Students, int, hash_fn_calc_hash_own_pass_args> um(10, hash_fn_calc_hash_own_pass_args(10, 100)); 
    // the third-argument is the type of the, the function/ struct/ class etc actually.
    // here the type is hash_fn_calc_hash_own_pass_args --> 
    // we can see that we cant directly call the fucntor, since there is no deafult constructor, so we have to create an object for invoking the constructor/
    // the vvaraibles of the class, so only we pass this hash_fn_calc_hash_own_pass_args(10, 100)).
    // but for creating an object, of this cclass `hash_fn_calc_hash_own_pass_args(10, 100)`
    // we need to pass argument to the constructor, since there is no deault constructor.
    // so for that only this, um(10, hash_fn_calc_hash_own_pass_args(10, 100)); 
    // first-argument: is the bucket-size. (the number of ucket's u want to create for the current unordered_map)
    // second-argument: is the object/ of the class. here we pass an temporary object. --> since no default constructor, so only else not needed this.


    Students p1("kartik", "kapoor");
    Students p2("Ram", "Singh");
    Students p3("Laxman", "Prasad");
 
    um[p1] = 100;
    um[p2] = 200;
    um[p3] = 100;
 
    for (auto e : um) {
        cout << "[" << e.first.name << ", "
             << e.first.father_name
             << "] = > " << e.second << '\n';
    }
}
