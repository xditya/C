#include <stdio.h>
void main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    char grade;
    if (marks > 100 || marks < 0)
    {
        printf("Invalid mark entered!\n");
        return;
    }
    int m = (marks / 10);
    if (m == 10 || m == 9)
        grade = 'S';
    else if (m == 8)
        grade = 'A';
    else if (m == 7)
        grade = 'B';
    else if (m == 6)
        grade = 'C';
    else if (m == 5)
        grade = 'D';
    else
        grade = 'F';
    printf("Your marks: %d\nGrade: %c\n", marks, grade);
}
