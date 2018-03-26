#include<stdio.h>

int gcd(int a,int b){
    if (b == 0)
        return a;
    else
        return gcd(b,a%b);
}//判读是是否为最简分数
int main(){
    int k,i;
    double n1,m1,n2,m2;
    double a,b,c;
    scanf("%lf/%lf",&n1,&m1);
    scanf("%lf/%lf",&n2,&m2);
    a = n1/m1;
    b = n2/m2;
    if(a>b){
        double temp;
        temp=a;
        a=b;
        b=temp;
    }
    int q = 1;
    scanf("%d",&k);
    for(i = 1; i < k * b; i++){
        c=(double)i/k;
        if(c < b && c > a){
            if(gcd(i,k) == 1){
                if(q){
                    printf("%d/%d",i,k);
                    q = 0;
                }
                else{
                    printf(" %d/%d",i,k);
                }
            }
        }
    }
    return 0;
}