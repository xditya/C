#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int roll_no;
    float mark_maths;
    float mark_chem;
    float mark_phy;
    float total_mark;
};

int main(void)
{
    int n, i, j;
    struct student t;
    printf("Enter the number of students\n");
    scanf("%d", &n);
    struct student stu[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of the student  :  ");
        scanf("%s", stu[i].name);
        printf("\nRoll_No : ");
        scanf("%d", &stu[i].roll_no);
        printf("\nEnter the marks of Physics Maths Chemistry : ");
        scanf("%f %f %f", &stu[i].mark_phy, &stu[i].mark_maths, &stu[i].mark_chem);
        stu[i].total_mark = (stu[i].mark_phy + stu[i].mark_maths + stu[i].mark_chem);
    }

    for (i = 0; i < n - 1; i++)
        for (j = 0; j < (n - 1) - i; j++)
            if (stu[j].total_mark < stu[j + 1].total_mark)
            {
                t = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = t;
            }

    printf("Students Rank published \n");
    printf("_________________________________\n");

    for (i = 0; i < n; i++)
    {
        printf("Name    :    %s    MARK    : %f     RANK    :    %d", stu[i].name, stu[i].total_mark, i + 1);
        printf("\n");
    }
}
