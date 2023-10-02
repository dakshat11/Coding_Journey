 //c prograam to chek wheater a number  is even or odd.
 #include <stdio.h>

int main()
{
    int a, n;
    printf("Enter a number\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is even\n", a);
        return 0;
        }
    else
        {
            printf("%d is odd\n", a);
        }
    
}