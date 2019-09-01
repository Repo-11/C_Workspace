#include <stdio.h>

struct Employee
{
    int Id;
    char name[20];
};

int main()
{
    struct Employee emp;
    //emp.var1 = 10;
    printf("Enter Employee Id : ");
    scanf("%d", &emp.Id);
    printf("\nEmployee Id is : %d\n", emp.Id);
    printf("\nEnter Employee Name : ");
    scanf("%s", emp.name);
    printf("\nEmployee Name : %s\n", emp.name);
    return 0;
}
