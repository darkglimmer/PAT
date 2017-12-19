#include <math.h>
#include <stdio.h>
int main() {
    int M, N;
    int n,i,no;
    int count=0;
    int b[10000];
    scanf("%d%d", &M, &N);
    for(n = 2; count < N; n++) {
        no = 1;
        for(int j = 0; count > 0 && b[j] <= sqrt(n); j++) {
            if (n % b[j] == 0) {
                no = 0;
            }
        }
        if(no) {
            b[count++] = n;
        }
    }

    for(i = M; i < N; i++) {
        if ((i - M + 1) % 10 == 0) {
            printf("%d\n", b[i]);
        }
        else {
            printf("%d ", b[i]);
        }
    }
    printf("%d", b[N - 1]);

    return 0;
}
