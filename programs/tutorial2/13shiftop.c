#include <stdio.h>
void main()
{
    int n, s, ch, res;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter number of positions to shift: ");
    scanf("%d", &s);
    printf("Options: \n1. >>\n2. <<\n\nEnter choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        res = n >> s;
        break;
    case 2:
        res = n << s;
        break;
    default:
        printf("Wrong choice!");
        return;
    }
    printf("Result = %d", res);
}