//Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int n, search, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

   
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the element to search: ");
    scanf("%d", &search);

    // Linear search
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element %d found at position %d.\n", search, i + 1);
            found = 1;
            break; 
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}
