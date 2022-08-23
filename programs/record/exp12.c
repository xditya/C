#include <stdio.h>

void main()
{
    int m, n, i, j, s = 0;
    printf("Enter the number of rows and coloumns: ");
    scanf("%d\n%d", &m, &n);
    int a[m][n];
    printf("Enter %d numbers:\n", m * n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (i == j)
                s += a[i][j];
        }
    printf("The matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\nThe sum of the diagonals is %d", s);
}