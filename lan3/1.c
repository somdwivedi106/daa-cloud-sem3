#include <stdio.h>

#define MAX_SIZE 10

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;


        printf("Pass %d (inserted %d): ", i, key);
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int n;

    printf("Insertion Sort \n");
    printf("Enter the number of elements (1 to 10): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_SIZE) {
        printf("Invalid input! Number of elements must be between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal Array: ");
    printArray(arr, n);

    printf("\n--- Sorting Passes ---\n");
    insertionSort(arr, n);

    printf("\nFinal Sorted Array: ");
    printArray(arr, n);

    return 0;
}