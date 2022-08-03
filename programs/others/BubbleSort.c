#include <stdio.h>
void main()
{
    int i, j, temp, n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Before sorting.\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    // sorting
    for (i = 0; i < n; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    // printing
    printf("\n");
    printf("After sorting.\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\n");
}
