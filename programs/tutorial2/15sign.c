#include <stdio.h>
void main()
{
    printf("Enter a number: ");
    int a;
    scanf("%d", &a);
    if (a > 0)
        printf("%d is positive.");
    else if (a < 0)
        printf("%d is negative.");
    else
        printf("%d is neither positive nor negative.", a);
}