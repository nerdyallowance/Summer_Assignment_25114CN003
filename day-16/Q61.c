#include <stdio.h>

int findMissing(int arr[], int n) {
    int total = n * (n + 1) / 2;  // Sum of first n natural numbers
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }
    return total - sum;
}

int main() {
    int arr[] = { 1, 2, 4, 5, 6 }; // Missing 3
    int n = 6;
    printf("Missing number: %d\n", findMissing(arr, n));
    return 0;
}
