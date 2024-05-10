#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

struct Students{
    string name;
    int marks;
    Students(string temp, int num) : name(temp), marks(num) {}
    bool operator==(const Students &obj) const{
        return (this->name==obj.name) && (this->marks==obj.marks);
    }
};

int main(){
    // unordered_map<Students, int, [](const Students &obj)->return size_t{
    //     return hash<string>{}(obj.name)+hash<int>()(obj.marks); 
    // };> umap;

    // this will not work, in the sort(), find_if() functions under the algorithm class.
    //  we will see that we will pass directly, the lambda-function.there that is n function, sort(), find() etc....
    // the expect an function to be passed, so only we can write the lamda-function directly.

    // but here in the above-code, the same will not work. since here <> --> it is an template, so we have to pass the type
    // not the function itself, so we write the lamda-fnction sperately, dedecue the the type using decltype() -->
    // this will give us the type of the lambda function and we pass this.

    auto type_lambda_fn = [](const Students &obj)->size_t{
        return hash<string>()(obj.name)+hash<int>{}(obj.marks);
    };

    unordered_map<Students, int, decltype(type_lambda_fn)> umap(10, type_lambda_fn);
    Students s1("John", 90);
    Students s2("Doe", 85);

    umap[s1] = s1.marks;
    umap[s2] = s2.marks;

    for (const auto& [key, value] : umap) {
        cout << "Student: " << key.name << ", Marks: " << value << endl;
    }
}