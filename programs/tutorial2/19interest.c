#include <stdio.h>
#include <math.h>

void main()
{
    float p, t, r, si, ci;
    printf("Enter principal amount (p): ");
    scanf("%f", &p);
    printf("Enter time in year (t): ");
    scanf("%f", &t);
    printf("Enter rate in percent (r): ");
    scanf("%f", &r);

    int ch;
    printf("Options:\n1. Simple interest.\n2. Compound interest. \n\nEnter choice number: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        si = (p * t * r) / 100.0;
        printf("Simple Interest = %f\n", si);
        break;
    case 2:
        ci = p * (pow(1 + r / 100, t) - 1);
        printf("Compound Interest = %f", ci);
        break;
    default:
        printf("Wrong choice!\n");
        return;
    }
}