#include<stdio.h>
 
int main()
{
    // int i =34;
    // int *ptr = &i;
    // printf("The value of ptr is %u\n", ptr);
    // ptr ++;
    // printf("The value of ptr is %u\n", ptr);
    // ptr--;
    // printf("The value of ptr is %u\n", ptr);
    // ptr = ptr + 1;
    // printf("The value of ptr is %u\n", ptr);
    // ptr = ptr + 2;
    // printf("The value of ptr is %u\n", ptr);

  
    char ch = 1;
    char *ptr_char = &ch;
    printf("The value of ptr is %u\n", ptr_char);
    ptr_char ++;
    printf("The value of ptr is %u\n", ptr_char);
    ptr_char = ptr_char + 5;
    printf("The value of ptr is %u\n", ptr_char);


 
return 0;
}