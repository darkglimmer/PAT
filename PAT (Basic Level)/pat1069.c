#include <stdio.h>
#include <memory.h>

int main() {
    int m,n,s;
    int i,j;
    char a[1001][21],b[1001][21]={0};
    scanf("%d%d%d",&m,&n,&s);
    for(i=0;i<m;i++){
        scanf("%s",a[i]);
    }
    int k=0;
    if(m>=s){
        for(i=s-1;i<m;){
            int e=1;
            for(j=0;j<k;j++){
                if(a[i]==b[j]){
                    e=0;
                }
            }
            if(e){
                strcpy(b[k],a[i]);
                k++;
                i+=n;
            }
            else{
                i++;
            }
        }
        for(i=0;i<k;i++){
            printf("%s\n",b[i]);
        }
    }
    else{
        printf("Keep going...");
    }
    return 0;
}