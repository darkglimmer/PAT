#include <stdio.h>

int main() {
    char N, a[1001];
    scanf("%s", &N);
     if (N == 'C') {
         getchar();
         fgets(a, 1100, stdin);
         int i = 0;
         while (a[i]) {
             int m = 0;
             if (a[i] == a[i + 1]) {
                 m += 2;
                 while (a[i + 1] == a[i + 2]) {
                     m++;
                     i++;
                 }
                 printf("%d%c", m, a[i]);
                 i += 2;
             } else {
                 printf("%c", a[i]);
                 i++;
             }
         }
     }
    if (N == 'D') {
        getchar();
        fgets(a, 1100, stdin);
        int i = 0;
        while (a[i]) {
            if (a[i] >= '1' && a[i] <= '9') {
                int m = 1;
                int sum = a[i] - '0';
                while (a[i + 1] >= '0' && a[i + 1] <= '9') {
                    sum = sum * 10 + (a[i + 1] - '0');
                    m++;
                    i++;
                }
                for (int e = 0; e < sum; e++) {
                    printf("%c", a[i + 1]);
                }
                i += (m + 1);
            } else {
                printf("%c", a[i]);
                i++;
            }
        }
    }
    return 0;
}