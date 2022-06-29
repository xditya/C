#include <stdio.h>
void main()
{
    printf("Enter three numbers:\n");
    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    printf("The average is %d", (a + b + c) / 3);
}