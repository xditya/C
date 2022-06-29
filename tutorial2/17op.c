#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d\n%d", &a, &b);
    // 11 &amp; 8, 10 | 2, 5^6
    printf("%d & %d = %d\n", a, b, a & b);
    printf("%d | %d = %d\n", a, b, a | b);
    printf("%d ^ %d = %d\n", a, b, a ^ b);
}