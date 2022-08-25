#include <stdio.h>

void main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int i, k = 0;
    char rev[100];
    for (i = strlen(str) - 1; i >= 0; i--)
        rev[k++] = str[i];
    printf("Reversed string = %s\n", rev);
}