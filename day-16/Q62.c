#include <stdio.h>

int findMaxFrequency(int arr[], int n) {
    int maxCount = 0, element = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) count++;
        }
        if (count > maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }
    return element;
}

int main() {
    int arr[] = { 1, 3, 2, 3, 4, 3, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Max frequency element: %d\n", findMaxFrequency(arr, n));
    return 0;
}
