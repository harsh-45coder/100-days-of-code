//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int n, digit;
    long long product = 1;  
    int found = 0;          

    printf("Enter a number: ");
    scanf("%d", &n);

    int original = n;

    if (n == 0) {
        printf("No odd digits in %d. Product = 0\n", n);
        return 0;
    }

    if (n < 0) n = -n;  

    while (n != 0) {
        digit = n % 10;
        if (digit % 2 != 0) { 
            product *= digit;
            found = 1;
        }
        n = n / 10;
    }

    if (found)
        printf("Product of odd digits of %d = %lld\n", original, product);
    else
        printf("No odd digits in %d. Product = 0\n", original);

    return 0;
}
