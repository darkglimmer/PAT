//最后一个测试点

#include <stdio.h>

int main() {
    int A,B,sum;
    int D;
    int i;
    scanf("%d%d%d",&A,&B,&D);
    sum=A+B;
    int a[1000]={0};
    int k=0;
    do{
        if(sum==0){
            break;
        }
        a[k]=sum%D;
        sum/=D;
        k++;
    }while(sum>=D);
    printf("%d",sum);
    for(i=k-1;i>=0;i--){
        printf("%d",a[i]);
    }
    return 0;
}
//#include<stdio.h>
//
//int main()
//{
//    int a,b,d;
//    scanf("%d %d %d",&a,&b,&d);
//    int x=a+b;
//    int mask=1;
//    while(x/=d){//仿照十进制，适用于各进制
//        mask*=d;
//    }
//    x=a+b;
//    while(mask){
//        printf("%d",x/mask);
//        x%=mask;
//        mask/=d;
//    }
//    return 0;
//
//}