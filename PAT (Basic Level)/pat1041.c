#include <stdio.h>

int main() {
    int N, M;
    int i, j, n;
    scanf("%d", &N);
    long long a[N];
    int b[N], c[N];

    for (i = 0; i < N; i++) {
        scanf("%lld%d%d", &a[i], &b[i], &c[i]);
    }
    scanf("%d", &M);
    for (j = 0; j < M; j++) {
        scanf("%d", &n);
        for (i = 0; i < N; i++) {
            if (b[i] == n) {
                printf("%lld %d\n", a[i], c[i]);
            }
        }
    }
    return 0;
}