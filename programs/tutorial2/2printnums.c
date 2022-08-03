#include <stdio.h>
void main()
{
    printf("Integer number: %d, Size: %d\n", 5, sizeof(5));
    printf("Floating-point number: %f, Size: %d\n", 5.0, sizeof(5.0));
    printf("Character: %c, Size: %d\n", 'a', sizeof('a'));
}