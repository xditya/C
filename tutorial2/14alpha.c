#include <stdio.h>
#include <ctype.h>
void main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    int r = isalpha(ch);
    if (r == 0)
        printf("%c is not an alphabet.", ch);
    else
        printf("%c is an alphabet.", ch);
}