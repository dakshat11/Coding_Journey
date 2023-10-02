#include <stdio.h>

int main(){
    int distance, time;
    printf("How far is your destination?");
    scanf("%d", &distance);
    printf("What is your recommended time?");
    scanf("%d", &time);

    printf("Your minimun speed should be %d", distance / time);
    return 0;
}