#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int i, l, tmp = 0;
    printf("Enter a string:");
    scanf("%s", str);
    l = strlen(str);
    for (i = 0; i < l; i++)
    {
        if (str[i] != str[l - i - 1])
        {
            tmp = 1;
            break;
        }
    }

    if (tmp == 0)
    {
        printf("String is a palindrome");
    }
    else
    {
        printf("String is not a palindrome");
    }
    return 0;
}
