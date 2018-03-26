#include <stdio.h>
#include <math.h>
int main() {
    double R1, P1, R2, P2;
    double a,b;
    scanf("%lf%lf%lf%lf",&R1,&P1,&R2,&P2);
    a=R1*R2*cos(P1+P2);
    b=R1*R2*sin(P1+P2);
    if(a < 0 && a > -0.005){
        a = 0;
    } 
    if(b < 0 && b > -0.005){
        b = 0;
    }  //很接近0的负数四舍五入之后不输出0.00，而是-0.00，这点就要特殊照顾了。

    printf("%.2lf%+.2lfi\n", a, b);

    return 0;
}

