#include <stdio.h>
int  get_symbol(char p[][5]) //读取符号
{
    char c,i=0,j=0;
    while( (c=getchar()) !='\n') {
        if( c == '[') {
            while( (c=getchar()) != ']' ) {
                if(c == '\n') {
                    return (i - 1);
                }
                p[i][j] = c;
                j++;
            }
            p[i][j] = '\0';
            i++;
            j=0;
        }
    }
    return (i-1);
}

int main() {
    char hand[10][5],eye[10][5],mouse[10][5];
    int hand_count,eye_count,mouse_count;
    int n,i,a1,a2,a3,a4,a5;

    hand_count = get_symbol(hand);
    eye_count = get_symbol(eye);
    mouse_count = get_symbol(mouse);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
        if(--a1 > hand_count || --a5 > hand_count || --a2 > eye_count || --a4 > eye_count || --a3 > mouse_count) //注意下标越界的情况
        {
            puts("Are you kidding me? @\\/@");
        }
        else if
                (a1 < 0 || a2 < 0 || a3 < 0 || a4 < 0 || a5< 0)  //**注意下标小于0的情况
        {
            puts("Are you kidding me? @\\/@");
        }
        else
        {
            printf("%s(%s%s%s)%s\n",hand[a1],eye[a2],mouse[a3],eye[a4],hand[a5]);
        }
    }
    return 0;
}


//指针
#include<stdio.h>
#include<string.h>
int main(){
    char emotion[3][11][5],buf[60],*pbuf=buf,flag=0;
    int k,i,j,n,offset[3],index;
    for(i=0;i<3;i++){
        gets(buf);
        pbuf=buf;
        offset[i]=0;
        while(*pbuf){
            while(*pbuf!='['&&*pbuf!=0){
                pbuf++;
            }
            if(*pbuf==0){
                break;
            }
            pbuf++;
            j=1;
            while(*(pbuf+j)!=']'){
                j++;
            }
            *(pbuf+j)=0;
            strcpy(emotion[i][offset[i]++],pbuf);
            pbuf+=j;
            pbuf++;
        }
    }
    scanf("%d",&k);
    for(i=0;i<k;i++){
        flag=0;
        pbuf=buf;
        for(j=0;j<5;j++){
            scanf("%d",&index);
            if(flag){
                continue;
            }
            if(index-1>=offset[j>2?4-j:j]||index<1) {
                printf("Are you kidding me? @\\/@\n");
                flag=1;
            }
            else{
                strcpy(pbuf,emotion[j>2?4-j:j][index-1]);
                pbuf+=strlen(emotion[j>2?4-j:j][index-1]);
                if(j==0){
                    *(pbuf++)='(';
                }
                if(j==3){
                    *(pbuf++)=')';
                }
            }
        }
        *pbuf=0;
        if(!flag){
            printf("%s\n",buf);
        }
    }
}