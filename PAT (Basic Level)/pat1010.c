//这道的坑点在于，如果在输入几个正常数之后出现指数为0则不输出。
//如果只输入了一个指数为0的，那么就意味着要输出0 0
#include<stdio.h>
int main()
{
    int i=1;
    int a,b;
    while (scanf("%d%d", &a, &b) != EOF) {
        if (i) {
            if (b != 0) {
                printf("%d %d", a*b, b - 1);
                i = 0;
            }
            else{
                printf("%d %d", 0, 0);
            }
        }
        else {
            if (b != 0)
                printf(" %d %d", a*b, b - 1);
        }
    }
    return 0;
}