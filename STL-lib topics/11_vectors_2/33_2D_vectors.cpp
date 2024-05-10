// lets see the small basic of declaring/inserting/ traversing a 2-D Vector.

#include<iostream>
#include<vector>
#include<algorithm>

void display_2D(std::vector<std::vector<int>> vect){
    for(std::vector<std::vector<int>>::iterator item=vect.begin(); item!=vect.end();item++){
        for(std::vector<int>::iterator itr=(*item).begin();itr!=(*item).end();itr++ ){
            std::cout<<*itr<<" ";
        }
        std::cout<<std::endl;
    }
}

void display_2D_2(std::vector<std::vector<int>> vect){
    for(std::vector<int> items: vect){
        for(int vals: items){
            std::cout<<vals<<" ";
        }
        std::cout<<std::endl;
    }
}

int main_1(){
    std::vector<std::vector<int>> vect;
    // pushback function
    for(int i=0;i<6;i++){
        std::vector<int> temp(i+1, i);
        vect.push_back(temp);
    }
    display_2D(vect);
    display_2D_2(vect);
    // popback function.
    vect.pop_back();
    display_2D(vect);
    // erase function
    vect.erase(vect.begin());
    display_2D(vect);
    // insert function
    vect.insert(vect.begin()+3, 5, {9,9,9,10,123});
    display_2D(vect);
    // remove function.
    // vect.erase(std::remove(vect.begin(), vect.end(), {3,3,3}), vect.end()); //--> (1)
    vect.erase(std::remove(vect.begin(), vect.end(), std::vector<int>{3, 3, 3, 3}), vect.end()); //-->(2)
    // (1) does not work, beause remove function dont know what the vector look like, so it thinks that u want to 
    // remove this list of integers, but actually it excepts only a single value.
    // so we have to say it explicitly say that, that is why the second (2) works. but the first one (1) don't work.
    display_2D(vect);
    return 0;
}

// flatter a 2D_vector.

int main(){
    std::vector<std::vector<int>> vect(5, {1,2,3,4,5});
    display_2D(vect);
    std::cout<<sizeof(vect)<<"\n"; // but unlike vect is an object, so when u use sizeof->opertion on the vect it will return the size of the pbject
    // so dont get shocked by the output.
    std::cout<<vect.size()*(*(vect.begin())).size()<<"\n";
    int no_of_elements=vect.size()*(*(vect.begin())).size();
    std::vector<int> vect_new;
    for(std::vector<std::vector<int>>::iterator item=vect.begin(); item!=vect.end();item++){
        for(std::vector<int>::iterator itr=(*item).begin(); itr!=(*item).end(); itr++){
            vect_new.push_back(*itr);
        }
    }
    for(int val: vect_new){
        std::cout<<val<<" ";
    }
    return 0;
}