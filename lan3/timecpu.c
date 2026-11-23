#include <time.h>

int main()
{
    clock_t start, end;
    double CPU_Time_used;

    start = clock();

    // Code whose execution time you want to measure
    // Example:
    // insertion_sort(arr, n);

    end = clock();

    CPU_Time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("CPU time used = %f seconds", CPU_Time_used);

    return 0;
}