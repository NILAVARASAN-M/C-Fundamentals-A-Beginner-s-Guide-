// so lets continue the above one.

// first we will see the above code, after removing all the comments.

#include<iostream>
#include<string>

struct Hostel{
    std::string student_name;
    int cgpa;
    Hostel(std::string name, int num): student_name(name), cgpa(num){}
};

std::ostream& operator<<(std::ostream& COUT, Hostel& obj){
        COUT<<"Name: "<<obj.student_name<<std::endl;
        COUT<<"CGPA: "<<obj.cgpa<<std::endl;
        return COUT;
}

int main(){
    Hostel stu1("Nila", 22139);
    Hostel stu2=Hostel("Messi", 10);
    std::cout<<100<<std::endl;
    // ------------------------------------> (case-1)
    std::cout<<stu1;
    std::cout<<stu2;
    std::cout<<stu1<<stu2;
    // ------------------------------------> (case-1)

    // ------------------------------------> (case-2)
    // another way of using the above is function is, since the function is global so we can use like below.
    operator<<(std::cout, stu1);
    operator<<(std::cout, stu1);
    operator<<(operator<<(std::cout, stu1), stu2);
    // ------------------------------------> (case-2)
    // we can use it like this because operator is global, and not defined under struct, 
    // we will use the 1 most commonlyly,
}

// -----------------
// since it is global we need to make it, or define it under struct, that is the crrect way of doing t.
// suppose what if there are many struct like this, so globally should declared only when only one struct.
// so we have to define it under the struct
// ----------------------

// initially I thought the above statent, but is actually wrong that statement is what i initially wrote, but later i modified as the below one see
// the definiation,
// see we can declare many operator function outside(globally), because there can be infinite number of operator functions. (overloading in temrs of OOP'S)
// only one thing is that
// the parameters should, not be same <-- if this is true for all the operator() functions that we have
// decalred globally <--- then there can be infinite number of operator functions, just by changeing the parameters.s 

// but there are ceratin places where we have to declare the operator() function globally and as an member function.
// next one see 3_need.cpp