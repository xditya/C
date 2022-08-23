#include <stdio.h>
#include <string.h>
void main()
{
    char a[100];
    int ct1 = 0, ct2 = 0, ct3 = 0, c = 0;
    printf("enter the string\n");
    scanf("%[^\n]s", a);
    int l = strlen(a);
    if (a[l - 1] == '$')
    {
        for (int i = 0; a[i] != '$'; i++)
            if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' || a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
                ct1++;
            else if (a[i] == '$')
                c++;
            else if (a[i] == ' ')
                ct2++;
            else
                ct3++;
        printf("The number of vowels is %d\n", ct1);
        printf("The number of space is %d\n", ct2);
        printf("The number of consonents is %d\n", ct3);
    }
    else
        printf("the string doesn't end with $");
}