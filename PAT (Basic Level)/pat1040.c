#include <stdio.h>
#include <string.h>
int main() {
    char a[10001];
    int i;
    long long countP = 0, countPA = 0, countPAT = 0;
    scanf("%s", a);
    for (i = 0; i < strlen(a); i++) {
        if (a[i] == 'P') {
            ++countP;
        } else if (a[i] == 'A') {
            countPA += countP;
        } else if (a[i] == 'T') {
            countPAT += countPA;
        }
    }
    printf("%lld", countPAT % 1000000007);
    return 0;
}