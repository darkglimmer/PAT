//如果先输入成绩在于相应的一个个比较就会超出运行空间，把成绩直接放在100分中减少空间浪费
#include<stdio.h>
int main(){
    int m,n;
    int i;
    int score,find;
    int count[101] = {0};

    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d",&score);
        count[score]++;
    }
    scanf("%d",&m);
    for(i = 0; i < m; i++){
        scanf("%d",&find);
        if(i != m-1){
            printf("%d ",count[find]);
        }
        else{
            printf("%d",count[find]);
        }
    }
    return 0;
}