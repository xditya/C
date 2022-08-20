#include <stdio.h>
void main()
{
    int i, n, s;
    printf("Enter limit: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter an element to search: ");
    scanf("%d", &s);
    for (i = 0; i < n; i++)
        if (a[i] == s)
        {
            printf("Element %d found at position %d", s, i + 1);
            return;
        }
    printf("Element not found in array!");
}