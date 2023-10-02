#include<stdio.h>
 
int main()
{ 
    // char str[]="Daksh";
    char str[] = {'D','A','K','S','H','\0'};
    
    char *ptr = str;
    while (*ptr!='\0')
    {
        printf("%c", *ptr);
        ptr++;
   }
    
return 0;
}