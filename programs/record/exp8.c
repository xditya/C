#include <stdio.h>
void main()
{
    int n, i, sum = 0;
    printf("Enter the limit: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        sum += a[i];
    printf("The sum is %d\nThe average is %d\n\n", sum, sum / n);
}