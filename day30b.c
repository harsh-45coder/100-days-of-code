//Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int n;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Positive numbers = %d\n", positiveCount);
    printf("Negative numbers = %d\n", negativeCount);
    printf("Zeros = %d\n", zeroCount);

    return 0;
}
