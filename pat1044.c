#include <stdio.h>
#include <string.h>
int main() {
    int n;
    int i, j;
    int c[100];
    char a[20][20] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    char b[20][20] = {"tret", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou",};
    char s[1000][169];
    char str1[20];
    char str2[20];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", s[i]);
        getchar();
    }
    for (i = 0; i < n; i++) {
        int k = 0;
        int q = 0;
        int num = 0;
        if (s[i][0] == '0') {
            printf("tret\n");
        } else if (s[i][0] > '0' && s[i][0] <= '9') {
            for (j = 0; j < strlen(s[i]); j++) {
                k = k * 10 + (s[i][j] - '0');
            }
            if (k < 13) {
                printf("%s\n", a[k]);
            } else {
                while (k > 0) {
                    c[q] = k % 13;
                    k = k / 13;
                    q++;
                }
                for (int e = q - 1; e >= 0; e--) {
                    if (e > 0) {
                        printf("%s ", b[c[e]]);
                    } else {
                        printf("%s\n", a[c[e]]);
                    }
                }
            }
        } else if (strlen(s[i]) <= 4 && s[i][0] >= 'a' && s[i][0] <= 'z') {
            sscanf(s[i], "%s", str1);
            for (j = 0; j < 13; ++j) {
                if (str1 == b[j]) {
                    printf("%d\n", j);
                    break;
                } else if (str1 == a[j]) {
                    printf("%d\n", j * 13);
                    break;
                }
            }
        } else if (strlen(s[i]) >= 6) {
            sscanf(s[i], "%s %s", str1, str2);
            printf("%s %s",str1,str2);
            for (j = 0; j < 13; j++) {
                if (str1 == b[j]) {
                    num += j * 13;
                }
            }
            for (j = 0; j < 13; j++) {
                if (str2 == a[j]) {
                    num += j;
                }
            }
            printf("%d\n", num);
        }
    }
    return 0;
}