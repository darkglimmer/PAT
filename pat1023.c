#include <stdio.h>

int main() {
    int i,j,k=0;
    int a[10]={0};
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]!=0&&i!=0){
            printf("%d",i);
            a[i]--;
            break;
        }
    }
    for(i=0;i<10;i++){
        while(a[i]){
            printf("%d",i);
            a[i]--;
        }
    }
    return 0;
}