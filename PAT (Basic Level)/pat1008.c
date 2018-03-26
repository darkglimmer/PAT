#include <stdio.h>

int main() {
    int N,M;
    int i;
    int a[101]={0};
    scanf("%d%d",&N,&M);
    M=M%N;
    for (i = 0; i < N; ++i) {
        if(i<N-M){
            scanf("%d",&a[i+M]);
        }
        else{
            scanf("%d",&a[i-N+M]);
        }
    }
    for(i=0;i<N;i++){
        if(i<N-1){
            printf("%d ",a[i]);
        }
        else{
            printf("%d",a[i]);
        }
    }
    return 0;
}
