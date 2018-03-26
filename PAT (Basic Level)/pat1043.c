#include <stdio.h>

int main() {
    char s[10001];
    char  PATest[6] = { 'P', 'A', 'T', 'e', 's', 't' };
    int i, j, c[6] = {0};
    scanf("%s",s);
    for (i = 0; s[i] != '\0'; i++){
        switch (s[i]) {
            case 'P': c[0]++;
                break;
            case 'A': c[1]++;
                break;
            case 'T': c[2]++;
                break;
            case 'e': c[3]++;
                break;
            case 's': c[4]++;
                break;
            case 't': c[5]++;
                break;
        }
    }
    while (c[0] || c[1] || c[2] || c[3] || c[4] || c[5]){
        for (i = 0; i < 6; i++){
            if (c[i]!=0){
                printf("%c", PATest[i]);
                c[i]--;
            }
        }
    }
    return 0;
}