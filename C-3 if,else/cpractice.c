#include <stdio.h>

int main()
{
    int age;
        printf("Enter your age.\n");
    scanf("%d", &age);

    if (age<6)
    {
        printf("You are eligible to take admission in the Kindergarten.");
    }
if(6<age<18)
    {
       printf("The Highschool is better for you");
    }
     if (age>18)

    {
        printf("Your are not suitable for junior education.");
    }
    
    
    
    return 0;
}