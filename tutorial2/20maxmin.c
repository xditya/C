#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d\n%d", &a, &b);
    int max = a > b ? a : b;
    int min = a < b ? a : b;
    printf("Maximum: %d\nMinimum: %d\n", max, min);
}