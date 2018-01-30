#include <stdio.h>

int main() {
    int n,m,i,j;
    int k[101]={0},sum[101]={0};
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        double other=0;
        int max=0,min=100;
        int e=0;
        for(j=0;j<n;j++){
            scanf("%d",&k[j]);
            if(j>0){
                if(k[j]>=0&&k[j]<=m){
                    other+=k[j];
                    e++;
                    if(max<k[j]){
                        max=k[j];
                    }
                    if(min>k[j]){
                        min=k[j];
                    }
                }
            }
        }
        other=(other-min-max)/(e-2)+0.5;
        sum[i]=(int)((k[0]+other)/2+0.5);
    }
    for(i=0;i<n;i++){
        printf("%d\n",sum[i]);
    }
    return 0;
}