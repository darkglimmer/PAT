#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int a,b;
    int c[100001]={0};
    int i;
    int s=0;
    int max=0;
    for(i=0;i<N;i++){
        scanf("%d%d",&a,&b);
        c[a]+=b;
        if(c[a]>=max){
            s = a;
            max = c[a];
        }
    }
    printf("%d %d",s, max);
    return 0;
}