#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    float root1, root2, img, disc;
    printf("Enter value of 'a' of quadratic equation (aX^2 + bX + c): ");
    scanf("%f", &a);
    printf("Enter value of 'b' of quadratic equation (aX^2 + bX + c): ");
    scanf("%f", &b);
    printf("Enter values of 'c' of quadratic equation (aX^2 + bX + c): ");
    scanf("%f", &c);
    disc = (b * b) - (4 * a * c);
    switch (disc > 0)
    {
    case 1:
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("Two distinct and real roots exists: %.2f and %.2f",
               root1, root2);
        break;
    case 0:
        switch (disc < 0)
        {
        case 1:
            root1 = root2 = -b / (2 * a);
            img = sqrt(-disc) / (2 * a);
            printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
                   root1, img, root2, img);
            break;
        case 0:
            // If disc is zero
            root1 = root2 = -b / (2 * a);
            printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
            break;
        }
    }
    return 0;
}