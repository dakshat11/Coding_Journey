#include <stdio.h>

int main()
{
    int age;
    int vippass = 0;
     vippass = 1;
    printf("Enter your age\n");
    scanf("%d", &age);
    if ((age<=70 &&  age>18) || vippass==1)
    {
        printf("Your are above 18 and below 70 so you can drive.");
    }
    else
    {
        printf("You cannot drive \n");
    }
    return 0;
}