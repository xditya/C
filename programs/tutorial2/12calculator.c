#include <stdio.h>
void main()
{
    printf("Available operations: \n1. *\n2. /\n3. +\n4. -\n5. mod\n\nEnter your choice number: ");
    int ch;
    scanf("%d", &ch);
    printf("Enter two numbers: \n");
    int a, b, res;
    scanf("%d\n%d", &a, &b);
    switch (ch)
    {
    case 1:
        res = a * b;
        break;
    case 2:
        res = a / b;
        break;
    case 3:
        res = a + b;
        break;
    case 4:
        res = a - b;
        break;
    case 5:
        res = a % b;
        break;
    default:
        printf("Wrong choice!");
        return;
    }
    printf("Result = %d", res);
}