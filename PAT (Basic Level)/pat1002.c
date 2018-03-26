#include <stdio.h>
void str_dcount(char s[],int a[]);
//void str_name(int n);
int main() {
    char n[1000];
    int a[10]={0};
    int s[1000]={0};
    int sum=0;
    int i,j=1,q=0;
    scanf("%s",n);
    str_dcount(n,a);
    for(i=0;i<=9;i++){
        sum+=(a[i]*i);
    }
    do{
        s[j] = sum % 10;
        sum = sum/10;
        ++j;
        ++q;
    }while(sum!=0);
    for(i=q;i>=1;i--){
        switch (s[i]){
            case 1:printf("yi");
                break;
            case 2: printf("er");
                break;
            case 3: printf("san");
                break;
            case 4: printf("si");
                break;
            case 5: printf("wu");
                break;
            case 6: printf("liu");
                break;
            case 7: printf("qi");
                break;
            case 8: printf("ba");
                break;
            case 9: printf("jiu");
                break;
            case 0: printf("ling");
                break;
            default:
                break;
        }
        if (i>1){
            printf(" ");
        }
    }

    return 0;
}
void str_dcount(char s[],int a[]){
    int i;
    while(s[i]){
        if(s[i]>='0'&&s[i]<='9'){
            a[s[i]-'0']++;
        }
        i++;
    }
}
//void str_name(int n){
//    switch (n>=0&&n<=9){
//        case 1:printf("yi ");
//            break;
//        case 2: printf("er ");
//            break;
//        case 3: printf("san ");
//            break;
//        case 4: printf("si ");
//            break;
//        case 5: printf("wu ");
//            break;
//        case 6: printf("liu ");
//            break;
//        case 7: printf("qi ");
//            break;
//        case 8: printf("ba ");
//            break;
//        case 9: printf("jiu ");
//            break;
//        case 0: printf("ling ");
//            break;
//        default:
//            break;
//    }
//}
