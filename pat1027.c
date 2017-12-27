#include <stdio.h>

int main() {
    int N;
    char a;
    scanf("%d %c", &N, &a);
    if (N == 1) {
        printf("%c\n0\n", a);
        return 0;
    }
    int rest = N, max = 0;
    for (int i = 1; rest >= 2 * i; i += 2) {
        if (i == 1) {
            rest -= i;
        } else {
            rest -= (2 * i);
            max = i;
        }
    }
    if (N > 1 && N < 7) {
        printf("%c\n", a);
    }
    int blank = 0;
    for (int j = max; j > 0; j -= 2, ++blank) {
        for (int k = 0; k < blank; ++k) {
            printf("%c", ' ');
        }
        for (int l = 0; l < j; ++l) {
            printf("%c", a);
        }
        printf("\n");
    }
    blank -= 2;
    for (int m = 3; blank >= 0; --blank, m += 2) {
        for (int n = 0; n < blank; ++n) {
            printf("%c", ' ');
        }
        for (int o = 0; o < m; ++o) {
            printf("%c", a);
        }
        printf("\n");
    }
    printf("%d\n", rest);
    return 0;
}