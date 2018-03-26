#include <stdio.h>

int main() {
    int a, b, sum, z = 0, tmp = 0;
    int c[5] = {0};

    scanf("%d %d", &a, &b);
    sum = a + b;
    if (sum < 0) {
        printf("-");
        sum = -sum;
    }
    if (sum == 0) {
        printf("0");
        return 0;
    }
//    if(sum>=1000000)
//        printf("%d,%03d,%03d\n",sum/1000000, (sum/1000)%1000, sum%1000);
//    else if(sum >= 1000)
//        printf("%d,%03d\n",sum/1000,sum%1000);
//    else
//        printf("%d\n", sum);
    int i = 0;
    while (sum > 0) {
        c[i] = sum % 1000;
        sum /= 1000;
        i++;
    }
    for (int j = (i - 1); j >= 0; j--) {
        if (j == (i - 1)) {
            printf("%d", c[j]);
        } else {
            printf(",%03d", c[j]);
        }
    }
}