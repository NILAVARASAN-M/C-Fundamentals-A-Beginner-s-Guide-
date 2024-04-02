// this code, will work but is not all generic. wrong way of coding.

#include<iostream>
#include<string>
#include<vector>

struct Hostel{
    std::string student_name;
    int cgpa;
    Hostel(std::string name, int num): student_name(name), cgpa(num){}
    std::ostream& operator<<(std::ostream& COUT){
        COUT<<"Name: "<<this->student_name<<std::endl;
        COUT<<"CGPA: "<<this->cgpa<<std::endl;
        return COUT;
}
};

struct StudentCollection{
    std::vector<Hostel> collections;
};

void operator+=(StudentCollection obj1,  const Hostel& obj2){
        obj1.collections.push_back(obj2);
}


int main(){
    Hostel stu1("Nila", 22139);
    Hostel stu2=Hostel("Messi", 10);
    std::cout<<100<<std::endl;
    stu1<<std::cout;
    stu2<<std::cout;
    StudentCollection studentCollection;
    studentCollection+=stu1;
    studentCollection+=stu2;
    for(auto vals: studentCollection.collections){
        vals<<std::cout;
    }
}

// next we will improvise the code further more.