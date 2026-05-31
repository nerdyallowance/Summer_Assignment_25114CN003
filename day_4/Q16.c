#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, original, remainder, n, i;
    double result;

    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are: ", start, end);

    for (num = start; num <= end; num++) {
        original = num;
        n = 0;
        result = 0.0;

        // Count digits
        while (original != 0) {
            original /= 10;
            n++;
        }

        original = num;

        // Compute sum of powers
        while (original != 0) {
            remainder = original % 10;
            result += pow(remainder, n);
            original /= 10;
        }

        if ((int)result == num)
            printf("%d ", num);
    }

    return 0;
}
