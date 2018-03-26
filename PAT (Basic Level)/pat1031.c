#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int k=0,i,j;
    int a[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char m[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
    char s[100][20];
    int wrong[100];
    for(i = 0; i < n; i++) {
        int sum = 0;
        scanf("%s",s[i]);
        for(j = 0; j < 18; j++) {
            if(j < 17) {
                sum += (s[i][j] - '0') * a[j];
            }
            else {
                sum = sum % 11;
                if(s[i][j] != m[sum])
                {
                    wrong[k] = i;
                    k++;
                }
            }
        }
    }

    if(k == 0)
        printf("All passed");
    else
        for(i = 0; i < k; i++)
            printf("%s\n",s[wrong[i]]);

    return 0;
}
