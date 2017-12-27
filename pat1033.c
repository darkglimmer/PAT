#include <stdio.h>
#include <string.h>
int main() {
    char a[41],b[100010];
    int i,j;
    scanf("%s%s",a,b);
    for(i=0;i<strlen(b);i++){
        for(j=0;j<strlen(a);j++){
            if(a[j]=='+'&&b[i]>='A'&&b[i]<='Z'){
                b[i]=' ';
            }
            if(a[j]==b[i]||a[j]==b[i]-32||a[j]==b[i]+32){
                b[i]=' ';
            }
        }
    }
    for(i=0;i<strlen(b);i++){
        if(b[i]!=' '){
            printf("%c",b[i]);
        }
    }
    printf("\n");
    return 0;
}