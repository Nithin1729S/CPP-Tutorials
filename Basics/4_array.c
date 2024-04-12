#include <stdio.h>
#define SIZE 100

int main() {
    int arr[SIZE];
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the %d elements of array: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Elements of the array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    int ele;
    int pos;
    printf("\nEnter the element and position for it to be inserted: ");
    scanf("%d %d", &ele, &pos);

    if (pos > 0 && pos <= n + 1) {
        int i;
        for (i = n; i >= pos; i--) arr[i] = arr[i - 1];
        arr[i] = ele;
        n++;  
    } else {
        printf("Invalid Position.");
    }

    printf("\nElements of the array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
