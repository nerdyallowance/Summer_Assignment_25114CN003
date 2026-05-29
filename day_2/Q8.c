#include <stdio.h>

int main() {
    int num, original, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    if (rev == original)
        printf("The number is a palindrome");
    else
        printf("The number is not a palindrome");

    return 0;
}
