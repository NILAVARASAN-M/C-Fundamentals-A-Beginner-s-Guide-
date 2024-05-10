// we will see remove_if function.
// w.k.t we cant pass an predicate to the remove function, we can only pass an target value.
// so it is same as the remove function() except that, here the third parameter is an predicate,
// which is compulsory we have to defibe.
// so we can use this to remove all the elements in the array, whic or odd, even, prime, etc...

#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::vector<int> vec{ 10, 20, 30, 30, 20, 10, 10, 20 };
    auto itr1=std::remove_if(vec.begin(), vec.end(), [](int a){
        return a%2;
    });
    auto temp=vec.begin();
    int count=0;
    while(temp!=itr1){
        std::cout<<*temp<<" ";
        temp++;
        count++;
    }
    std::cout<<std::endl;
    for(int num: vec){
        std::cout<<num<<" ";
    }
    return 0;
}

// LETS SEE ERASE() VS REMOVE() functions::-->

// remove is better in the case of time-compexity, but anyway both differs in where it have to be used.
// but anyway we will talk about the common thing, in the both that is. they are removing the lement.

// so lets take a application where both can be used.
// APPLICATION: remove all the target elements from the vector.

// using erase(): we have to use find to find the element, and if found then returns the iteartor,then we use erase to remove that iterator
// physically from the container. so this will be in while loop until the find returns an end iterator.
// so when we erase an iterator, we will shift the elements by 1 to the left, to fill that space. --> for erasing one element O(N)
// if we are going to remove N elements using erase, then we MAY shift by n-elemenets in worst case for erasing each element. 
// So for erasing n-elements, then O(N^2).

// So when we compare this with remove() function it takes only linear space for this application.
// beacuse whichever element satisfies the condition that element will be moved to the last.
// so therefore the elements are not deleted, just moved thats all(and whcever eleemnet that dont satsify the codn 
// are moved to that emepty space left by the element which has satisfied the condition).
// and the function returns the new end for the vector.
// and we have to re-assign the vector. because the elements are not removed.

// EXAMPLE:

// vect={1,2,3,4,2,3,4,5,6,2,3,3};
// auto itr=remove(vect.begin(), vect.end(), 2);
// so now vect after this operation will be like {1,3,4,3,4,5,6,3,3,2,2,2}; --> so we can see the elements in the container are same,
// just the satisfied elements are moved to the last.
// but if u dont want this elements, then just assign the vector, with the help of the itr.
// the function returns the new end vector, which contains only the elements which are not-satisfied.
// the just do like this vect.assign(vect.begin(), itr) --> {1,3,4,3,4,5,6,3,3}

