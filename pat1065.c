
//关键在于把有对象的数值变成其对象的编号，直接后后面的进行比较。
//直接用序号代表数值使直接排序，避免多次储存

#include<stdio.h>
#include<string.h>
#define N 100000

int main(){
    int p[N]={0},q[N]={0};
    int n,m,a,b;
    scanf("%d",&n);
    for(int i=0 ;i<n ;i++){
        scanf("%d%d",&a,&b);
        p[a]=b; p[b]=a;
    }
    scanf("%d",&m);
    for(int i=0 ;i<m ;i++){
        scanf("%d",&q[i]);
    }

    for(int i=0 ;i<m ;i++){
        if(p[q[i]]==0){
            p[q[i]]=-1;
        }
        else if(p[q[i]]==1);
        else if(p[q[i]]==-1);
        else{
            for(int j=i+1 ;j<m ;j++){
                if(p[q[i]]==q[j]){
                    p[q[i]]=1; p[q[j]]=1;
                    break;
                }
            }
            if(p[q[i]]!=1) p[q[i]]=-1;
        }

    }
    int num = 0;
    for(int i=0 ;i<N ;i++){
        if(p[i]==-1){
            num++;
        }
    }
    printf("%d\n",num);
    int e =1;
    for(int i=0 ;i<N ;i++) {
        if (p[i] == -1) {
            if (e) {
                e = 0;
                printf("%05d", i);
            } else {
                printf(" %05d", i);
            }
        }
    }
    return 0;
}