#include <stdio.h>

int main()
{
    int Maths, Science, English, History;
    printf("Enter the obtained markes in Maths");
    scanf("%d", &Maths);
    printf("Enter the obtained markes in Science");
    scanf("%d", &Science);
    printf("Enter the obtained markes in English");
    scanf("%d", &English);
    printf("Enter the obtained markes in History");
    scanf("%d", &History);

    printf("Total markes obtained is %d", Maths + Science + English + History);
    printf("\nTotal Percentage Obtained is %d",
           (Maths + Science + English + History) * 100 / 400);
    return 0;
}