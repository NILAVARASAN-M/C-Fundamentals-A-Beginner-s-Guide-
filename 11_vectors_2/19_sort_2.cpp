// lets see some other ways to do sorting. 

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

//6. sorting for an  enum data-strucutre.

enum class Weekday { Monday, Tuesday, Wednesday, Thursday, Friday };

bool sortByWeekday(const Weekday& a, const Weekday& b) {
    return static_cast<int>(a) < static_cast<int>(b);
}

int main_6(){
    std::vector<Weekday> vect{Weekday::Monday, Weekday::Tuesday, Weekday::Wednesday, Weekday::Thursday, Weekday::Friday, Weekday::Monday};
    std::sort(vect.begin(), vect.end(), sortByWeekday);
    return 0;
}

// 7. final example using struct.

typedef struct Product
{
    std::string name;
    int id;
    Product(std::string a, int val) :name(a), id(val) {}
}Product;

bool struct_sort(Product *a, Product *b){
    return a->id<b->id;
}

int main_7(){
    std::vector<Product*> vect{new Product("Apple", 100), new Product("Samsung", 81), new Product("Oneplus", 50), new Product("Vivo", 10)};
    std::sort(vect.begin(), vect.end(), struct_sort);
    for(auto vals: vect){
        std::cout<<vals->id<<" "<<vals->name<<std::endl;
    }
    return 0;
}

// 8.) same structure, not using pointers, and using a different apporach. for the vectors.

bool struct_sort_new(Product a, Product b){
    return a.id<b.id;
}

int main_8(){
    std::vector<Product> vect{{"Apple", 100}, {"Samsung", 81}, {"Oneplus", 50}, {"Vivo", 10}};
    // this is a new way of declaring, and the order in the structure and the order inside the list{} is extremely important....
    // this is an new way so the object is directly initialized. --> easy and readable way
    std::sort(vect.begin(), vect.end(), struct_sort_new);
    for(auto vals: vect){
        std::cout<<vals.id<<" "<<vals.name<<std::endl;
    }
}

// 9. dec-order using inbuilt.
int main_9()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    std::sort(arr, arr + n, std::greater<int>());
    return 0;
}

// 10. sorting the array in the certain range only.

template<typename T>
void display(T& v){
    for(auto items: v){
        std::cout<<items<<" ";
    }
    std::cout<<std::endl;
    return;
}

int main_10()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    std::sort(arr+3, arr + n);
    display(arr);
    return 0;
}

// 11.) another for better understainding

// We can also write our own comparator function and pass it as a third parameter. This “comparator” function returns a value; 
// convertible to bool, which basically tells us whether the passed “first” argument should be placed before the passed “second” 
// argument or not. 
// For eg: In the code below, suppose intervals {6,8} and {1,9} are passed as arguments in the “compareInterval” 
// function(comparator function). Now as i1.first (=6) < i2.first (=1), so our function returns “false”, which 
// tells us that “first” argument should not be placed before “second” argument and so sorting will be done in
//  order like {1,9} first and then {6,8} as next. 

struct Interval {
    int start, end;
};
 
// Compares two intervals
// according to starting times.
bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}
int main()
{
    Interval arr[]
        = { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // sort the intervals in increasing order of
    // start time
    std::sort(arr, arr + n, compareInterval);
    return 0;
}