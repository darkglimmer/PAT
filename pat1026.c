#include <stdio.h>

int main() {
    int C1, C2;
    int t;
    int h = 0,m = 0,s = 0;
    scanf("%d%d", &C1, &C2);
    t = (C2 - C1 + 50) / 100;
    while(t >= 3600)
    {
        t -= 3600;
        h++;
    }
    while(t >= 60)
    {
        t -= 60;
        m++;
    }
    s = t;
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}