// we will use the lambda function  for_each()<----- function and understand how to use lambda function.

#include<iostream>
#include<vector>
#include<algorithm>

// generaly when u pass an predicate, or any function to an function() of algorithm class, we will crate an function outside the main function.
// and then we pass the name of function as predicate <--general way. 
// so we will see how generally we do this using an function outside the class, but we have seen numerous examples with this, so lets do with an
// struct function.

struct simple_print{
        void operator()(int x) const{
            std::cout<<x<<"\n";
        }
};

// this above struct and the below code, will be very confusing so see 3_functor.cpp file and come here.

int main_1(){
    simple_print obj;
    std::vector<int> vect={1,2,3,4,5,4,10,23,3,2,4,50};
    std::for_each(vect.begin(), vect.end(), obj);
    return 0;
}

// We will make the code shorted, and readable using the lambda function.
int main_2(){
    std::vector<int> vect={1,2,3,4,5,4,10,23,3,2,4,50};
    std::for_each(vect.begin(), vect.end(), [](int x){
        std::cout<<x<<"\n";
    });
    return 0;
}

// for even-odd numbers.
int main_3(){
    std::vector<int> vect={1,2,3,4,5,4,10,23,3,2,4,50};
    std::for_each(vect.begin(), vect.end(), [](int x){
        if(x%2){
            std::cout<<"ODD NO: "<<x<<"\n";
            return;
        }
        std::cout<<"EVEN NO: "<<x<<"\n";
    });
    return 0;
}

// the lambda function can use all the variables in the scope of the function(not lamda function but that scope in which lambda
// function is defined), just we have to tell which variable it want to use, by passing it inside this [] that's all.

int main_4(){
    int d=5, m=5;
    std::vector<int> vect={1,2,3,4,5,4,10,23,3,2,4,50};
    std::for_each(vect.begin(), vect.end(), [d](int x){
        if(x%d==0){
            std::cout<<x<<" is divisble by "<<d<<"\n";
            return;
        }
        std::cout<<x<<" is not divisble by "<<d<<"\n";
        // std::cout<<m; --. we cant use the m, 
        // so all the variables in this scope can be used, just we need to pass them to the [] of the lambda function.
        // thatis why we are able to use d, and not able to use m
        // d=10; //-->(1)
    });
    return 0;
}

// eqn (1), we will see that we cant modufy/ change the value of d. but u want to change the value of d, then u have to pass by refrence.
int main_5(){
    int d=5, m=5;
    std::vector<int> vect={1,2,3,4,5,4,10,23,3,2,4,50};
    std::for_each(vect.begin(), vect.end(), [&d, &m](int x){
        if(x%d==0){
            std::cout<<x<<" is divisble by "<<d<<"\n";
            return;
        }
        std::cout<<x<<" is not divisble by "<<d<<"\n";
        std::cout<<m;
        d=10; //-->(1)
    });
    return 0;
}
// we can use now m, since it is passed in that [] of the lambda function, and u can modify both the values, m and d.
// since we are passing it by refrence.

// but whatif there are mutiple variables in the function, then u have to type each and every variables in that function.
// so if u want to pass all the variables in the scope by refrence then just like this
// [&] --> to use all variables in the scope as reference.
// [=] --> to use all variables in the scope as reference.


int main(){
    int num0=0, num1=1, num2=2, num3=3, num4=4, num5=num5;
    std::vector<int> vect={1,2,3,4,5,4,10,23,3,2,4,50};
    // to use all variables by refrenec
    std::for_each(vect.begin(), vect.end(), [&](int x){
        std::cout<<x<<++num0<<++num1<<++num2<<++num3<<++num4<<++num5;
    });
     // to use all variables by values
    std::for_each(vect.begin(), vect.end(), [=](int x){
        // std::cout<<x<<++num0<<++num1<<++num2<<++num3<<++num4<<++num5; --> produce error.
        std::cout<<x<<num0<<num1<<num2<<num3<<num4<<num5;
    });
    return 0;
}