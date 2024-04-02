/*
there are three types of variables static, instance, local.
whenever a variable is created a memory will be allocated for that

local:
this is generally declared in a scope like block, function, method, constructor.
and is accesible only in that scope, and it will be cleared in the memory once the scope ends

instance:
this are the variables which are declared in a class, so this variable are accesible anuwhere in class.
this variable has access modifiers, like public, protected, default, private etc. this variable can be accessed
outside of the class, but only through object. and this variables are cleared when the object is finished.

static:

this is like, unlike the instance, a common memory will be given for this means suppose if mutiple object are created in a class,
and if we form mutiple objects of that class, change in any one object will be reflected acrross all unlike the instance variable.

this all three types are exactly same like in java.

class Example
{
    static int a; // static variable
    int b;        // instance variable
}
*/