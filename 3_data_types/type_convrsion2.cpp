//converting explicitly, this is done by the user.

// way-1 using (data_type)

#include<iostream>

// way-1 using (data_type)
void fun1(){
    float num=3.14;
    int in_num=(int)num;
    std::cout<<in_num<<std::endl;
}
// way-2 using static_cast operator.
void fun2(){
    float num=3.14;
    int in_num=static_cast<int>(num);
    std::cout<<in_num<<std::endl;
}
int main(){
    fun1();
    fun2();
    return 0;
}

// it is recommended to use static_cast<> to be used, because this will check for any error in compiler time, and easy code readability.
// so static_cast is better compared to c_type casting.