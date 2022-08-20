#include <stdio.h>
void main()
{
    int num, large = 0, slarge = 0, i = 0, n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (i == 0)
            large = num;
        else if (num > large)
        {
            slarge = large;
            large = num;
        }
        else if (num > slarge)
            slarge = num;
    }
    printf("\nSecond largest = %d", slarge);
}
