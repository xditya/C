#include <stdio.h>

struct st
{
    int x;
};

union sample
{
    int m;
};

void main()
{
    printf("The size of struct = %d\n", sizeof(struct st));
    printf("The size of union = %d\n", sizeof(union sample));
}