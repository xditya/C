#include <stdio.h>

int isPrime(int n)
{
    int i, c = 0;
    for (i = 1; i <= n; i++)
        if (n % i == 0)
            c++;
    if (c == 2)
        return 1;
    return 0;
}

void main()
{
    int n, i = 0, c = 0;
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("\n\nThe first %d prime numbers are: \n", n);
    while (c < n)
    {
        if (isPrime(i) == 1)
        {
            c++;
            printf("%d\n", i);
        }
        i++;
    }
}