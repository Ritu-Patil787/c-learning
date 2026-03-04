#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Step 1: Ask user for size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 2: Allocate memory dynamically
    int *arr = (int*)malloc(n * sizeof(int));

    // Check if memory allocated
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Step 3: Input values
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 4: Print array
    printf("You entered:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Step 5: Free memory
    free(arr);

    return 0;
}
