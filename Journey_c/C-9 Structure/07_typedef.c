#include<stdio.h>
#include<string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[20];
}emp; 

void show(emp emp1){
    printf("The code od emplouee is: %d\n", emp1.code) ;
    printf("The code od emplouee is: %f\n", emp1.salary) ;
    printf("The code od emplouee is: %s\n", emp1.name) ;
}

int main()
{   // declaring ptr and ei
    emp e1;
    emp *ptr;

    // pinting ptr to e1
    ptr = &e1;
    //set the member values of e1
    ptr->code = 101;
    ptr->salary = 10.2;
    strcpy(ptr->name, "harry");
    show(e1);
    
return 0;
}