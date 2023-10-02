#include<stdio.h>
//sum is a function which takes a and b as input
//and returnes an integer as an output

int sum(int a, int b); //funtion prototype declaration

int main() {
    int c;
    c = sum(2,5); //funtion cell
    printf("The value of c is %d\n", c);
    return 0;
}
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}