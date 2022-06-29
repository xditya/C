#include <stdio.h>
#include <ctype.h>
void main()
{
    printf("Enter a character: ");
    char ch;
    scanf("%c", &ch);
    switch (tolower(ch))
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("The character %c is a vovel.", ch);
        break;
    default:
        printf("The character is a consonant.");
    }
}