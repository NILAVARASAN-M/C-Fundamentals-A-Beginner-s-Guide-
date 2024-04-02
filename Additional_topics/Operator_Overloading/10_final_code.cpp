// this is the final code, so we have to remove the element by ID, but unlike other languges we can get the id() of an object
// only way is we have to declre the ID-manually. create a manulayy function like the below,
/*
class MyClass {
private:
    int id;
    static int nextId;

public:
    MyClass() {
        id = nextId++;
    }

    int getId() const {
        return id;
    }
};

int MyClass::nextId = 0;
*/

// but this is not advisbale error may occur, 
// so we do hashing, so that specific object hash-value will be same across different
// runs of the program. example we create an object, and we will find the hash-value and store it in an variable.
// When ever an object of an class is formed, that corespoding hash-value is also stored, and another function for
// getting that hash-value. Suppose if u want to delete an object then, u find the hash for that object. and now u find the
// id which matches with hash-value of the object. if same, then delete that's all.


#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <openssl/sha.h>

struct Hostel{
    std::string student_name;
    int cgpa;
    Hostel(std::string name, int num): student_name(name), cgpa(num){
        // Generate a unique ID using SHA-1 hash
        unsigned char hash[SHA_DIGEST_LENGTH];
        SHA1(reinterpret_cast<const unsigned char*>(this), sizeof(*this), hash);
        char hexString[SHA_DIGEST_LENGTH * 2 + 1];
        for (int i = 0; i < SHA_DIGEST_LENGTH; i++)
            sprintf(hexString + (i * 2), "%02x", hash[i]);
        id = hexString;
    }

    std::string getId() const {
        return id;
    }

    // declaring the operator== for comparing two objects of the Hostel.
    bool operator==(const Hostel& obj) const{
        return this->getId()==obj.getId();
    }
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