#include <stdio.h>
void main()
{
    int i, j, n, t;
    printf("Enter the number of numbers: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }

    printf("\nSorted numbers: \n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}