#include <stdio.h>

int main() {
    int n, s[20], f[20], t;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d%d", &s[i], &f[i]);

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(f[i] > f[j]) {
                t = f[i]; f[i] = f[j]; f[j] = t;
                t = s[i]; s[i] = s[j]; s[j] = t;
            }
        }
    }

    int last = -1;

    printf("Selected Activities: ");

    for(int i = 0; i < n; i++) {
        if(s[i] >= last) {
            printf("(%d,%d) ", s[i], f[i]);
            last = f[i];
        }
    }

    return 0;
}