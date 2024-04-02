// in the code of 3_need.cpp, u might have noticed two things:
// 1.) the operator<< is declared as global, whereas the operator+= is declared as member function's. WHY??????????
// 2.) the operator+= takes only one parameter, but the operator<< takes two parameter. WHY?????????????

// we will see the second one first (2)
// studentCollection+=stu2; ---> 
// std::cout<<stu1<<stu2; --->


// ******** studentCollection+=stu2; ******
// INITIALLY: so there are two arguments that can be passed as parameters to the function, we think.
// so but since we can see the lvalue (l-value) is the object of the struct itself, why we pass it as an argument, instead
// we can directly access it by using the "this"(current object)->keyword easy. so only one parameter for the function, bute the function 
// does not have the "stu2"(rvalue).
// so we will pass only stu2 argument to the funtcion. and the studentCollection(functor) can be accessed by the "this"--> so only one parameter.

// ******** std::cout<<stu1<<stu2; ********
// here we can see there are two, std::cout and stu1. --> we can see clearly that we have to pass the std::cout, because lvalue can be anything.
// << can be used for shift operation also, so it is compulsory that we have to pass the cout, next we have to pass the object also.
// because the function is global, and is not an memeber function. so we can't use "this"-KEY, so we have to pass the object Hostel also.
// so we can see that we need to pass two arguments.

// we will see the first one now (1)

// in this case assume this "operator<< which is global", we will see what will happend if we  declare it as an member function like below,
/*
struct Hostel{
    std::string student_name;
    int cgpa;
    Hostel(std::string name, int num): student_name(name), cgpa(num){}
    std::ostream& operator<<(std::ostream& COUT, Hostel& obj){
        COUT<<"Name: "<<obj.student_name<<std::endl;
        COUT<<"CGPA: "<<obj.cgpa<<std::endl;
        return COUT;
    }
};
*/

// so then we can access this functions by using the object only.
// so suppose if we want to print the then u have to do like this

/*
struct StudentCollection{
    std::vector<Hostel> collections;
    void operator+=(const Hostel& obj){
        this->collections.push_back(obj);
    }
};

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
*/

// this looks muck compliacted because, it is not generic, and the one who read the code will not understand. will be not able
// to understand, so only it is better to declare it as global, so that it will be more generic. and we can use like this
// only cout<<sty1, --> this is common way of printing. for anything for numners, string etc. so we have to make our code more generic.


// -----------------------------------------------------------------------
// for the next struct
/*
struct StudentCollection{
    std::vector<Hostel> collections;
    void operator+=(const Hostel& obj){
        this->collections.push_back(obj);
    }
};
// studentCollection+=stu2; ---> in this piece of code the lvalue is studentCollection, in the code what we will intenally do
// is we add the objects to the vector which is defined, in the struct of studentCollection. we will add in the collections vector.

in this code it is declared as member function, because we can see that the (studentCollection+=stu2;) ---->
lvalue here is the object iteself. so we need to access the vector, to access the vector of the object, the function has to
be a member function, then only possible. so studentCollection+=stu2; , here studentCollection--> is an functor W.K.T. , and it will look
for any operator+= inside the struct with the parameter as the object of hostel, if found then that will get invoked. that's all.

// but if want the function to be globall that also possible but that will be again not generic,
it will be like the code below,


void operator+=(StudentCollection obj,  const Hostel& obj){
        obj.collections.append(obj);
}
 this function is globall, and is correct
NOTE: we cannot have two functions opeator+= as member function also an global function, any one should be true that's all.

--> the code is not generic at all.
*/

// so see the next, in-generic code. which is not the right-way to decalre.