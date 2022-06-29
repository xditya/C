#include <stdio.h>
void main()
{
    printf("Enter two numbers \(floating-point\): \n");
    float a, b;
    scanf("%f\n%f", &a, &b);
    printf("%f X %f = %f", a, b, a * b);
}