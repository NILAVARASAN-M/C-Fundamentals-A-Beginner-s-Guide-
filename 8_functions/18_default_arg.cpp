// but there is a small rule while defining the default argument, and general comman sense if we use it will mean

/*
Once a default value is used for an argument in the function definition, all subsequent arguments to it must have a 
default value as well. It can also be stated that the default arguments are assigned from right to left. For example, 
the following function definition is invalid as the subsequent argument of the default variable z is not default.
*/

// Invalid because z has default value, but w after it doesn't have a default value
int sum(int x, int y, int z = 0, int w){

}
// above function is the error.