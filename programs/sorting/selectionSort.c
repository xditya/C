#include <stdio.h>
int main() {
    int arr[100], n, i, j, temp;
    printf("Please Enter the total Number of Elements:  ");
    scanf("%d", &n);
    printf("Please Enter the Array Elements:  ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nSelection Sort Result: ");
    for(i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}