#include <stdio.h>

int main() {
    int N,D;
    int i,j;
    double sum=0;
    double a[1001]={0},b[1001]={0};
    scanf("%d%d",&N,&D);
    for(i=0;i<N;i++){
        scanf("%lf",&a[i]);
    }
    for(i=0;i<N;i++){
        scanf("%lf",&b[i]);
    }
    for(i=0;i<N;i++){
        double max=b[i]/a[i];
        for(j=i+1;j<N;j++){
            if((b[j]/a[j])>max){
                max=b[j]/a[j];
                double tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
                double temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
        if(D==0){
            break;
        }else{
            if(D>a[i]){
                sum+=b[i];
                D-=a[i];
            }
            else{
                sum+=max*D;
                D=0;
            }
        }
    }
    printf("%.2f",sum);
    return 0;
}