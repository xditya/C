#include <stdio.h>
void main(void)
{
    int ch, m, n, p, q, k, i, j;
    printf("Enter the number of rows and columns in the first array\n");
    scanf("%d %d", &m, &n);
    printf("Enter the number of rows and columns in the second array\n");
    scanf("%d %d", &p, &q);
    int a[m][n];
    int b[p][q];
    int c[m][q]; // for multiplication
    printf("Enter %d elements of the First array\n", m * n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("Enter %d elements of the second array\n", p * q);
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &b[i][j]);
    printf("Menu:\n1. find the sum of two matrices\n2. find the product of two matrices\n3. find the transpose of a matrix\n4. display a matrix.\n\nEnter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        if (!(m == p && n == q))
        {
            printf("Addition is not possible!");
            return;
        }
        printf("Sum of the arrays:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                printf("%d ", (a[i][j] + b[i][j]));
            printf("\n");
        }
        break;
    case 2:
        if (!(n == p))
        {
            printf("Multiplication is not possible!");
            return;
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < p; k++)
                    c[i][j] += a[i][k] * b[k][j];
            }
        }
        printf("Product of the arrays:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
                printf("%d ", (c[i][j]));
            printf("\n");
        }
        break;
    case 3:
        printf("The transpose of the first matrix is:\n");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
                printf("%d ", a[j][i]);
            printf("\n");
        }
        printf("The transpose of the second matrix is:\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
                printf("%d ", b[j][i]);
            printf("\n");
        }
        break;
    case 4:
        printf("Elements of the first array:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                printf("%d ", a[i][j]);
            printf("\n");
        }
        printf("Elements of the second array:\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
                printf("%d ", b[i][j]);
            printf("\n");
        }
        break;
    default:
        printf("Invalid choice!");
    }
}