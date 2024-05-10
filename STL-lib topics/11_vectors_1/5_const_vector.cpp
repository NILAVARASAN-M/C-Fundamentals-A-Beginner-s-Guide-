// when a vector is declared as constant, it means the values in the vector cannot be changed, in the same way its size cannot be changed.
// when once declared, we can insert, delete, change values etc.

#include<iostream>
#include<vector>

void display(auto vect){
    for(auto items: vect){
        std::cout<<items<<" ";
    }
    std::cout<<std::endl;
}

// understanding the const vector.
int main1(){
    const std::vector<int> vect1{1,2,3,4,5,6};
    // vect1.push_back(10); ---> this will produce error because vect1 is an constant vector.
    std::vector<int> vect2{1,2,3,4,5,6};
    vect2.push_back(100);

    // no we try changing the values.
    // vect1[0]=123; --> this line will produce error because u cant change the values.
    vect2[0]=123;

    display(vect1);
    display(vect2);
    return 0;
}

// now lets see how this works against iterators.

int main(){
    const std::vector<int> vect1{1,2,3,4,5,6};

    // std::vector<int>::iterator itr1=vect1.begin(); --> this line will throw error because vector is constant and 
    // the iterator should also be const type.
    std::vector<int>::const_iterator itr1=vect1.begin(); // -----> (1)
    std::cout<<*(++itr1);
    // dont get confused by the fact that how the itr is getting incremented, beacuse itr object is not const. but the elements in the vector 
    // are const. it is pointing to an const type of object.
    const std::vector<int>::const_iterator itr2=vect1.begin(); // -----> (2)
    // std::cout<<*(++itr2); understand that (1) and (2) how they differ, this line will throw an error.

    // for better undrstanding, see both the iterators point to the same item in the vect, that is of type const_iterator.
    // the difference comes where we explicitly saying that itr2 object is const and it has nothing to do with the pointing type.

    // apart, from this since the iteraors of type: const_iterator , so u cant modify the elements in the vector.
}