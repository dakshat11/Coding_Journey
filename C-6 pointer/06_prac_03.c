#include<stdio.h>
int main() {
    int a= 5;
    int *ptr;
    ptr = &a;

    printf("%d", 10 * *ptr);
return 0;
}