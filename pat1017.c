#include <stdio.h>
#include <string.h>
int main() {
    char a[1000];
    int c,b,d,i,t;
    int s[1000];
    scanf("%s%d",a,&b);
    t=strlen(a);//strlen(a)包括结尾的\'0'
    for(i=0;i<t;i++){
        c=((a[i]-'0')*10+(a[i+1]-'0'))/b;
        d=((a[i]-'0')*10+(a[i+1]-'0'))%b;
        s[i]=c;
        a[i+1]=d+'0';//余数*10加a[
        if(i==t-2){
            break;
        }
    }
    for(i=0;i<t-1;i++) {
        printf("%d",s[i]);
    }
    printf(" ");
    printf("%d",d);
    return 0;
}