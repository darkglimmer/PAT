#include<stdio.h>

int main(){
    int n,i;
    int a[101]={0};
    char c1,c2;
    scanf("%d",&n);
    int e=0;
    while(n--) {
        for (i = 0; i < 4; i++) {
            getchar();
            scanf("%c-%c", &c1, &c2);
                if (c2 == 'T') {
                    a[e]=c1-'A'+1;
                    e++;
                }

        }
    }
    for (i = 0; i < e; i++) {
        printf("%d", a[i]);
    }
    return 0;
}