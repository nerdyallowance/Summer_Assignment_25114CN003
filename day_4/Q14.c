#include <stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 1, nextTerm;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("Nth Fibonacci term = %d", t1);
    }
    else if (n == 2) {
        printf("Nth Fibonacci term = %d", t2);
    }
    else {
        for (i = 3; i <= n; i++) {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("Nth Fibonacci term = %d", t2);
    }
    return 0;
}
