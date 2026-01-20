#include <stdio.h>

int main() {
    int n;

    // User input for array size
    printf("Enter the number of elements (max 10): ");
    scanf("%d", &n);

    if(n > 10 || n <= 0){
        printf("Invalid size!\n");
        return 0;
    }

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Display array elements
    printf("Array elements are: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
