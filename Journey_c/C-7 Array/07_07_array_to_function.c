#include<stdio.h>

    // void printarry (int *ptr, int n){
    //     for (int i = 0; i < n; i++)
    //     {
    //         printf("The value of element %d is %d\n", i+1, *(ptr+i));
    //     }
    // }

        void printarry (int ptr[], int n){
        for (int i = 0; i < n; i++)
        {
            printf("The value of element %d is %d\n", i+1, (ptr[i]));
        }
        }
int main()
{
    int arr[]= { 2,60,3,95,76,23,3};
    printarry(arr, 7);
return 0;
}