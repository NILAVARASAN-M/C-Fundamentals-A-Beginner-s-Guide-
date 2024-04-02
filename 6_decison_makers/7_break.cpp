// break statement

#include<iostream>

int main(){
    int num=90;
    while(true)
    {
        bool temp=true;
        for(int i=2;i<int(num/2);i++)
        {
            if(num%i==0){
                temp=false;
            }
        }
    if(temp){
        std::cout<<num;
            break;
    }
    num++;
    }
}