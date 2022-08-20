#include <stdio.h>

void main()
{
    int n;
    FILE *fp;
    fp = fopen("Input.txt", "r");
    if (fp == NULL)
    {
        printf("File Input.txt does not exist!");
        return;
    }
    fscanf(fp, "%d", &n);
    fclose(fp);
    fp = fopen("Output.txt", "w");
    if (n % 2 == 0)
        fprintf(fp, "%s", "Even");
    else
        fprintf(fp, "%s", "Odd");
    fclose(fp);
}