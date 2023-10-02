#include <stdio.h>
int main()
{
    int i = 34;
    int *j = &i;
    int **k = &j;
    printf("value of i is %d\n",i);
    printf("value of i is %d\n",*j);
    printf("The adress of i is %u\n",&i);
    printf("The adress of i is %u\n",j);
    printf("The adress of j is %u\n",&j);
    printf("The value of j is %u\n", *(&j));
    printf("The value of k is %u\n", **k);
    printf("The adress of k is %u\n", **(&k));


  

    return 0;
} 