#include <stdio.h>

struct Structure
{
    int a;
    char b;
};

union Union
{
    int a;
    char ch;
};

void main()
{
    union Union un;
    struct Structure st;
    printf("SizeOf Union = %d\nSizeOf Struct = %d\n", sizeof(un), sizeof(st));
}