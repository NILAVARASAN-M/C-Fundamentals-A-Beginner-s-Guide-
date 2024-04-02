// Jump statements are used to manipulate the flow of the program if some conditions are met. It is 
// used to terminate or continue the loop inside a program or to stop the execution of a function.

// four types of jump statement:

/*

1.) break
2.)continue
3.)goto
4.) return
*/

// 1.) continue keyword.

/*

The continue statement in C++ is used within loops to skip the execution of the rest of the loop's body for the current iteration 
and move to the next iteration. When encountered, continue immediately jumps to the next iteration of the loop, skipping any 
remaining statements within the loop body.
*/

// suppose if u encounter the continue statement in any, line then the for loop will not stop unlike break stement, it will skip
// all the lines below the that continue statemnt in the iteration, and jumps to the next iteration.

#include<iostream>
#include<string>

int main(){
    std::string name="Nilavarasan";
    for(char ch: name){
        if(ch=='a'){
            continue;
        }
        std::cout<<ch;
    }
    return 0;
}

// in the above code, whenever encountered by a, only that iteration, all the lines below it will be skipped and start executing from next line.