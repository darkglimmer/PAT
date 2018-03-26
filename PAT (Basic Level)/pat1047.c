#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int a[10001]={0},b[10001]={0},c[10001]={0};
    for(int i=0;i<N;i++){
        scanf("%d-%d %d",&a[i],&b[i],&c[i]);
        for(int j=0;j<i;j++){
            if(a[j]==a[i]){
                c[j]+=c[i];
                c[i]=0;
            }
        }
    }
    int max=0,k=a[0];
    for(int i=0;i<N;i++){
        if(c[i]>max){
            max=c[i];
            k=a[i];
        }
    }
    printf("%d %d",k,max);
    return 0;
}