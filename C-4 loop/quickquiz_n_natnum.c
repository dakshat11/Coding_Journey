#include <stdio.h>

int main(){
    int n;
    int a=0;
    printf("Enter the number");
    scanf("%d", &n);
    for (int a= 0; a < n; a++)
    {
        printf("The value of a is %d\n", a);
    }
    
    return 0;
}