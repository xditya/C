#include <stdio.h>

void sumOfDiagonals(int m, int n)
{
    int i, j, s = 0, a[m][n];
    printf("Enter %d numbers: ", m * n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (i == j)
                s += a[i][j];
        }
    printf("The sum of diagonals is: %d", s);
}

void main()
{
    printf("Enter the number of rows and coloumns: ");
    int m, n;
    scanf("%d\n%d", &m, &n);
    if (m != n)
    {
        printf("Matrix does not have a diagonal!");
        return;
    }
    else
        sumOfDiagonals(m, n);
}