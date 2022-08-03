#include <math.h>
#include <stdio.h>

void main()
{
    int n, s = 0, l = 0, temp, i, d;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    // find length of number
    while (temp > 0)
    {
        l++;
        temp /= 10;
    }
    temp = n;
    // power and other stuff
    for (i = n; i > 0; i /= 10)
    {
        d = n % 10;
        s += pow(d, l);
        n /= 10;
    }
    if (s == temp)
        printf("%d is an armstrong number.", temp);
    else
        printf("%d is not an armstrong number.", temp);
}