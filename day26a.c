//Write a program to print the following pattern:
  //5
  //5
 //45
//2345
//12345
#include <stdio.h>

int main() {
    int n = 5;  // number of rows
    
    for (int i = 0; i < n; i++) {
        // print spaces
        for (int s = 0; s < n - i - 1; s++) {
            printf(" ");
        }

        // print numbers
        for (int j = n - i; j <= n; j++) {
            printf("%d", j);
        }

        printf("\n"); // move to next line
    }

    return 0;
}
