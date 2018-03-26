#include <stdio.h>

int main() {
    long A,B;
    int DA,DB;
    long PA,PB;
    scanf("%ld%d%ld%d",&A,&DA,&B,&DB);
    for(PA = 0; A; A /= 10) {
        if (A % 10 == DA) {
            PA = PA * 10 + DA;
        }
    }
    for(PB = 0; B; B /= 10){
        if(B % 10 == DB){
            PB = PB * 10 + DB;
            }
    }
    printf("%ld",PA+PB);
    return 0;
}