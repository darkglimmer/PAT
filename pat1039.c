#include <stdio.h>
#include <string.h>
int main() {
    char a[1000],b[1000];
    int m,n;
    int i,j;
    int count;
    scanf("%s",a);
    scanf("%s",b);
    m=strlen(a);
    n=strlen(b);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(b[i]==a[j]){
                ++count;
                a[j]=EOF;
                break;
            }
        }
    }
    if(count==n){
        printf("Yes %d",m-n);
    }
    else{
        printf("No %d",n-count);
    }
    return 0;
}
