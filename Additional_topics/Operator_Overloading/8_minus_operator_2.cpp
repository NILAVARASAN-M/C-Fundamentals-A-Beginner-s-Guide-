#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
struct Hostel{
    std::string student_name;
    int cgpa;
    Hostel(std::string name, int num): student_name(name), cgpa(num){}
    Hostel() : student_name(""), cgpa(0){}

    // declaring the operator== for comparing two objects of the Hostel.
    bool operator==(const Hostel& obj) const{
        return this->student_name==obj.student_name;
    }
    // so in the find() fn of under algo-header file, the code is defined generic so ireepecyive of the value in the iterator int, float, string,
    //binary, octal etc. it should work. --> the operator==(int a, int b){}, operator==(float a, float b){}, operator==(double a, double b){},
    // and same like this will be declared for all the other data-types.
    // example lets take comparing string, operator==(std::string name1, std::string name2){} --> this will be called when 
    // there is an encounter like this name1==name2, but name1 being an object of string, we can use it as an functor, and just pass the paramter.
    // name2. operator==(std::string& name2){}, this is how operator== works for string, and the same goes for te functions that we declare.
    // why const, we have to say that the compiler function will not do anything to the member function of the struct,
    // and also const for obj saying that we will not do any changes to the obj also.
    // so we are comapring based on the values, onlut if want to compare based on id, then do accordingly.
};

// but this will not work for all case ryt, suppose if two student have same CGPA "8.5" is there, then the first "8.5"
// will be removed so we have to remove based on the ID. --> see 10 final_code.cpp


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