#include <stdio.h>

struct Numbers
{
    int real, img;
};

void main()
{
    struct Numbers num1, num2, sum;
    printf("Enter real and imaginary part of the first number: \n");
    scanf("%d\n%d", &num1.real, &num1.img);
    printf("Enter real and imaginary part of the second number: \n");
    scanf("%d\n%d", &num2.real, &num2.img);
    sum.real = num1.real + num2.real;
    sum.img = num1.img + num2.img;
    printf("\nSum = %d + i%d\n", sum.real, sum.img);
}