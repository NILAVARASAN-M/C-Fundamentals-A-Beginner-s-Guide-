#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

/*
in the operator function, we dont want the values of the parameters should not chnage, the function should guarentee that, so we can declre it as
an const.
1.) declaring const for global function.
2.) declaring const for memeber function. 
*/

struct Hostel{
    std::string student_name;
    int cgpa;
    Hostel(std::string name, int num): student_name(name), cgpa(num){}
    Hostel() : student_name(""), cgpa(0){}

    bool operator==(const Hostel& obj) const{ // -->(1)
        return this->student_name==obj.student_name;
    }
    // in here we want the (student_name) and (obj) to be constant throught the function,
    // (1), we are passing const means, whaever the members u use from the class u should not affect it.
    // obj beining not an member of the class, so we have declare it as const explicitly.
};


std::ostream& operator<<( std::ostream& COUT, const Hostel& obj){
        COUT<<"Name: "<<obj.student_name<<std::endl;
        COUT<<"CGPA: "<<obj.cgpa<<std::endl;
        return COUT;
}
// we cant tell COUT to be an const, b/c
// see we will basically write that value in the COUT file, can be screen any file etc. --> so the cout changes
// so we cant declare it as const.

std::istream& operator>>(std::istream& CIN, Hostel& obj){
    CIN>>obj.cgpa;
    CIN>>obj.student_name;
    return CIN;
}

// we cant declare both as const because CIN and obj, cin here we will write the value in the screen and get stored in cin.
// and that value stored is then passed to obj. so both cin, obj changes. so we should not use const.



struct StudentCollection{
    std::vector<Hostel> collections;
    void operator+=(const Hostel& obj){
        this->collections.push_back(obj);
    }
    void operator-=(Hostel& obj) {
        auto itr=std::find(this->collections.begin(), this->collections.end(), obj);
        this->collections.erase(itr);
        return;
    }
    // no const to the meber function, since we will change the collections vector b/c we will use erase fn.
};

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
/*
std::ostream& operator<<(std::ostream& COUT, const StudentCollection& obj){
        for(Hostel objects: obj.collections){
            std::cout<<objects;
        }
        return COUT;
}

--> here this function is globally declared, it is not an part of class.
std::ostream& operator<<(std::ostream& COUT, const StudentCollection& obj)   **** const **** {
        for(Hostel objects: obj.collections){
            std::cout<<objects;
        }
        return COUT;
}
**** const ****, this is just for highlighting that part, remove that.
this code is wrong, because that const means, it is declared only for member function (function inside the class) -->
it is meant that we cant modify the class members that will be used in that member function.
so **** const ****, is for member function and not an global function.
*/