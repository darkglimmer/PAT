#include <stdio.h>
#include <string.h>
int main() {
    char a[80];
    while (gets(a)) {
        for (int i = strlen(a) - 1; i >= 0; i--) {
            if (a[i] == ' ') {
                for (int j = i + 1; a[j] != ' ' && a[j] != '\0'; j++) {
                    printf("%c", a[j]);
                }
                printf(" ");
            }
        }
        for (int i = 0; a[i] != ' ' && a[i] != '\0'; i++) {
            printf("%c", a[i]);
        }
    }
    return 0;
}