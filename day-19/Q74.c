#include <stdio.h>

int main() {
    int r, c, i, j;
    int A[10][10], B[10][10], Diff[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &B[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            Diff[i][j] = A[i][j] - B[i][j];

    printf("Difference of matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", Diff[i][j]);
        printf("\n");
    }

    return 0;
}
