#include <stdio.h>
#include <ctype.h>
void str_tolower(char s[]);
void str_number(const char s[],int a[]);
int main() {
    int max=0;
    int m=0;
    char a[1000];
    int b[30] = {0};
    gets(a);
    str_tolower(a);
    str_number(a,b);
    
    for(int i=0;i<26;i++){
        if(b[i]>max){
            max=b[i];
            m=i;
        }
    }
    printf("%c %d",m+'a',max);
    return 0;
}
void str_tolower(char s[]){
    int i=0;
    while(s[i]){
        s[i]=tolower(s[i]);
        i++;
    }
}
void str_number(const char s[],int a[]){
    int i=0;
    while(s[i]){
        if(s[i] >= 'a' && s[i] <= 'z') {
            a[s[i] - 'a']++;
        }
        i++;
    }
}
