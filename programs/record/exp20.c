#include <stdio.h>
#include <string.h>

void main()
{
    FILE *fp;
    char ch[100], data[100];
    printf("Enter contents to add in file: ");
    gets(ch);
    fp = fopen("out.txt", "w");
    fprintf(fp, "%s", ch);
    fclose(fp);

    fp = fopen("out.txt", "r");
    printf("Reading data: \n");
    fgets(data, strlen(ch) + 1, fp);
    printf("%s", data);
    fclose(fp);

    fp = fopen("out.txt", "a");
    printf("\nAppending to file: ");
    printf("\nEnter data: ");
    gets(ch);
    fprintf(fp, "%s", ch);
    fclose(fp);

    fp = fopen("out.txt", "r");
    printf("Reading final data: \n");
    fgets(data, 2 * (strlen(ch) + 1), fp);
    printf("%s", data);
    fclose(fp);
}