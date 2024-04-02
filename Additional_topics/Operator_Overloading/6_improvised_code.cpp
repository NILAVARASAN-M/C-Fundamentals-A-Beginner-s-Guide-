// we will add cin>>stu1, and also cout<<studentCollection., to the code

#include<iostream>
#include<string>
#include<vector>

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
    return 0;
}
// but next we will see how to do -= operation, u think that this is simple, but not is realy hard.