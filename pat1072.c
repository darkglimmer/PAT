#include <stdio.h>

int main() {
    int n,m,i,j,a,b,c;
    int student=0,thing=0;
    int k[10000]={0};
    char name[10];
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++){
        scanf("%d",&a);
        k[a]=1;
    }
    for(i=0;i<n;i++){
        scanf("%s",name);
        scanf("%d",&b);
        int q=0;
        for(j=0;j<b;j++){
            scanf("%d",&c);
            if(k[c]==1&&q==0){
                printf("%s: %04d", name, c);
                q++;
                student++;
                thing++;
            }
            else if(k[c]==1&&q!=0){
                printf(" %04d",c);
                thing++;
            }
        }
        if(q!=0){
            printf("\n");
        }
    }
    printf("%d %d",student,thing);
    return 0;
}
