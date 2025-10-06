//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, middle, new_number;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) n = -n;

    last = n % 10;

    digits = (int)log10(n);
    first = n / pow(10, digits);

    middle = n % (int)pow(10, digits);  
    middle = middle / 10;             

    new_number = last * pow(10, digits) + middle * 10 + first;

    printf("Number after swapping first and last digit = %d\n", new_number);

    return 0;
}
