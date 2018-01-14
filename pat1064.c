#include<stdio.h>
int main()
{
    int N;
    int i,j,k=0;
    scanf("%d",&N);
    int f[N];
    char s[N][4];

    for(i = 0; i < N; i++) {
        int e=0;
        int sum = 0;
        scanf("%s",s[i]);
        for(j = 0; s[i][j] != '\0'; j++) {
            sum += (s[i][j] - '0');
        }
        if(i==0){
            f[0]=sum;
            k++;
        }
        else{
            for(j=0;j<k;j++){
                if(sum==f[j]){
                    e=1;
                }
            }
            if(e==0){
                f[k]=sum;
                k++;
            }
        }
    }
    for(i = k-1; i > 0; i--)
        for(j = 0; j < i; j++)
        {
            int tmp;
            if(f[j] > f[j+1])
            {
                tmp = f[j];
                f[j] = f[j+1];
                f[j+1] = tmp;
            }
        }
    printf("%d\n",k);
    for(i = 0; i < k; i++)
    {
        if(i != k-1)
            printf("%d ",f[i]);
        else
            printf("%d",f[i]);

    }
    return 0;
}