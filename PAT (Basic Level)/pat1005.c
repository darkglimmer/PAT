#include <stdio.h>

int main() {
    int K;
    scanf("%d",&K);
    int a[100]={0};
    int b[1000]={0};
    int s[100];
    int i,j;
    int t=0;
    for (i = 0; i < K; ++i) {
        scanf("%d", &a[i]);
        s[i]=a[i];
    }
    for (i = 0; i < K; ++i) {
        while (a[i] != 1){
            if (a[i] % 2 == 0) {
                a[i] /= 2;
                b[t]=a[i];
                t++;
            } else {
                a[i] = (3 * a[i] + 1) / 2;
                b[t]=a[i];
                t++;
            }
        }
    }
    int c[100]={0};
    for(i=0;i<K;i++){
        for(j=0;j<t;j++){
            if(s[i]==b[j]){
                c[i]=1;
            }
        }
    }
    int d[100]={0};
    int e=0;
    for(i=0;i<K;i++){
        if(c[i]==0){
            d[e]=s[i];
            e++;
        }
    }
    for(i = e-1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            int tmp;
            if (d[j] < d[j + 1]) {
                tmp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = tmp;
            }
        }
    }
    for(i=0;i<e;i++){
        if(i<e-1){
            printf("%d ",d[i]);
        } else{
            printf("%d",d[i]);
        }
    }
    return 0;
}