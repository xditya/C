#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter three numbers:\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    int l = a > b && a > c ? a : b > c && b > a ? b
                                                : c;
    printf("The largest among %d, %d and %d is %d", a, b, c, l);
}