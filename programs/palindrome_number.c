#include <stdio.h>
void main()
{
    int n, i, rev = 0, t;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n; // temporary store
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    if (t == rev)
        printf("%d is a palindrome.\n", t);
    else
        printf("%d is not a palindrome.\n", t);
}