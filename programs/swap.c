// swap without a third var

#include <stdio.h>
void main()
{
    int a = 5, b = 6;
    printf("\na = %d\nb = %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\na = %d\nb = %d", a, b);
}