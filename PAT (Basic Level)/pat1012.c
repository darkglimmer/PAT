
//要注意a2在可能相加会产生0，但是是存在的

#include <stdio.h>

int main() {
    int N;
    int i;
    int a[1001]={0};
    int a1=0,a2=0,a3=0,a5=0;
    double a4;
    int k=1,a2_count=0,a4_count=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
        if(a[i]%5==0&&a[i]%2==0){
            a1+=a[i];
        }
        if(a[i]%5==1){
            a2_count++;
            a2+=k*a[i];
            k=k*(-1);
        }
        if(a[i]%5==2){
            a3++;
        }
        if(a[i]%5==3){
            a4_count++;
            a4+=a[i];
        }
        if(a[i]%5==4){
            if(a[i]>a5){
                a5=a[i];
            }
        }
    }
    if(a1==0){
        printf("N ");
    }
    else{
        printf("%d ",a1);
    }
    if(a2_count==0){
        printf("N ");
    }
    else{
        printf("%d ",a2);
    }
    if(a3==0){
        printf("N ");
    }
    else{
        printf("%d ",a3);
    }
    if(a4_count==0){
        printf("N ");
    }
    else{
        printf("%.1f ",a4/a4_count);
    }
    if(a5==0){
        printf("N");
    }
    else{
        printf("%d",a5);
    }
    return 0;
}