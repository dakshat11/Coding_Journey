#include<stdio.h>
float force(float mass);
int main() {
    float m;
    printf("Enter the vlaue of mass\n");
    scanf("%f", &m);
    printf("The vlaue of force in newton is %.2f\n",
    force(m));
return 0;
}
float force(float mass)
{
    float result = mass * 9.8;  
    return result;
}