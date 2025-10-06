//Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int n, original, rev = 0, digit;

    
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;  

    while (n != 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if (rev == original) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
