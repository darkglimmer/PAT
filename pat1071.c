#include <stdio.h>

int main() {
    int T,K;
    int n1,b,t,n2;
    scanf("%d%d",&T,&K);
    while(T!=0&&K--){
        scanf("%d%d%d%d",&n1,&b,&t,&n2);
        if(t>T){
            printf("Not enough tokens.  Total = %d.\n",T);
        }
        else{
            if((n2>n1&&b==1)||(n2<n1&&b==0)){
                T+=t;
                printf("Win %d!  Total = %d.\n",t,T);
            }
            else{
                T-=t;
                printf("Lose %d.  Total = %d.\n",t,T);
            }
        }
    }
    if(T==0) {
        printf("Game Over.\n");
    }
    return 0;
}