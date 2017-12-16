#include <stdio.h>

int main() {
    int n;
    char s[100];
    scanf("%d",&n);
    while(n--){
        scanf("%s",s);
        int i=0;
        int a=0,b=0;
        int r=0;
        int pconut=0,tconut=0;
        while(s[i]){
            if(s[i]!='P'&&s[i]!='A'&&s[i]!='T') {
                r = 1;
            }
            else if(s[i]=='P'){
                pconut++;
                a=i;
            }
            else if(s[i]=='T'){
                tconut++;
                b=i;
            }
            i++;
        }
        if(r==1||pconut!=1||tconut!=1||(b-a)<=1||(b-a)>=4){
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }
    return 0;
}
