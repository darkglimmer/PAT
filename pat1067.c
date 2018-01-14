#include <stdio.h>
#include <string.h>
int main() {
    char a[20],b[20];
    int n;
    int q,i;
    int count;
    scanf("%s%d",a,&n);
    for(q=0;q<n;q++) {
        scanf("%s", b);
        for (i = 0; i < 20; i++) {
            if (a[i] == b[i]) {
                count++;
            }
        }
        if (count == strlen(a)) {
            printf("Welcome in");
            break;
        } else {
            if(q<(n-1)) {
                printf("Wrong password:%s\n", b);
            }
            else{
                printf("Wrong password:%s\n", b);
                printf("Account locked");
                break;
            }
        }
    }
    return 0;
}