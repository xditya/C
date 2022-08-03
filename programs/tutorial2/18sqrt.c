#include <stdio.h>
#include <math.h>
void main()
{
    int n, sq;
    printf("Enter a number: ");
    scanf("%d", &n);
    sq = sqrt(n);
    printf("Square root of %d = %d", n, sq);
}