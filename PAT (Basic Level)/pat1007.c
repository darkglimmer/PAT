#include <stdio.h>
#include <math.h>
int main() {
    int N;
    int a[100000] = {0};
    int k = 2, i, j, m, count = 0;
    scanf("%d", &N);
    a[0] = 2;
    a[1] = 3;//要把2，3单独取的原因是2，3开方为1，i%j==0
    for (i = 5; i <= N; i += 2) {
        m = sqrt(i);
        for (j = 2; j <= m; j++) {
            if (i % j == 0) {
                break;
            }
            if (j == m) {
                a[k] = i;
                k++;
            }
        }
    }
    for (i = 0; i < k; i++) {
        if ((a[i + 1] - a[i]) == 2) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}