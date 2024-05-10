// lets see emplace function and insert function
// this emplace is very similar to the insert, just how it internally works what makes a difference.
// also insert function supports inserting an range of values at an index,
// but emplace dont support inserting an range of values, we c insert only one value.s

// PARAMETERS: 1st para: the iterator, where u want to insert. 2nd para: the value that u want to insert.
// RETURN: the function returns, the iterator of the newly inserted value.

// ROLE: it does same, as the insert function where we specify the index, and the value to be inserted and that value will get
// inserted. but suppose when u use insert function, u want to insert an object of an very complex-class. so first that temporay
// object is created in memory, and from there it is again copied to the vector so u are doing copy/ move which is very time-consuming
// if the task is of inserting an complex object. 
// But what emplace does, is that it constructs that object, at the place where the u are going to insert. so
// u there is no need of doing an unwanted move/ copy operation. which is very effcient.

// so actually in many cases, but emplace and insert are same.
// like, for int, char, primtive data-types, --> so here the effciency is same for both insert() and emplace().
// also take the code below, nere the effciency of both are same, after the code we will see where the difference arises in their effeciency.

#include<iostream>
#include<vector>

struct tump{
    int num1;
    char name;
};

int main_1(){
    tump obj1;
    tump obj2;
    tump obj3;
    tump obj4;
    std::vector<tump> v={obj1, obj2, obj3};
    v.insert(v.end(), obj4);
    v.emplace(v.end(), obj1);
}

// in this piece of code, since we are inserting the valiues using insert and emplace functions, since u are going to insert/ empace
// an aldready created object, so both will copy the object to the end of the vector, so here the effciency is same,

// lets see this case.
int main(){
    tump obj1;
    std::vector<tump> v={tump(), tump(), tump()};
    v.insert(v.end(), tump()); 
    v.emplace(v.end(), tump());
}
// in here the difference in efficiency arises, so what will happen is we are actually creating an temporary object, by calling the
// constructor of the class.
// in the case of insert() function, first that temporary object is created in memory, and from there that object is again copied/ moved
// to the end of the vector. so if the object is compex then this will reduce the effciency by great amount.
// b/c u r doing an extra copy/ move operation.

// but in the case of emplace() function, when we are creating the temporary object, we will create in that index of the vector only, therefore
// avoiding the overhead of doing an extra copy/ move operation.

// so in some cases insert() and emplace(), effec is same.
// but for the other cases emplace() is bettere than insert().
// so overall emplace() is better in terms of effciency, only dis_adv is that we cant insert an range of values.