#include<stdio.h>
float convo(int x);
int main() {
    int a ;
    printf("Enter the value in celcius\n");
    scanf("%d", &a);
    printf("The value of %d in celsius is %f", a, convo(a));

return 0;
}

float convo(int x)
    {
        float result= (x*9/5)+32;
        return result;
    }