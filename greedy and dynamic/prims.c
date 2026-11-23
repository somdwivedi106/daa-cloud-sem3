#include <stdio.h>

int main() {
    int n, a[20][20], visited[20] = {0};
    int cost = 0, min, x, y;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    visited[0] = 1;

    for(int k = 0; k < n-1; k++) {
        min = 9999;

        for(int i = 0; i < n; i++) {
            if(visited[i]) {
                for(int j = 0; j < n; j++) {
                    if(!visited[j] && a[i][j] != 0 &&
                       a[i][j] < min) {
                        min = a[i][j];
                        x = i;
                        y = j;
                    }
                }
            }
        }

        if(min == 9999) {
            printf("Graph is disconnected");
            return 0;
        }

        printf("%d - %d : %d\n", x, y, min);
        cost += min;
        visited[y] = 1;
    }

    printf("MST Cost = %d", cost);
    return 0;
}