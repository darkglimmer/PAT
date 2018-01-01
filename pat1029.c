#include <stdio.h>
#include <ctype.h>
#include <string.h>
void str_toupper(char s[]);
int main() {
    int m=0;
    char a[80],b[80];
    char c[81]= {'\0'};
    scanf("%s%s",a,b);
    str_toupper(a);
    str_toupper(b);
    for(int i=0;i<strlen(a);i++) {
        int k = 0,e = 0;
        for (int j = 0; j < strlen(b); j++) {
            if (b[j] == a[i]) {
                k = 1;
            }
        }
        if (k == 0) {
            for(int j=0;j<strlen(c);j++){
                if(a[i]==c[j]){
                    e=1;
                }
            }
            if(e==0){
                c[m]=a[i];
                printf("%c",c[m]);
                m++;
            }
        }
    }
    return 0;
}
void str_toupper(char s[]){
    int i=0;
    while(s[i]){
        s[i]=toupper(s[i]);
        i++;
    }
}
