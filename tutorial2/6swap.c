#include <stdio.h>
void main()
{
    int a = 5, b = 6;
    printf("Before swapping.\na = %d\nb = %d\n\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping.\na = %d\nb = %d\n\n", a, b);
}