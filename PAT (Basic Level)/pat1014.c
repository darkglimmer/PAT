#include <stdio.h>
#include <string.h>
int main() {
    int i, j;
    char a[5][61];
    for (i = 1; i <= 4; i++) {
        scanf("%s", a[i]);
    }
    int k = 0;
    for (i = 0; i < strlen(a[1]) && i < strlen(a[2]); i++) {
        if (k == 0 && a[1][i] == a[2][i] && a[1][i] >= 'A' && a[1][i] <= 'G') {
            switch (a[1][i]) {
                case 'A':
                    printf("MON ");
                    break;
                case 'B':
                    printf("TUS ");
                    break;
                case 'C':
                    printf("WED ");
                    break;
                case 'D':
                    printf("THU ");
                    break;
                case 'E':
                    printf("FRI ");
                    break;
                case 'F':
                    printf("SAT ");
                    break;
                case 'G':
                    printf("SUN ");
                    break;
            }
            k++;
        }
        if (k == 2 && a[1][i] == a[2][i] &&
            ((a[1][i] >= 'A' && a[1][i] <= 'N') || (a[1][i] >= '0' && a[1][i] <= '9'))) {
            if (a[1][i] >= 'A' && a[1][i] <= 'N') {
                printf("%02d:", a[1][i] - 'A' + 10);
                k++;
            } else {
                printf("%02d:", a[1][i] - '0');
                k++;
            }
        }
        if (k == 1) {
            k++;
        }
    }
    for (i = 0; i < strlen(a[3]); i++) {
        for (j = 0; j < strlen(a[4]); j++) {
            if (a[3][i] == a[4][j] && i == j &&
                ((a[3][i] >= 'a' && a[3][i] <= 'z') || (a[3][i] >= 'A' && a[3][i] <= 'Z'))) {
                printf("%02d", i);
            }
        }
    }
    return 0;
}