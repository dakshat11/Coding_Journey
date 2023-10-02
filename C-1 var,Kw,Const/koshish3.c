#include <stdio.h>

int main()
{
   int Maths, English, Physics, Chemsitry, Geography;

   printf("Marks obtained in Maths");
   scanf("%d", &Maths);
   printf("Marks obtained in English");
   scanf("%d", &English);
   printf("Marks obtained in Physics");
   scanf("%d", &Physics);
   printf("Marks obtained in Chemsitry");
   scanf("%d", &Chemsitry);
   printf("Marks obtained in Geography");
   scanf("%d", &Geography);

   int totalmarks = (Maths + English + Physics + Chemsitry + Geography);

   printf("The total sum if %d", totalmarks);
   printf("\nPercentage obtained is:- %d",
          totalmarks * 100 / 500);
}