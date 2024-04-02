// goto keyword.
/*
Yes, once a goto statement jumps to a particular label, the execution of the code will continue
 from that label onwards. Subsequent labels will not be automatically executed unless there is another
  goto statement or control flow that leads to them.
*/

// the goto and labels, all this are very similiar to the ones we studied in EOC-2, VM languae etc. 

#include<iostream>

int main(){
    int num;
    std::cout<<"enter ur choice: ";
    std::cin>>num;
    switch(num){
        case 0:
        goto label0;
        case 1:
        goto label1;
        case 2:
        goto label2;
        case 3:
        goto label3;
        case 4:
        goto label4;
        case 5:
        goto label5;
        case 6:
        goto label6;
        case 7:
        goto label7;
        case 8:
        goto label8;
        case 9:
        goto label9;
        default:
        goto temp;
    }
    label0:
    std::cout<<"This is label 0"<<std::endl;
    goto end;
    label1:
    std::cout<<"This is label 1"<<std::endl;
    goto end;
    label2:
    std::cout<<"This is label 2"<<std::endl;
    goto end;
    label3:
    std::cout<<"This is label 3"<<std::endl;
    goto end;
    label4:
    std::cout<<"This is label 4"<<std::endl;
    goto end;
    label5:
    std::cout<<"This is label 5"<<std::endl;
    goto end;
    label6:
    std::cout<<"This is label 6"<<std::endl;
    goto end;
    label7:
    std::cout<<"This is label 7"<<std::endl;
    goto end;
    label8:
    std::cout<<"This is label 8"<<std::endl;
    goto end;
    label9:
    std::cout<<"This is label 9"<<std::endl;
    goto end;
    temp:
    std::cout<<"This is label >>>>>10"<<std::endl;
    end:
    std::cout<<"finished"<<std::endl;
    return 0;
}