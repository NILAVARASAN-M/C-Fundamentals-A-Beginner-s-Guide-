// this one is very similar to both cout and cerr, typically to say combination of the both results in this clog.

/*
buffered standard error stream (clog): This is also an instance of ostream class and used to display errors
 but unlike cerr the error is first inserted into a buffer and is stored in the buffer until it is not fully
  filled. or the buffer is not explicitly flushed (using flush()). The error message will be displayed on the screen too.

for normal things like general way of printing clog uses buffer, and
while handling the errors it is unbuffer. so it solves the disadvantage of cerr,
*/

#include <iostream>

using namespace std;

int main()
{
	clog << "An error occurred";

	return 0;
}

// but for code reuability, and to understand the code readibitly , eventhough clog and cout does same we use specificaally 
// only for error related thing the clog.
