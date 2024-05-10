// just keep that aside, and this is the code, use this only rest all is no matter.

#include <iostream>
#include <unordered_map>
#include<string>
using namespace std;

class Students{
    public:
    string name;
    string father_name;
    Students(string name1, string name2) : name(name1), father_name(name2) {}
    bool operator==(const Students &obj) const {
        return (this->father_name==obj.father_name) && (this->name==obj.name);
    }
};
struct hash_fn_for_students_correct{
    size_t operator()(const Students &obj) const{
        return hash<string>{}(obj.name)+hash<string>{}(obj.father_name);
    }
};


int main(){
    unordered_map<Students, int, hash_fn_for_students_correct> um; 
    Students p1("kartik", "kapoor");
    Students p2("Ram", "Singh");
    Students p3("Laxman", "Prasad");
 
    um[p1] = 100;
    um[p2] = 200;
    um[p3] = 100;
 
    for (auto e : um) {
        cout << "[" << e.first.name << ", "
             << e.first.father_name
             << "] = > " << e.second << '\n';
    }
    return 0;
}

// code- 2

// CPP program to demonstrate working of unordered_map
// for user defined data types.
#include <bits/stdc++.h>
using namespace std;

// Objects of this class are used as key in hash 
// table. This class must implement operator ==()
// to handle collisions.
struct Person {
	string first, last; // First and last names

	Person(string f, string l)
	{
		first = f;
		last = l;
	}

	// Match both first and last names in case
	// of collisions.
	bool operator==(const Person& p) const
	{
		return first == p.first && last == p.last;
	}
};

class MyHashFunction {
public:

	// Use sum of lengths of first and last names
	// as hash function.
	size_t operator()(const Person& p) const
	{
		return p.first.length() + p.last.length();
	}
};

// Driver code
int main()
{
	unordered_map<Person, int, MyHashFunction> um;
	Person p1("kartik", "kapoor");
	Person p2("Ram", "Singh");
	Person p3("Laxman", "Prasad");

	um[p1] = 100;
	um[p2] = 200;
	um[p3] = 100;

	for (auto e : um) {
		cout << "[" << e.first.first << ", "
			<< e.first.last
			<< "] = > " << e.second << '\n';
	}

	return 0;
}


// code-3

// CPP program to demonstrate working of unordered_map
// for user defined data types.
#include <bits/stdc++.h>
using namespace std; 

struct Person {
	string first, last;

	Person(string f, string l)
	{
		first = f;
		last = l;
	}

	bool operator==(const Person& p) const
	{
		return first == p.first && last == p.last;
	}
};

class MyHashFunction {
public:

	// We use predefined hash functions of strings
	// and define our hash function as XOR of the
	// hash values.
	size_t operator()(const Person& p) const
	{
		return (hash<string>()(p.first)) ^ 
			(hash<string>()(p.last));
	}
};

// Driver code
int main()
{
	unordered_map<Person, int, MyHashFunction> um;
	Person p1("kartik", "kapoor");
	Person p2("Ram", "Singh");
	Person p3("Laxman", "Prasad");

	um[p1] = 100;
	um[p2] = 200;
	um[p3] = 100;

	for (auto e : um) {
		cout << "[" << e.first.first << ", "
			<< e.first.last
			<< "] = > " << e.second << '\n';
	}

	return 0;
}
