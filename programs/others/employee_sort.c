/*
Enter Employee ID, Name and Salary.
Sort employees according to salary and display
*/

#include <stdio.h>

struct employee
{
    int id;
    char name[20];
    float salary;
};

void main()
{
    int i, n, j;
    struct employee e[100], t;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter Employee ID, Name and Salary of Employee %d:\n", i + 1);
        scanf("%d %s %f", &e[i].id, &e[i].name, &e[i].salary);
    }

    printf("Sorting...\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (e[j].salary > e[j + 1].salary)
            {
                t = e[j];
                e[j] = e[j + 1];
                e[j + 1] = t;
            }

    printf("Sorted.\n");
    printf("\t\tEmployee Details\n");
    printf("ID\t\tName\t\tSalary\n");
    for (i = 0; i < n; i++)
        printf("%d\t\t%s\t\t%f\n", e[i].id, e[i].name, e[i].salary);
    printf("\n");
}