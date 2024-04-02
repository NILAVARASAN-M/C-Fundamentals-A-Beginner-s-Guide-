// next we we see how to do StudentCollection-=obj, it means removing tha object from the vector.

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

struct Hostel{
    std::string student_name;
    int cgpa;
    Hostel(std::string name, int num): student_name(name), cgpa(num){}
    Hostel() : student_name(""), cgpa(0){}
};

std::ostream& operator<<(std::ostream& COUT, Hostel& obj){
        COUT<<"Name: "<<obj.student_name<<std::endl;
        COUT<<"CGPA: "<<obj.cgpa<<std::endl;
        return COUT;
}

std::istream& operator>>(std::istream& CIN, Hostel& obj){
    CIN>>obj.cgpa;
    CIN>>obj.student_name;
    return CIN;
}



struct StudentCollection{
    std::vector<Hostel> collections;
    void operator+=(const Hostel& obj){
        this->collections.push_back(obj);
    }
    void operator-=(Hostel& obj){
        auto itr=std::find(this->collections.begin(), this->collections.end(), obj);
        this->collections.erase(itr);
        return;
    }
};

// CAUSE OF THE ERROR:

// this code will return error, this code it seems to be correct. but it will return error.
// first we will understand how the find function of algo header works. so the find() function internally, checks
// the value of each element of the vector by the range specified, it compared the value with the value u passed.
// if same then returns true, else false. example suppose vect={1,2,3,4,5,6,7};
// std::find(vect.begin(), vect.end(), 4); --> so it will search each value withe value u passed (4), 1==4 (false), 2==4(false), 3==4(false)
// 4==4(true), it is true so it returns that iterator. here it is integer, so the compiler has an overload== function for two integers,
// the compiler has oprator== overload for double, string, vect.... so for this cases it will work etc.
// but for our case the class, 
// but here the class is defined by us(Hostel), so the same == operation is applied to the objects of the class(Hostel).
// but example obj1==obj2, obj1 and obj2 are the objects of Hostel. so the compiler does not know how, to compare, so only the error causes

// ERROR STATEMENT: 

// no match for 'operator==' (operand types are 'Hostel' and 'const Hostel').
// so u just "ctrl+click" on the find function, and u will be able to see the implementation. and the comparsion operator.

// HOW to rectify it
// SOLUTION FOR ERROR: 

// so Hostel stu1; Hostel stu2; when the find() function called --> internally it does is stu1==stu2; for each object
// but the compiler does not know to comapare, so we have to declare an operator overloading
// for ==, in the class Hostel itself, because the rvalue is an object of Hostel, which can be accessed using the this keyword, so we need
// to pass an argument of the other object alone, now compare if equal return True, else False.
// see the next 8_minus_operator_2.cpp

std::ostream& operator<<(std::ostream& COUT, const StudentCollection& obj){
        for(Hostel objects: obj.collections){
            std::cout<<objects;
        }
        return COUT;
}


int main(){
    Hostel stu1;
    Hostel stu2;
    std::cin>>stu1>>stu2;
    StudentCollection studentCollection;
    studentCollection+=stu1;
    studentCollection+=stu2;
    std::cout<<studentCollection;
    studentCollection-=stu2;
    std::cout<<studentCollection;
    return 0;
}