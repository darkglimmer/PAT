#include <stdio.h>

int main(){
    int N;
    int i;
    double a[100001]={0};
    double sum=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%lf",&a[i]);
    }
    for(i=0;i<N;i++) {
        sum+=(double)(N-i)*(double)(i+1)*a[i];//一个数字能在排列组合中出现几次**
    }
    printf("%.2lf",sum);
    return 0;
}