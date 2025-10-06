//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main(void) {
    int n, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    int original = n;  
    while (n != 0) {
        digit = n % 10;  
        sum += digit;   
        n = n / 10;      
    }

    printf("Sum of digits of %d = %d\n", original, sum);

    return 0;
}
