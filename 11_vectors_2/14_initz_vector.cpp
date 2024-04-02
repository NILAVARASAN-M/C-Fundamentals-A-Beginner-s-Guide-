// lets see some ways to initialaize a vector.

#include<iostream>
#include<vector>

void display(std::vector<int> v){
    for(int items: v){
        std::cout<<items<<" ";
    }
    std::cout<<std::endl;
    return;
}

// 1.) using push_back()
int main_1(){
    std::vector<int> v;
    for(int i=0;i<10;i++) v.push_back(i);
    display(v);
    return 0;
}

// 2.) explicitly declaring as list.
int main_2(){
    std::vector<int> v{1,2,2,34,4,2,1,11};
    display(v);
    return 0;
}

// 3.) giving size and value.
int main_3(){
    std::vector<int> v(4,100);
    display(v);
    return 0;
}

// 4.)copying from another vector.
int main_4(){
    std::vector<int> v(4,100);
    std::vector<int> dummy(v);
    display(dummy);
    return 0;
}

// 5.)using assign function
int main_5(){
    std::vector<int> v;
    v.assign(10,100);
    display(v);
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    v.assign(arr, arr+(sizeof(arr)/sizeof(arr[0])));
    display(v);
    std::vector<int> dummy(6,123);
    v.assign(dummy.begin(), dummy.begin()+4);
    display(v);
    v.assign(v.data(), v.data()+3);
    display(v);
    return 0;
}

// 6. using insertion function.
int main_6(){
    std::vector<int> v;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    std::vector<int> dummy(6,123);
    v.insert(v.begin(), 100);
    display(v);
    v.insert(v.begin(), 4, 100);
    display(v);
    v.insert(v.begin(), arr, arr+4);
    display(v);
    v.insert(v.begin(), dummy.begin(), dummy.begin()+5);
    display(v);
    return 0;
}
// 7. initializing using arrays.
int main_7() 
{ 
    int arr[] = { 10, 20, 30 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    std::vector<int> vect(arr, arr + n); 
    display(vect);
    return 0; 
}
// 8. Initializing from another vector:
int main_8() 
{ 
    std::vector<int> vect1{ 10, 20, 30 }; 
    std::vector<int> vect2(vect1.begin(), vect1.end()); 
    display(vect2);
    return 0; 
} 
// 9. nitializing all elements with a particular value:
int main_9(){
    std::vector<int> vect1{ 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    fill(vect1.begin()+2, vect1.begin()+6, 7);
    display(vect1);
    return 0;
}
// 10. using iota it is an interation type fnction
#include<numeric>
int main(){
    std::vector<int> v(5);
    std::iota(v.begin(), v.end(), 2);
    display(v);
    return 0;
}
