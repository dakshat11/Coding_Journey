#include<stdio.h>

void printAdd(int a){
    printf("The adress of variable a is %u\n", &a);
}
int main() {
    int i=4; 
    printf("The value of vatiable i is %d\n", i);
    printAdd(i);
    printf("The adress of variable i is %u\n", &i);

    
return 0;
}