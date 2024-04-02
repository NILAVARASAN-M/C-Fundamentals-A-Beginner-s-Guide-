#include<iostream>

// the difference  between refrence and pointers.

// 1.) initialization.

// pointers: can be declared  and defined later. (We can declare and initialize pointer at same step or in multiple line.)
//refrences: declaration and definition cannot be done in multiple steps, has to be done in single step. (must)

// 2.) reassigned.

// pointers: we can assign mutiple new values to the pointer.
// refrences: once we form alies, it will be forever till that refrence gets deleted. so no reassignment possible.

// 3.) Memory Address

// pointers: a seperate memory location and space of some size is allocated for this pointer. so space is allocated.
// refrence: no seperate memory location is reserved form them. so no memory utilization.
// for this to understand, see EOC clearly.
/*
in that in memory(RAM), 
RAM[0]--> p. this is for the pointer allocated, so for a pointer we allocate space.

suppose if int num=10; int &ref=num; --> here both num and ref both point to same location in memory. so how will the compiler now.
we know that in EOC, till the 0-15 registers are pre-defined and rest are for the incoming type. eg: if int num1=10, num2=123;
num1 will be converted as @16 and num2 will be converted as @17.
so in our case (nt num=10; int &ref=num;) here num will be converted as @16, and ref will also be converted as @16.
*/
// --> we can relate like this and understand.

// 4.) Null value

// pointers: we can assign an null value.
// refrence: we cannot, if null value then error is raised.