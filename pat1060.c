#include <stdio.h>

int main() {
    int n,i,j;
    int a[100000];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int e=0;
    for(i=n;i>0;i--){
        int k=0;
        for(j=1;j<=n;j++){
            if(a[j]>i){
                k++;
            }
        }
        if(k==i){
            e=1;
            printf("%d",i);
            break;
        }
    }
    if(e==0){
        printf("0");
    }
    return 0;
}