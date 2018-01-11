#include <stdio.h>
#include <string.h>
int main(){
    int N,i,j;
    char s[101][10];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%s",s[i]);
    }
    double sum=0;
    int q=0;
    for(i=0;i<N;i++){
        int m=0,n=0,k=0;
        double num=0;
        for(j=0;j<strlen(s[i]);j++){
            if(s[i][j]<='9'&&s[i][j]>='0'){
                m=1;
            }
            else if(s[i][j]=='.'){
                n++;
            }
            else if(s[i][0]=='-'){
                k++;
            }
        }
        if(m==1&&n==0&&(k==0||k==1)){
            for(j=0;j<strlen(s[i]);j++){
                if(s[i][j]>='0'&&s[i][j]<='9'){
                    num=(num*10+(s[i][j])-'0');
                }
            }
            if(num<=1000) {
                if (k == 0) {
                    sum += num;
                } else {
                    sum -= num;
                }
                q++;
            }
            else{
                printf("ERROR: %s is not a legal number\n",s[i]);
            }
        }
        else if(m==1&&n==1&&(k==0||k==1)){
            int e=0;
            for(j=0;j<strlen(s[i]);j++){
                if(s[i][j]=='.'){
                    e=j;
                }
            }
            if(e==0||e==strlen(s[i]-1)){
                printf("ERROR: %s is not a legal number\n",s[i]);
            }
            else if(e<strlen(s[i])-3){
                printf("ERROR: %s is not a legal number\n",s[i]);
            }
            else{
                for(j=0;j<e;j++) {
                    if (s[i][j] >= '0' && s[i][j] <= '9') {
                        num = (num * 10 + (s[i][j]) - '0');
                    }
                }
                if((e+1)==strlen(s[i])-1) {
                    num += 0.1 * (s[i][e + 1] - '0');
                }
                else{
                    num += (0.1 * (s[i][e + 1] - '0') + 0.01 * (s[i][e + 2] - '0'));
                }
                if(num<=1000) {
                    if (k == 0) {
                        sum += num;
                    } else {
                        sum -= num;
                    }
                }
                else{
                    printf("ERROR: %s is not a legal number\n",s[i]);
                }
                q++;
            }
        }
        else{
            printf("ERROR: %s is not a legal number\n",s[i]);
        }
    }
    if(q==0){
        printf("The average of 0 numbers is Undefined");
    }
    else if(q==1){
        printf("The average of 1 number is %.2f",sum);
    }
    else{
        printf("The average of %d numbers is %.2f",q,sum/q);
    }
    return 0;
}