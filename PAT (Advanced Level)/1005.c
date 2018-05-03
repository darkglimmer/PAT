#include <stdio.h>
#include <string.h>

int main() {
    int N;
    int sum = 0, i;
    int a[1001] = {0};
    scanf("%d",&N);

    while(N != 0){
        sum += N % 10;
        N /= 10;
    }

    int e = 0;
    while(sum != 0){
        a[e++] = sum % 10;
        sum /= 10;
    }
    for(i = e - 1; i >=0; i--){
        switch (a[i]){
            case 0: printf("zero");
                break;
            case 1: printf("one");
                break;
            case 2: printf("two");
                break;
            case 3: printf("three");
                break;
            case 4: printf("four");
                break;
            case 5: printf("five");
                break;
            case 6: printf("six");
                break;
            case 7: printf("seven");
                break;
            case 8: printf("eight");
                break;
            case 9: printf("nine");
                break;
        }
        if(i != 0){
            printf(" ");
        }
    }

    return 0;
}