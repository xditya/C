#include <stdio.h>
int main() {
    int arr[100], n, i, j, temp;
    printf("Please Enter the total Number of Elements  :  ");
    scanf("%d", &n);
    printf("Please Enter the Array Elements  :  ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(i = 1; i <= n - 1; i++) {
        for(j = i; j > 0 && arr[j - 1] > arr[j]; j--)
        {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
        }
    }
    printf("Insertion Sort Result : ");
    for(i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}