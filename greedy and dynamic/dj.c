#include <stdio.h>

int main() {
    int n, a[20][20], dist[20], visited[20] = {0};
    int src, min, u;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    scanf("%d", &src);

    for(int i = 0; i < n; i++)
        dist[i] = 9999;

    dist[src] = 0;

    for(int k = 0; k < n; k++) {
        min = 9999;
        u = -1;

        for(int i = 0; i < n; i++) {
            if(!visited[i] && dist[i] < min) {
                min = dist[i];
                u = i;
            }
        }

        if(u == -1) break;

        visited[u] = 1;

        for(int v = 0; v < n; v++) {
            if(!visited[v] && a[u][v] > 0 &&
               dist[u] + a[u][v] < dist[v]) {
                dist[v] = dist[u] + a[u][v];
            }
        }
    }

    for(int i = 0; i < n; i++)
        printf("Distance to %d = %d\n", i, dist[i]);

    return 0;
}