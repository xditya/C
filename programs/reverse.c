#include <stdio.h>

void main()
{
    int n, i, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    printf("The reverse is %d\n", rev);
}