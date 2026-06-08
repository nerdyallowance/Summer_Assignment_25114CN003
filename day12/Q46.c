#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num, n = 0, remainder;
    double result = 0.0;

    while (original != 0) {
        original /= 10;
        n++;
    }

    original = num;
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    return ((int)result == num);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is an Armstrong number", n);
    else
        printf("%d is not an Armstrong number", n);

    return 0;
}

