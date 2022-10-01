// WAP in C to store the information of N students using Array

#include<stdio.h>
struct student
{
    char name[60];
    int roll;
    float marks;
};
struct student s[10];

int main() {
    int i, n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter information of students: \n");
    for(i=0; i<n; i++) {
    s[i].roll = i+1;
    printf("\nFor roll number %d",s[i].roll);
    printf("\nEnter name: ");
    scanf("%s",s[i].name);
    printf("\nEnter marks: ");
    scanf("%f",&s[i].marks);
    printf("\n");
    }
    printf("Displaying Information:\n\n");
    for(i=0; i<n; i++) {
    printf("\nRoll number: %d",i+1);
    printf("\nName: ");
    printf(s[i].name);
    printf("\nMarks: %.1f",s[i].marks);
    printf("\n");
    }
}

