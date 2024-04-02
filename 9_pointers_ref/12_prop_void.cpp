// we will discuse some properties of the void pointer in c++.
// 1.) void pointers cannot be dereferenced.

#include<iostream>

void fun1(){
    int num=100;
    void *ptr=&num;
    std::cout<<*ptr<<std::endl;
}
// the  above code will produce error because of the fact that, ptr is an void pointer, it just points to the memory location, but
// it dont know the type of data that the pointer points to. since it dont the type, the compiler may not know how much contagious block to be read.
// so only error.

// to derefrence it, we type-cast the pointer to some data-type, like the example below.

void fun2(){
    int num=100;
    void *ptr=&num;
    std::cout<<*(int *)ptr<<std::endl; // ---->(1)
     std::cout<<*static_cast<int *>(ptr)<<std::endl; // ---->(1)
}
int main(){
    fun2();
}

// (1) -> *(int *)ptr , (int *)ptr --> here the ptr is a void type so we are basically doing type-casting, similat to the double->integer
// after we done the type-casting, now the integer pointer is derefrenced,  

// ------------------------------------------

// the last porperty is 

//  The C standard doesn’t allow pointer arithmetic with void pointers. However, 
// in GNU C it is allowed by considering the size of the void as 1.

int fun3()
{
	// Declare and initialize an integer array 'a' with two
	// elements
	int a[2] = { 1, 2 };
	// Declare a void pointer and assign the address of
	// array 'a' to it
	void* ptr = &a;

	// Increment the pointer by the size of an integer
	ptr = ptr + sizeof(int);

	// The void pointer 'ptr' is cast to an integer
	// pointer using '(int*)ptr' Then, the value is
	// dereferenced with `*(int*)ptr` to get the value at
	// that memory location
	printf("%d", *(int*)ptr);

	return 0;
}
