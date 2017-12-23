#include <stdio.h>
#include <string.h>
int main() {
    char a[10000];
    int b[10000]={0};
    int i,j;
    int num=0;
    scanf("%s",a);
    int k=0,m=0,n=0;
    for(i=0;i<strlen(a);i++){
        if(a[i]=='-'&&k==0){
            printf("%c",a[i]);
            k++;
        }
        if(a[i]=='+'&&k==0){
            k++;
        }
        if(k==1){
            k++;
        }
        if(a[i]>='0'&&a[i]<='9'&&k==2){
            b[m]=a[i]-'0';
            m++;
        }
        if(a[i]=='E'){
            k++;
        }
        if((a[i]=='-'||a[i]=='+')&&k==3){
            if(a[i]=='-'){
                n=1;
            }
            for(j=i+1;j<(strlen(a)-1);j++){
                if(num==0){
                    num=(a[j]-'0')*10+(a[j+1]-'0');
                }
                else{
                    num= num*10+(a[j+1]-'0');
                }
            }
        }
    }
    if(n==1){
        printf("0.");
        for(i=0;i<num-1;i++){
            printf("%d",0);
        }
        for(i=0;i<m;i++){
            printf("%d",b[i]);
        }
    }
    if(n==0){
        for(i=0;i<m;i++){
            printf("%d",b[i]);
            if(m>num&&i==num){
                printf(".");
            }
        }
        if(m<=num){
            for(i=0;i<(num-m+1);i++){
                printf("%d",0);
            }
        }
    }
    return 0;
}