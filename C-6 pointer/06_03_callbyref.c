#include<stdio.h>
void swap(int *a, int *b);
void wrongswap(int a, int b);
int main() {
    int x=6, y=9;
    printf("the value of a and b before swap is %d and %d\n", x ,y);
  //  wrongswap(x,y); //will not work due to call by value
  swap(&x,&y); //will work due to call by refrence
    printf("the value of a and b after swap is %d and %d\n", x ,y);


return 0;
}
void wrongswap(int a, int b)
{
        int temp;
        temp = a;
        a = b;
        b= temp;
}
void swap(int *a, int *b)
{
        int temp;
        temp = *a;
        *a = *b;
        *b= temp;
}