#include <stdio.h>

void removeDuplicates(int arr[], int n) {
    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) break;
        }
        if (i == j) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = { 1, 2, 2, 3, 4, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    removeDuplicates(arr, n);
    return 0;
}
