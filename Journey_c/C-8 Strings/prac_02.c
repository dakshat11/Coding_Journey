#include<stdio.h>
#include<string.h> 
int main()
{
    char st1[43];
    char st2[34];
    int i = 0;
    char c;
    
    printf("Enter the value of first string\n");

    scanf("%s", st1);
    printf("Enter the value of second string character by character\n");
    
    while (c!='\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        st2[i]= c;
        i++;
    }
    st2[i]='\0';
    // st2[i-1]='\0';  for strcmp


    printf("The value of st1 is %s", st1);
    printf("The value of st2 is %s", st2);
    printf("the value of strcmp of the strings return %d", strcmp(st1,st2));

return 0;
}