#include <stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter the first number\n");
    scanf("%d", &a);

    printf("Enter the second number\n");
    scanf("%d", &b);

    printf("Enter the third number\n");
    scanf("%d", &c);

    printf("Enter the fourth number\n");
    scanf("%d", &d);

    if (a>b && a>c && a>d)
    {
        printf("The biggest number is %d.",a);
    }
    if (b>a && b>c && b>d)
    {
        printf("The biggest number is %d.",b);
    }
    if (c>b && c>a && c>d)
    {
        printf("The biggest number is %d.",c);
    }
    if (d>b && d>a && d>c)
    {
        printf("The biggest number is %d.",d);
    }

    return 0;
}