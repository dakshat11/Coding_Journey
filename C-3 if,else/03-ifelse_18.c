#include <stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age<18)
    {
        printf("You cannot apply for license");

    }
    else
    {
        printf("You can apply for license through this link.");
    } 
    if (age==50)
    {
        printf("\nHalf century\n");
    }
    

    return 0;
}