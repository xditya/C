#include <stdio.h>
struct Student
{
    char name[30];
    int rollnum;
    int mark_for_C;
};
void main()
{
    struct Student s[30];
    int i, n, sum = 0;
    float avg;
    printf("Enter the no of Student: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the Student name: ");
        scanf("%s", &s[i].name);
        printf("Enter the Student rollnum: ");
        scanf("%d", &s[i].rollnum);
        printf("Enter the Student Mark for C:");
        scanf("%d", &s[i].mark_for_C);
    }
    printf("Name\tRoll Number\tMark for C\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t%d\t%d\n", s[i].name, s[i].rollnum, s[i].mark_for_C);
        sum = sum + s[i].mark_for_C;
    }
    avg = sum / (float)n;
    printf("Average Mark = %.2f\n", avg);
}