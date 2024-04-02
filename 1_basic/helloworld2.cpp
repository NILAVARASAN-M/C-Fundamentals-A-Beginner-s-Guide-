#include<iostream>
// this will include all the contents in iostream to the current scope this will include functions, variable, class's etc.
// all will be imported here, iostream is commonly used for printing and reading


int main(){
    std::cout << "hello nila";
    // here the std is namespace ( called standard), it has the function named cout inside that scope so we are telling that cout() 
    // is from the "std" namespace and this namespace is in the iosteam,
    // so now if we you want to create a function named cout but this is different but only the name is same
    //, we can create a namespace using namespace and inside that scope we can include the cout, and call accordingly.
    std::cout << "hello nila" << std::endl;
    // :: is called as scope resolution operation is used to specify what type of scope the variable, function, objects etc are.
    // unlike other language cout is not a function but a object of the ostream class and is specified in the namespace std.
    // << is used for insertion of the right side one to the left side one.
    // procceds from left to right direction.
    return 0;
}

// include, will only include header file always, not any other-thing, to say it will include the header file of the source file.
// refer header_source_file.cpp