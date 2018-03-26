#include <stdio.h>

int main() {
    char s;
    int sum=0;
    while((s=getchar())!='\n')//等到回车键再结束
    {
        if(s>='a'&&s<='z') {
            sum += s - 'a' + 1;
        }
        if(s>='A'&&s<='Z') {
            sum += s - 'A' + 1;
        }
    }
    int a = 0, b = 0;
    while(sum)
    {
        if(sum%2==0){
            a++;
        }
        else {
            b++;
        }
        sum/=2;
    }
    printf("%d %d", a, b);
    return 0;
}