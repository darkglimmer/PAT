#include <stdio.h>
int main(){
    float array[1001];
    int a,b,i;
    for(i = 1000;i>=0;i--){
        array[i]=0.0f;
    }
    scanf("%d",&a);
    for(i=0;i<a;i++){
        int exp = 0;
        float coe = 0.0f;
        scanf("%d",&exp);
        scanf("%f",&coe);
        array[exp]=coe;
    }
    scanf("%d",&b);
    for(i=0;i<b;i++){
        int exp = 0;
        float coe = 0.0f;
        scanf("%d",&exp);
        scanf("%f",&coe);
        array[exp]+=coe;
    }
    int result=0,flag=0;
    for(i = 1000;i>=0;i--)
    {
        if(array[i] != 0)
        {
            result++;
            flag=i;
        }
    }
    if(result == 0)
    {
        printf("%d",result);
        return 0;
    }
    
    printf("%d ",result);
    for(i = 1000;i>=0;i--)
    {
        if(array[i] != 0)
            printf("%d %.1f",i,array[i]);
        else
            continue;
        if(i != flag)
            printf(" ");
        
    }
    return 0;
}
