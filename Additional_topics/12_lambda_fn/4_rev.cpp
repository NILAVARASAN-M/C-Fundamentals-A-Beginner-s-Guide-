// Now why do we actually need this functors??? because we can just pass an function, it will be syntax-wise also easy, and less prone
// to error's.  then why we are stressing so much on this struct, callable object -> (functors) etc. ??

// because functors, which are the objects of an class/ struct whose object when passed as an arg will act as an callable-function.
// which will invoke the operator() function.
// since we can use class, so basically then we have all the properties of the struct.

// example suppose u just want to note down how much time the function is called in an lambda function,
// in this case for an normal function, u have to decalte an Global variable, which is accesible by all, and increment the value there.
// but in the case of struct, we can keep inside the class only, and increment.s

// similar propertis what makes it important to use an functor rather then function().
// Lets see above discussed for an struct.

#include<iostream>
#include<vector>
#include<algorithm>

struct Example
{
    //int count=0;
    Example(): count(0){}
    void operator()(int a){
        std::cout<<a;
        count++;
        std::cout<<" "<<count<<'\n';
        return;
    }
    int count=0;
};

int main(){
    std::vector<int> v={1,2,3,4,5,4,10,23,3,2,4,50};
    const Example vis = std::for_each(v.begin(), v.end(), Example());
    std::cout << "num calls: " << vis.count << '\n';
    return 0;
}

// so don't go deep in this, code. just understand the output, and for_each return the last object.
// In the above example, there’s a data member numCalls which is used to count the number of
// invocations of the call operator. std::for_each returns the function object that we
// passedit, so we can then take this object and get the data member.

// this is just my understnading, may be not the correct understanding:
// for_each retuns that temporary object each time, so then basically we will not create n-temporary objects.
// but only one, that will get passed each time. and since same object, the count state will be maintained.
// atlast after the for_each finished it will return that object. and this object contains, the count.

// this code also works-->
/*
#include<iostream>
#include<vector>
#include<algorithm>

struct Example
{
    int count=0;
    Example(): count(0){}
    void operator()(int a){
        std::cout<<a;
        count++;
        std::cout<<" "<<count<<'\n';
        return;
    }
};

int main(){
    Example obj;
    std::vector<int> v(10, 3);
    obj=std::for_each(v.begin(), v.end(), obj);
    std::cout<<"COUNT: "<<obj.count;
    return 0;
}

*/
// in this piece of code, u dont pass an temporary object, but u create an object then pass. so what will happen, 
// interanlly is that, it will create duplicate of the object and this duplicate is passed. so now the objects are dupliacted, so now different
// count, so only we will see in this code, we will again store the object returned by the for_each function. 
// b/c we thought same object, so it count will have the number of call's, but the outptu will be zero, since the object is different, b/c
// it will create internally copy of the object.
