#include <stdio.h>

int main() {
    int n, m, i, j, t;
    int k[101] = {0}, sum[101] = {0};
    double a[110] = {0};
    double sth;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++) {
        int other = 0;
        int max = 0, min = 100;
        int e = 0;
        scanf("%d",&t);
        for (j = 0; j < n - 1; j++) {
            scanf("%d", &k[j]);
            if (k[j] >= 0 && k[j] <= m) {
                other += k[j];
                e++;
                if (max < k[j]) {
                    max = k[j];
                }
                if (min > k[j]) {
                    min = k[j];
                }
            }
        }
        other = other - min - max;
        sth = (double)other / (e - 2);
        sum[i] = (int) ((t + sth) / 2 + 0.5);
    }
    for (i = 0; i < n; i++) {
        printf("%d\n", sum[i]);
    }
    return 0;
}