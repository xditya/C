#include <stdio.h>

void main()
{
    int i, a, b, c, large, small;
    printf("Enter 3 numbers:\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    large = a > b && a > c ? a : b > c ? b
                                       : c;
    small = a < b && a < c ? a : b < c ? b
                                       : c;
    printf("\nLargest = %d\nSmallest = %d\n", large, small);
}