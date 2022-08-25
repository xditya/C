#include <stdio.h>
#include <math.h>
void prime(int n)
{
    int i, c = 0;
    for (i = 1; i < n; i++)
        if (n % i == 0)
            c++;
    if (c == 2)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}

void armstrong(int n)
{
    int i, sum = 0, len = 0, temp = n, temp2 = n, d;
    while (temp > 0)
    {
        len++;
        temp /= 10;
    }
    while (temp2 > 0)
    {
        d = temp2 % 10;
        sum += pow(d, len);
        temp2 /= 10;
    }
    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
}

void perfect(int n)
{
    int i, sum = 0;
    for (i = 1; i < n; i++)
        if (n % i == 0)
            sum += i;
    if (sum == n)
        printf("%d is a perfect number.\n", n);
    else
        printf("%d is not a perfect number.\n", n);
}

void odd_even(int n)
{
    if (n % 2 == 0)
        printf("%d is an even number.\n", n);
    else
        printf("%d is an odd number.\n", n);
}

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    prime(n);
    armstrong(n);
    perfect(n);
    odd_even(n);
}