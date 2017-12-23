#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d", &n);
    do {
        int nums[10] = {0};
        int k = 4;
        while (n) {
            ++nums[n % 10];
            n /= 10;
            --k;
        }
        //如果k大于0，说明数字前导的0未算进去
        if (k > 0) {
            nums[0] += k;
        }
        int a = 0;
        for (int i = 9; i >= 0; --i) {
            for (int j = 0; j < nums[i]; ++j) {
                a = a * 10 + i;
            }
        }
        int b = 0;
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < nums[i]; ++j) {
                b = b * 10 + i;
            }
        }
        n = a - b;
        printf("%.4d - %.4d = %.4d\n", a, b, n);
    } while (n != 6174 && n != 0);

    return 0;
}