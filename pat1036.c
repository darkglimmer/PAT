#include <stdio.h>

int main() {
    int N;
    int n;
    int i,j;
    char C;
    scanf("%d%s",&N,&C);
    if(N>=3&&N<=20) {
        n = (double)N / 2 + 0.5;
        for(i = 0; i < n; i++){
            for(j = 0; j < N; j++){
                if(i == 0 || i == n - 1)
                    printf("%c",C);
                else if(j == 0 || j == N-1)
                    printf("%c",C);
                else printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}