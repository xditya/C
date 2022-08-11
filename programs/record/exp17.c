#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    float salary;
    char name[30];
};

void main()
{
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee e;
    for (i = 1; i <= n; i++)
    {
        printf("\nEmployee %d\n", i);
        printf("Enter ID: ");
        scanf("%d", &e.id);
        printf("Enter name: ");
        gets(e.name);
        printf("Enter salary: ");
        scanf("%f", &e.salary);
        printf("\nEntered detail is:");
        printf("Name: %s", e.name);
        printf("Id: %d", e.id);
        printf("Salary: %f\n", e.salary);
    }
}