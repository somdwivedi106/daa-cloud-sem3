#include <stdio.h>
#include <time.h>

int main()
{
    int a[100], n, i, j;
    int sum, max, min, count, s;
    clock_t start, end;

    // Read array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // 1. Read and Display Array
    printf("\n1. Array elements are:\n");

    start = clock();

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    end = clock();

    printf("\nStart time = %ld\n", start);
    printf("End time = %ld\n", end);
    printf("Time taken = %f seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);
    printf("Time Complexity = O(n)\n");