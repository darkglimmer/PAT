#include <stdio.h>

int main() {
    int M,N;
    int A,B;
    int T;
    int a[500];
    scanf("%d%d%d%d%d",&M,&N,&A,&B,&T);
    while(M--){
        for(int i=0;i<N;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<N;i++){
            if(i==(N-1)){
                if(a[i]>=A&&a[i]<=B){
                    printf("%03d",T);
                }
                else{
                    printf("%03d",a[i]);
                }
            }
            else{
                if(a[i]>=A&&a[i]<=B){
                    printf("%03d ",T);
                }
                else{
                    printf("%03d ",a[i]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}