#include <stdio.h>

int isPrime(int n) {
    int i;
    if (n <= 1) return 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    long long num;
    int i, largest = -1;

    printf("Enter a number: ");
    scanf("%lld", &num);

    for (i = 2; i <= num; i++) {
        if (num % i == 0 && isPrime(i)) {
            largest = i;
        }
    }

    if (largest != -1)
        printf("Largest Prime Factor = %d", largest);
    else
        printf("No prime factors found.");

    return 0;
}

