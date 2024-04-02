// suppose if an class is there, and we are creating an object of the class, and if we are passing the object to a function
// now this object a copy is created in memory, so memory is wasted, because u are going to perform some print operation
// but if we do print operation on the same object, then memory will not be wasted.
// to avoid this we can pass pointers, so that we can save memory.

// pass by object.
// C program to print details of employee using structure

#include <stdio.h>
#include <string.h>

// Structure to represent Employee
struct Employee {
	char name[50];
	char desig[50];
};

// Function to print Employee details
void printEmpDetails(const struct Employee emp)
{
	printf("Name: %s\n", emp.name);
	printf("Designation: %s\n", emp.desig);
}

int main1()
{
	// Create an instance of Employee
	struct Employee emp1;
	strcpy(emp1.name, "geek");
	strcpy(emp1.desig, "Software Engineer");

	// Call the printEmpDetails function
	printEmpDetails(emp1);

	return 0;
}

// here memory is wasted.

// avoid this we use pointers.

void printEmpDetails(const struct Employee* emp)
{
	printf("Name: %s\n", emp->name);
	printf("Designation: %s\n", emp->desig);
}

int main(){
    // Create an instance of Employee
	struct Employee emp1;
	strcpy(emp1.name, "geek");
	strcpy(emp1.desig, "Software Engineer");

	// Call the printEmpDetails function
	printEmpDetails(&emp1);

	return 0;
}