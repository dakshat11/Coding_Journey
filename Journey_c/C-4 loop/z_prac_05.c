#include <stdio.h>

int main(){
    int i=1, sum=0,n;
    printf("Enter the number\n");
    scanf("%d", &n);
    // for ( i=0;i<=n; i++)
    // {
    //     sum+=i;
    // }
    while (i<=n )
    {
        sum +=i;
        i++;
    }
    
    printf("The value of sum (1 to 10) is %d", sum);
    return 0;
}