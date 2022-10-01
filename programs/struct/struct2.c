// WAP in C to store the information of N books using array

#include<stdio.h>
struct books
{
    char name[60];
    int serial;
    char author[50];
};
struct books s[10];

int main() {
    int i, n;
    printf("Enter the number of Books: ");
    scanf("%d", &n);
    printf("Enter information of Books:");
    for(i=0; i<n; i++) {
        printf("\nEnter Book Serial: ");
        scanf("%d", &s[i].serial);
        printf("\nEnter Book Title: ");
        scanf("%s", &s[i].name);
        printf("\nEnter Author's Name: ");
        scanf("%f", &s[i].author);
        printf("\n");
    }
    printf("Displaying Information:\n\n");
    for(i=0; i<n; i++) {
    printf("\nBook Serial: %d", s[i].serial);
    printf("\nBook Name: %s", s[i].name);
    printf("\nAuthor Name: %s", s[i].author);
    printf("\n");
    }
}

