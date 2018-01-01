#include <stdio.h>

int main() {
    int n;
    int i, j;
    int score[1000];
    int findscore[1000];
    int m;
    int match[1000]={0};
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d",&score[i]);
    }
    scanf("%d", &m);
    for(i=0; i<m; i++) {
        scanf("%d", &findscore[i]);
    }
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            if (findscore[i] == score[j])
                match[i]++;
        }
        if (i != m-1)
            printf("%d ",match[i]);
        else
            printf("%d",match[i]);
    }
    return 0;
}