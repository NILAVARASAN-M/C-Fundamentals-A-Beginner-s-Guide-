// Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. 
// No two mapped values can have the same key values.

// Associative Conatiners:
// Associative containers are a category of data structures in computer science that store elements formed by a combination of a 
// key value and a mapped value. They are called "associative" because they establish a relation between the keys and the values they hold. 
// This relationship allows for efficient retrieval, insertion, and deletion of elements based on their keys.

// std::map is an example of associative container, this is nothing but the same as the dictionary in python.
// where the key cannot be same, but the value can be changed.
/*
Some basic functions associated with std::map are:

begin() – Returns an iterator to the first element in the map.
end() – Returns an iterator to the theoretical element that follows the last element in the map.
size() – Returns the number of elements in the map.
max_size() – Returns the maximum number of elements that the map can hold.
empty() – Returns whether the map is empty.
pair insert(keyvalue, mapvalue) – Adds a new element to the map.
erase(iterator position) – Removes the element at the position pointed by the iterator.
erase(const g)– Removes the key-value ‘g’ from the map.
clear() – Removes all the elements from the map.
*/

// lets see each function.


// first we will see an small code
#include<iostream>
#include<map>
#include<string>

int main(){
    std::map<int, std::string> dict;
    dict[1]="nila";
    dict[2]="nilava";
    dict[3]="nilara";
    dict[4]="nilavarasan";
    // reassigning the the key-1, updating the value.
    dict[1]="nilavarasam manimaran";

    // for(std::map<int, std::string>::iterator &vals: dict){} ------> (WRONG)
    //  this is what I taught initially but is wrong, but actually the each key-value pair in an map is nothing but an std::pair,
    // so each elment in an dict<--std::map is std::pair<key: value>, we would have thought that in vectors we return iterators, so similarly
    // also here, but it is not. So each element in an std::map is an std::pair, with the first element in the pair as key and the second element
    // in the pair as value. so suppose auto obj=dict.begin() --> this will return an pair, so in obj now the pair is stored.
    // if we use want to get the values of the key-value, then obj.first --> key, and obj.second --> value.
    // and the principles of the dictinary in python, the same is applicable here also.

    // for(std::pair<int, std::string>& val: dict){
    // }  --> this will again throw an error, bcause we know that the first element in the pair is key, and key should not change in due
    // course of the for loop, so we have to explicitly tell that int is const, and the value is your wish can be const or not.
    for(std::pair<const int, std::string> &val: dict){
        std::cout<<"KEY: "<<val.first<<" VALUE: "<<val.second;
    }
    // the more easy and genric way is using auto-keyword.
    for(auto &val: dict){
        std::cout<<"KEY: "<<val.first<<" VALUE: "<<val.second;
    }
    // this is the generic code.
}


// the iterators is somewhat similiar to the iterators in the vector, we can inc/ dec the iterator.
// but we cannot inc/dec by an offset.
// then how will i get the iterator of an specific position,
// in vectors --> vect.begin()+n;
// in map  --> std::next(obj.begin(), n) , first argument is the start iterator, second argument is the position from that index.

// so basically we cant access the elemenets, randomly in map like this

// itr=map.begin(), --> itr+5, it+8, itr=4. so inc/ dec by an offset is not possible. we cant use subscipt for ***aceesing using index***
// this is also not possible.
// but itr++, itr-- this is possible.
// BUT WHY?????????

// so unlike vector, map is implemented as an BST (binary search tree), read-blck tree.
// where there will be nodes, where each node will have left-child and right-child.
// and the tree is aranged in ascending order, of keys.
// so we will do inorder traversal, first in the left subtree and then next right subtree. keep the count of nodes visted.
// if count of visited == index of the iterator that u want, then return that iterator.

// so therefore only itr++, itr-- is possible.

// detaied explanation:
/*
Certainly! The reason iterators in `std::map` are not random accessible is deeply tied to how
 `std::map` is implemented and its underlying data structure.

`std::map` is typically implemented as a self-balancing binary search tree, commonly a Red-Black
Tree. This tree structure allows for efficient insertion, deletion, and search operations, typically 
with logarithmic time complexity. 

The key property of a binary search tree is that elements are arranged in a specific order 
(usually based on the keys) to facilitate efficient searching. This order is crucial for 
maintaining the integrity of the tree and ensuring the efficiency of operations.

Now, let's consider what it means for an iterator to be random accessible:

1. **Direct Access**: Random access iterators support direct access to elements using 
arithmetic operations like `+`, `-`, `[]`, etc. This implies that given an iterator `it`, 
you can directly access `it + n` to get to the `n`-th element from `it`.

2. **Constant Time Advance**: Random access iterators support constant time advance to any
 position. This means that advancing an iterator by `n` positions takes the same amount of
  time, regardless of the value of `n`.

For a binary search tree, meeting these requirements is challenging:

- **Direct Access**: Since the elements are ordered based on their keys, accessing an 
element directly by index wouldn't make sense. For instance, if you have an iterator
 pointing to a specific element, you can't directly access the next element in the tree
  without traversing through the tree structure.

- **Constant Time Advance**: Advancing an iterator by `n` positions in a binary search
 tree involves traversing through the tree from the current position. Since the depth 
 of the tree can vary depending on its structure, advancing by `n` positions might take
  different amounts of time depending on the specific position and the size of the tree.

Due to these factors, iterators in `std::map` (and other associative containers like `std::set`)
 are not random accessible. Instead, they are typically bidirectional iterators, allowing movement 
 in both directions (forward and backward) through the elements of the container.
*/
/*
In a binary search tree (BST), each node has at most two children: a left child and a 
right child. The key property of a BST is that for any node:

- All elements in the left subtree have keys less than the node's key.
- All elements in the right subtree have keys greater than the node's key.

Given this structure, we can find the element at a specific index in a BST by traversing 
the tree in an inorder manner. Inorder traversal of a BST visits the nodes in ascending order of their keys.

Here's how we can find the element at the fifth index (1-based) in terms of a BST:

1. Start with the root of the tree.
2. Perform an inorder traversal, moving towards the left subtree first.
3. When visiting each node during the traversal, keep track of the number of nodes visited.
4. Stop the traversal when the count reaches the desired index.
5. The value associated with the node visited at the desired index is the element we are looking for.

Here's a high-level description of how this works:

- At each step, we compare the current node's index with the desired index.
- If the current node's index is less than the desired index, we move to the right subtree.
- If the current node's index is greater than the desired index, we move to the left subtree.
- If the current node's index matches the desired index, we have found the element.

This approach utilizes the properties of the binary search tree to efficiently traverse 
through the elements in ascending order of their keys until we reach the desired index.

In code, this would translate to a recursive function or an iterative approach that traverses
the tree and keeps track of the number of nodes visited until reaching the desired index.
*/

