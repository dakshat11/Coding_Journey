#include <stdio.h>

int main(){
    int marks;
    printf("Please enter your marks obtained\n");
    scanf("%d", &marks);
    if (marks>0 && marks<35)

    {
        printf("You have scored %d, sorry you have been failed.\n", marks);

    }
    if (marks>35 && marks<40)

    {
        printf("You have scored %d, you have been passed with grade 'E'.\n", marks);
        
    }
    if (marks>40 && marks<60)

    {
        printf("You have scored %d, Oh! you have been passed with grade 'D'\n", marks);
        
    }
    if (marks>60 && marks<80)

    {
        printf("You have scored %d, Nice! you have been passed with grade 'B'\n", marks);
        
    }
    if (marks>80 && marks<100)

    {
        printf("You have scored %d, Congrats! you have been passed with grade 'A'\n", marks);
        
    }
    if (marks>100)
    {
        printf("Chutiye eistien mat ban.");
    }
    
    
    return 0;
}