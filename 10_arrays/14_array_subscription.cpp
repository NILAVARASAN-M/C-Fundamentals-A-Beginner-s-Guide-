#include<iostream>

int main()
{
    // for an 3D-array.
    int arr[2][3][2] = {
                       {
                         {5, 10},
                         {6, 11},
                         {7, 12},
                       },
                       {
                         {20, 30},
                         {21, 31},
                         {22, 32},
                       }
                     };
    int (*ptr1)[3][2]=arr;
    int (*ptr2)[2]=*ptr1+1;
    int *ptr3=*ptr2+0;
    std::cout<<*ptr3;

    // for an 2D-array.
    int nums[3][4] = {{10, 11, 12, 13}, {20, 21, 22, 23}, {30, 31, 32, 33}};
    int (*p1)[4]=nums;
    int (*p2)[4]=*nums;
    int (*p3)=*nums;
}