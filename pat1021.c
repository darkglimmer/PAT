#include <stdio.h>
void str_dcount(char s[],int a[]);
int main() {
    char N[1000];
    int a[10]={0};
    int i;
    scanf("%s", N);
    str_dcount(N,a);
    for(i=0;i<=9;i++)
        if(a[i]!=0){
            printf("%d:%d\n",i,a[i]);
        }
    return 0;
}
void str_dcount(char s[],int a[]){
    int i=0;
    while(s[i]){
        if(s[i]>='0'&&s[i]<='9') {
            a[s[i] - '0']++;
        }
        i++;
    }
}