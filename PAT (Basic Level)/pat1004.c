#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    char a[100][11],b[100][11];
    int c[100];
    int m=0,max=0;
    int k=0,min=100;
    for (int i = 0; i < n; ++i) {
        scanf("%s %s %d",a[i],b[i],&c[i]);
        if(max<c[i]){
            max=c[i];
            m=i;
        }
        if(min>c[i]){
            min=c[i];
            k=i;
        }
    }
    printf("%s %s\n",a[m],b[m]);
    printf("%s %s",a[k],b[k]);
    return 0;
}