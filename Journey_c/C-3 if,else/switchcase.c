#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age.");
    scanf("%d", &age);

    switch (age)
    {
    case 1:
        printf("You are a child.");
        break;
    case 6:
        printf("You are a teen.");
        break;
    case 18:
        printf("You are a adult.");
        break;
    case 60:
        printf("You are a old.");
        break;

    default:
        printf("OMG you are dead.");
        break;
    }
    return 0;
}