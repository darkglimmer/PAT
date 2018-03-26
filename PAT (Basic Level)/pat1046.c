#include <stdio.h>

int main() {
    int N;
    int a,b,c,d;
    int m=0,n=0;
    scanf("%d",&N);
    while(N--){
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(b==(a+c)&&d!=(a+c)){
            n++;
        }
        else if(d==(a+c)&&b!=(a+c)){
            m++;
        }
    }
    printf("%d %d",m,n);
    return 0;
}