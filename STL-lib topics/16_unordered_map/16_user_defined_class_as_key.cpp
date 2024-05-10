// let's see how to pass an user-defined class, as an key.
// w.k.t we can pass an int, float, char, double, other primitive types as an key. --> the hash-function is defined for them.
// but the hash-function of an userdefined is not defiend , we have to explicitly tell how to calculate the hash-function.

// so to pass an user-defined class/ struct as an key.
// 1.) we have to tell explicitly, how to calculate the hash-value for the key.
// 2.) w.k.t, there can be an unique, keys only in an unorderd_map. how will the compiler, know whether two objects (keys) are same or not.
// for int, char, float it know's how to check between them using == operator. but for an user-defined-class it don't know how to check the equality.
// 3.) therefore for equality, searching, insertion of object's we must define operator== overload--> function must be declared.

// for an user-defined class as an key to un_ordered_map
// 1.) declare explicitly, an hash-function.
// 2.) declare operator==() function.

#include <iostream>
#include <unordered_map>
#include<string>
using namespace std;

class Students{
    public:
    string name;
    string father_name;
    Students(string name1, string name2) : name(name1), father_name(name2) {}
    // the const outside the parenthesis, tells us that we will not disturb the state of the object's in that class.
    // we will not modify the class's memebers, since this operator function is an member-function, so declaring it outside, tell's us that we will not be able to
    // modify the name, father_name variable's.
    bool operator==(const Students &obj) const {
        return (this->father_name==obj.father_name) && (this->name==obj.name);
    }
};

// PASSING THE HASH-FUNCTION AS AN FUNCTOR.

struct hash_fn_for_students1{
    string operator()(const Students &obj) const{
        return obj.name+obj.father_name;
    }
};

// hash_fn_for_students1  ---> this will not work, because u have to basically return an hash-value. For an integer,
// float, character,  string etc. the hash-function is declared, but for the user-defined class we have to explicitly declare.
// the hash-function will basically return an positive-value, and the value can be very-large also.
// so in above we are returning an string, but we have to return an hash-value instead (of type size_t).
// if we recall, sem-3 DSA so we find the hash-value for an key, given by this hash-function complexity depends on the implementation.
// so we need an integer value, so above that hash-function return's an string, which cannot be an hash-value, so we have to return int, but size_t is what returned.

// why size_t, because size_t is of type unsigned integer. So it will allow only positive numbers, and since it is preserving the
// negative bits, so the range is also more. so the return type should be size_t only, by the operator() function of the functor..

struct hash_fn_for_students_correct{
    size_t operator()(const Students &obj) const{
        return hash<string>{}(obj.name)+hash<string>{}(obj.father_name);
    }
};

// this is the correct-function, now how to compute the hash-value for an string??????
// we use `hash<string>{}(obj.name)` --> this will compute the hash-value for the string.
// here the 'hash' --> is the function, <string> tell's us that we are passing string, since there are many like this.
// hash<int>, hash<double> , hash<char> etc. so to be more specific, on how the hash-function should work for that particular type, we use `<string>`.
// hash<string>{} --> this {} creates-temporray object.
// so to this function the argument we are passing is (obj.name)  --> we are going to find the hash-value for obj.name
// `hash<string>{}(obj.name)`   ----> this is an functor, of hash for the type string, the argument is passed as obj.name.
// and the function will return the hash-value as size_t type. the computed hash-value is for obj.name


// the third-argument we pass the hash-function, we must pass the hash-function for an user-defined class (MUST). here we pass the functor.
int main(){
    unordered_map<Students, int, hash_fn_for_students_correct> um; 
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