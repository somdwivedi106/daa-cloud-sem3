#include <stdio.h>
#include <time.h>

int main() {
    int a[10];
    int i, j, t;
    clock_t start, end;
    double time;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    start = clock();

    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9 - i; j++) {

            if(a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            
            }

        }
    }

    end = clock();

    time = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nSorted numbers:\n");

    for(i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    printf("\nTime taken: %f seconds\n", time);

    return 0;
} 