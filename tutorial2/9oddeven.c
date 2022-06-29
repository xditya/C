#include <stdio.h>
void main()
{
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("%d is even.\n", n);
    else
        printf("%d is odd", n);
}