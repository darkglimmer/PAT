#include <stdio.h>

int main() {
    int s,q;
    int i;
    scanf("%d%d",&s,&q);
    int a[q],b[q],c[q];
    for ( i = 0; i < q; i++) {
        scanf("%d",&a[i]);
    }
    for( i = 0; i < q; i++){
        scanf("%d",&b[i]);
    }
    while(s--){
        int sum=0;
        for (i = 0; i < q; i++) {
            scanf("%d",&c[i]);
            if(c[i]==b[i]){
                sum+=a[i];
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
