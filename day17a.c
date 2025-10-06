//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, digit, sum = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;


    int temp = n;
    while (temp != 0) {
        count++;
        temp = temp / 10;
    }

  
    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp = temp / 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
