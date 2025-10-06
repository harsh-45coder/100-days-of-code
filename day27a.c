//Write a program to print the following pattern:

#include <stdio.h>

int main() {
    int n = 5; 
    // Top half
    for (int i = 0; i < n; i++) {
        int stars = 2 * i + 1;
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

 
    for (int i = n - 2; i >= 0; i--) {
        int stars = 2 * i + 1;
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
