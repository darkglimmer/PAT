#include <stdio.h>

int main() {
    int N;
    int a[10]={0};
    int i,j;
    int n=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(a[j]!=a[i]){
                n+=(a[i]*10+a[j]);
            }
        }
    }
    printf("%d",n);
    return 0;
}