//Find the sum of array elements.
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // declare array

    // Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Output sum
    printf("The sum of array elements is: %d\n", sum);

    return 0;
}
