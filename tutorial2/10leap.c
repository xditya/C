#include <stdio.h>
void main()
{
    int yr;
    printf("Enter year: ");
    scanf("%d", &yr);
    if ((yr % 4 == 0) && ((yr % 100 != 0 || yr % 400 == 0)))
        printf("%d is a leap year", yr);
    else
        printf("%d is not a leap year", yr);
    printf("\n");
}
