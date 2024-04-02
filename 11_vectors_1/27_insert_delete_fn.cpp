#include<iostream>
#include<vector>

void dispaly(std::vector<int> vect){
    for(int val: vect){
        std::cout<<val<<" ";
    }
    std::cout<<std::endl;
}

// for inserting in back, we use pushback() function.
int main_1(){
    std::vector<int> vect{1,2,3,4,5,6,7,8};
    for(int i=10; i<=20;i++){
        vect.push_back(i);
    }
    dispaly(vect);
    return 0;
}

// for removing last elements, we use popback() function.
int main_2(){
    std::vector<int> vect{1,2,3,4,5,6,7,8};
    dispaly(vect);
    for(int i=3; i<vect.size();i++){
        vect.pop_back();
    }
    dispaly(vect);
    return 0;
}

// for inserting in any location of the vector, we use insert() function.
int main_3(){
    std::vector<int> vect{1,2,3,4,5,6,7,8};
    dispaly(vect);
    for(int i=3; i<10;i++){
        vect.insert(vect.begin(), i);
    }
    dispaly(vect);
    return 0;
}

// for inserting in specfied location
int main_4(){
    std::vector<int> vect{1,2,3,4,5,6,7,8};
    dispaly(vect);
    int index=3;
    for(int i=3; i<10;i++){
        vect.insert(vect.begin()+index, i);
        index++;
    }
    dispaly(vect);
    vect.insert(vect.begin()+4, {10,1223,134});
    dispaly(vect);
    return 0;
}

// for removing/deleting an element in an specific location.
int main_5(){
    std::vector<int> vect{1,2,3,4,5,6,7,8,1,1,11,1,1,1,11000,111,10,33213};
    dispaly(vect);
    int index=3;
    vect.erase(vect.begin()+3);
    vect.erase(vect.begin()+5);
    vect.erase(vect.begin()+6);
    vect.erase(vect.begin()+7);
    dispaly(vect);
    return 0;
}

// reading the front elemenets only.
int main_6(){
    std::vector<int> vect;
    dispaly(vect);
    for(int i=0;i<=5;i++){
        vect.push_back(i);
    }
    dispaly(vect);
    for(int i=6;i<=10;i++){
        vect.insert(vect.end(), i);
    }
    dispaly(vect);
    while(!vect.empty()){
        std::cout<<vect.front()<<" ";  // we use front function.
        vect.erase(vect.begin()); 
    }
    std::cout<<vect.size();
    return 0;
}

// reading the back elemenets only.
int main(){
    std::vector<int> vect{1,2,3,4,5,6,7,8};
    dispaly(vect);
    while(!vect.empty()){
        std::cout<<vect.back()<<" ";  // we use front function.
        vect.pop_back();
    }
    std::cout<<vect.size();
    return 0;
}