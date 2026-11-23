#include <stdio.h>

int main() {
    int n, W, p[20], w[20];
    float r[20], profit = 0, temp;

    scanf("%d%d", &n, &W);

    for(int i = 0; i < n; i++) {
        scanf("%d%d", &p[i], &w[i]);
        r[i] = (float)p[i] / w[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(r[i] < r[j]) {
                temp = r[i]; r[i] = r[j]; r[j] = temp;
                int t = p[i]; p[i] = p[j]; p[j] = t;
                t = w[i]; w[i] = w[j]; w[j] = t;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        if(w[i] <= W) {
            profit += p[i];
            W -= w[i];
        }
        else {
            profit += r[i] * W;
            break;
        }
    }

    printf("Maximum Profit = %.2f", profit);
    return 0;
}