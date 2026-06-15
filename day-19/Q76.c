#include <stdio.h>

int main() {
    int n, i;
    int A[10][10], sum = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    for (i = 0; i < n; i++)
        sum += A[i][i];   // main diagonal

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}
