#include <stdio.h>

struct Employee
{
    char name[30];
    int age;
    float bs;
    float da;
    float hra;
    float tsalary;
};

void main()
{
    struct Employee e;
    printf("Enter the name:");
    scanf("%s", e.name);
    printf("Enter the age:");
    scanf("%d", &e.age);
    printf("Enter the basic salary:");
    scanf("%f", &e.bs);
    printf("Enter the da:");
    scanf("%f", &e.da);
    printf("Enter the hra:");
    scanf("%f", &e.hra);
    e.tsalary = (1 + e.da + e.hra) * e.bs;
    printf("Name=%s\n", e.name);
    printf("Age=%d\n", e.age);
    printf("Basic Salary=%.2f\n", e.bs);
    printf("DA=%.2f\n", e.da);
    printf("HRA=%.2f\n", e.hra);
    printf("Total Salary=%.2f\n", e.tsalary);
}