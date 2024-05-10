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

struct hash_fn_calc_hash_own_pass_args{
    int arg1;
    int arg2;
    hash_fn_calc_hash_own_pass_args(int num1, int num2): arg1(num1), arg2(num2) {}
    size_t operator()(const Students &obj) const{
        return hash<string>{}(obj.name)+static_cast<size_t>(arg1)+static_cast<size_t>(arg2)+hash<int>{}(obj.father_name.size());
    }
};

// below we passed an functor, we will see how to pass an normal function instead of an  functor.
// as i told the third-argument, is the type of struct/class/function. here also, we have to pass the type of function.
// we cant manullly find the type of an function it varies for the function.
// finding it will be very-very complex, so we can use decltype() --> which will find the type of the function in
// run-time. decltype() is used for finding the type of the function.

size_t demo_function(const Students &obj){
    return hash<string>{}(obj.father_name)+hash<string>{}(obj.name);
}

int main(){
    // for hash_fn_calc_hash_own_pass_args type.  --> this is for functors.
    // unordered_map<Students, int, hash_fn_calc_hash_own_pass_args> um(10, hash_fn_calc_hash_own_pass_args(10, 100)); 

    // we will pass the demo_function, instead of functor's.
    unordered_map<Students, int, decltype(&demo_function)> um(10, &demo_function);
    // here the dought-arises, what is this &--> used.
    // initially: what i thought was, this & is an refrence, but no we are can't pass an variable as an refrence. (COMMON-SENSE)
    // (&demo_function) --> when this is an parameter then it is considered as an refrence, but when we pass it as an argument it is considered
    // as an, address of demo_function.
    // decltype(&demo_function)  ---> here we pass the address of the demo_function, so decltype will return the type of the pointer.
    // um(10, &demo_function) --> here also we pass the address.
    // for functors we pass objects, for normal functions we pass address of the function, there it will recive as an pointer to function.

    // decltype(&demo_function)  --> for norm-fns and hash_fn_calc_hash_own_pass_args --> for functors,
    // the type of the functor will be deduced in the run-time, it will be auto-matically taken care by the compiler, only.

    
    // instead of all this directly, use functor best and easy.
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
