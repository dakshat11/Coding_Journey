#include <stdio.h>
#include <string.h>
int main()
{
    char st1[45] = "hel";
    char *st2 = "helo";
    int val = strcmp(st1, st2);
    printf("The st1 is %d", val);
    return 0;
}