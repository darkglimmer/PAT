//思路一：主元的位置在全部排序之后是不变的，并且需要比前面的数字都要大。
//思路二：只需要记录每个数左边的最大值和右边的最小值（都包含这个数本身)

#include <stdio.h>
int main()
{
    int N, count = 0;
    int i;
    int a[100001], lmax[100001], rmin[100001];
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    int max,min;
    for(i = 0, max = i; i < N; i++){
        lmax[i] = a[i] >= a[max] ? a[max = i] : a[max];
    }
    for(i = N - 1, min = i; i >= 0; i--){
        rmin[i] = a[i] <= a[min] ? a[min = i] : a[min];
    }
    for(i = 0; i < N; i++) {
        if(a[i] == lmax[i] && a[i] == rmin[i])
            count++;
        else
            a[i] = 0;
    }
    printf("%d\n", count);
    for(i = 0; i < N && count; i++){
        if(a[i]){
            printf("%d%c", a[i],--count ? ' ' : '\0');//判断是否输出空格
        }
    }
    printf("\n");

    return 0;
}