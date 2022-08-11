#include <stdio.h>
#include <malloc.h>

void main()
{
    int n, i, s = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *p = malloc(n * sizeof(int));
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", p + i);
    for (i = 0; i < n; i++)
        s += *(p + i);
    printf("Sum = %d", s);
}