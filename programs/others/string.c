#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    if (strcmp(str, strrev(str) == 0))
        printf("Palindrome");
    else
        printf("Not palindrome");
}