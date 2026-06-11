#include <stdio.h>

int main() {
    int n, i, arr[100], temp[100], index = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] != 0)
            temp[index++] = arr[i];
    }

    while (index < n)
        temp[index++] = 0;

    printf("Array after moving zeroes to end:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}
