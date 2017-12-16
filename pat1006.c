#include <stdio.h>

int main() {
    int n;
    int a,b,c;
    int i;
    scanf("%d",&n);
    if(n<1000) {
        a = n / 100;
        for(i = 0; i < a; i++) {
            printf("B");
        }
        b = n / 10 % 10;
        for(i = 0; i < b; i++){
            printf("S");
        }
        c = n % 10;
        for(i = 0; i < c; i++) {
            printf("%d", i + 1);
        }
    }
    return 0;
}