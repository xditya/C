#include <stdio.h>
void main()
{
    printf("Enter a character: ");
    char ch;
    scanf("%c", &ch);
    printf("The ASCII value of %c is %d.", ch, ch);
}