// before the declarion of function inside the struct as an meber function, 
// we will see the code below, and then we will anaylize when to use the global, 
// and when to declare it as an member function --> operator().

// so we will expnad the code in the 2_need.cpp here, and then in the next 4_global_V_mever_fn.cpp we will see.
#include<iostream>
#include<string>
#include<vector>

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

struct StudentCollection{
    std::vector<Hostel> collections;
    void operator+=(const Hostel& obj){
        this->collections.push_back(obj);
    }
    // here the "this" keyword is the same one which is in java, that is the current object.
    // so if you notice the operatior function parameters there is only one parameters why????
    // "(studentCollection)+=[stu1];" --> (studentCollection) this one is 
    // aldready available to us, that is the current object (if we use the this keyword that is the pointer of the current object)
    // by using this->collections we can get the current object, and from that object we are accesing the collections->vector.
    //, so only one arguement is passed that is the object of the Hostel, b/c we have the collections vector.
    // class
};

int main(){
    Hostel stu1("Nila", 22139);
    Hostel stu2=Hostel("Messi", 10);
    StudentCollection studentCollection;
    // BEFORE INITILIAZING THE operator function.
    // studentCollection+=stu1; 
    // basically we want to append the stu1 or push_back it to the vector, by using += operation but how???
    // so we will define??? --> we will create an overload+= in the StudentCollection that's all.
    // AFETR INITIALZING THE operator() function.
    studentCollection+=stu1;
    studentCollection+=stu2;
    for(auto vals: studentCollection.collections){
        std::cout<<vals;
    }
    return 0;
}