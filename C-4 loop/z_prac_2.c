#include <stdio.h>

int main(){
    int i, num;
    printf("Please enter the number.\n");
    scanf("%d", &num);
    for ( i = 10 ;i; i--)
    {
        printf("%d * %d = %d\n", num, i, (num*i));
    }
    
    return 0;
}