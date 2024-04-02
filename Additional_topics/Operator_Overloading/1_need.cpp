// learned from here ---> https://www.youtube.com/watch?v=BnMnozsSPmw
// (C++ Operator Overloading beginner to advanced (in-depth explanation))


// lets see about this operator_overloading, first of all why do we need this operator overloading.
// if u would have seen , my 12_lamda_fn folder. under that functors, we would have used this operator overloading.

// We know what an fuctors is, it is an way of using object as an callable function.
// so the operator() overloading is usefull whwn, lets take an example.
// 5+6, 78>34, 78-45.  --> these are the operation between the numbers, the compiler know what to do when it sees this integer.
// now suppose u have defind user-data type like class, struct etc. and creating two objects obj1 and obj2. suppose u are going to perform 
// operations on this obj1 and the obj2. like -> obj1>obj2, obj1==obj2, obj1+obj2. the compiler does not know what to do in this caes
// so it will throw, an error. but what if u want to perform operations on object.---> for this reason only we define this operator function.
// so we oveload the operator() function, and when we encounter the above operators between the objects. the compiler can perform based,
// on the code that u have given for that operation, under the opeartor() function of that specific operator.
// SYNTAX EXAMPLE: for "<" --> operator<(){}, "==" --> operator==(){}.... etc and same for all operators.

// lets see an example.

#include<iostream>
#include<string>

struct Hostel{
    std::string student_name;
    int cgpa;
    Hostel(std::string name, int num): student_name(name), cgpa(num){}
};

// this is an way of declaring an overloading() function for "<<".
// ......................................................
/*
void operator<<(std::ostream& COUT, Hostel& obj){
        COUT<<"Name: "<<obj.student_name<<std::endl;
        COUT<<"CGPA: "<<obj.cgpa<<std::endl;
}
*/
// ......................................................
// this is the initial, and the next is the updated one

// this will work for std::cout<<stu1; , but for this case will it work std::cout<<stu1<<stu2; ??? no this will not work.
// (std::cout<<stu1)<<[stu2] --> in here the things enclosed in (), w.k.t this will happen. so for stu2 to happen, we need like this cout<<stu2.
// so we will make this (std::cout<<stu1) return an object of the ostream that is we will return cout, that's all --> so (std::cout)<<[stu2] will now work.
// so just make small changes the in the above code that's all, instead of returning void, return the object of the ostream --> (cout). that's all.
std::ostream& operator<<(std::ostream& COUT,const Hostel& obj){
        COUT<<"Name: "<<obj.student_name<<std::endl;
        COUT<<"CGPA: "<<obj.cgpa<<std::endl;
        return COUT;
}

// we will also pass by refrence so that the memory is not wasted, but if u have to make sure that function dont 
// make any disturbance on the the object we can define const explicitly.

// be default the members of the struct are public.

int main(){
    Hostel stu1("Nila", 22139);
    Hostel stu2=Hostel("Messi", 10);
    std::cout<<100<<std::endl; // --->(1)
    // see our compiler know how to print this number in line (1), it is
    // quite easy, but what if use the same for stu1, and stu2 u print.
    // INITIAL-CASE: 
    // we had not overloaded the  operator<<()
    //std::cout<<stu1; --> we will see that it is error. This line will throw an error.
    // w.k.t this << is an operator, so we overload this function,
    // in the stuct class. and after we willsee what will happen.
    // K now we will declare the operator<<() function, now what will be
    // the parameter passed, since the operation is between std::cout<<obj1.
    // so para1 passed will be std::cout and the other para passed will be
    // the object.
    
    // AFTER-OVERLOADING "<<" CASE: retur void.
    std::cout<<stu1;
    std::cout<<stu2;
    // now we can use << opeartors,  on the object.
    //  std::cout<<stu1<<stu2; ---> now, this will not work
    // then how to fix, this. this is very easy ---->
    // just in the same operator<<, just return the std::ostream  object that is return cout that's all.
    // AFTER-OVERLOADING "<<" CASE: return ostream object.
    std::cout<<stu1<<stu2;
}
// continuation next one.