#include <stdio.h>

int main() {
    int N,L,H;
    int i,j;
    char s[10001][9];
    int a[10001]={0};
    int b[10001]={0};
    int conut=0,k=0,m=0,n=0,q=0;
    int c[10001]={0};
    int d[10001]={0};
    int e[10001]={0};
    int f[10001]={0};
    scanf("%d%d%d",&N,&L,&H);
    for(i=0;i<N;i++){
        scanf("%s%d%d",s[i],&a[i],&b[i]);
        if(a[i]>=L&&b[i]>=L){
            conut++;
            if(a[i]>=H&&b[i]>=H){
                c[k]=i;
                k++;
            }
            else if(a[i]>=H&&b[i]<H){
                d[m]=i;
                m++;
            }
            else if(a[i]<H&&b[i]<H&&a[i]>b[i]){
                e[n]=i;
                n++;
            }
            else{
                f[q]=i;
                q++;
            }
        }
    }
    printf("%d\n",conut);
    for (i=0;i<k;i++){
        int max=a[c[i]]+b[c[i]];
        int g=i;
        if(i<k-1){
            for(j=i+1;j<k;j++){
                if(((a[c[j]]+b[c[j]])>max)||((a[c[j]]+b[c[j]])==max&&a[c[j]]>a[c[g]])){
                    max=a[c[j]]+b[c[j]];
                    g=j;
                    int tmp=c[i];
                    c[i]=c[j];
                    c[j]=tmp;
                }
            }
        }
        printf("%s %d %d\n",s[c[i]],a[c[i]],b[c[i]]);
    }
    for(i=0;i<m;i++){
        int max=a[d[i]]+b[d[i]];
        int g=i;
        if(i<m-1){
            for(j=i+1;j<m;j++){
                if((a[d[j]]+b[d[j]])>max||((a[d[j]]+b[d[j]])==max&&a[d[j]]>a[d[g]])){
                    max=a[d[j]]+d[d[j]];
                    g=j;
                    int tmp=d[i];
                    d[i]=d[j];
                    d[j]=tmp;
                }
            }
        }
        printf("%s %d %d\n",s[d[i]],a[d[i]],b[d[i]]);
    }
    for(i=0;i<n;i++){
        int max=a[e[i]]+b[e[i]];
        int g=i;
        if(i<n-1){
            for(j=i+1;j<n;j++){
                if(((a[e[j]]+b[e[j]])>max)||((a[e[j]]+b[e[j]])==max&&a[e[j]]>a[e[g]])){
                    max=a[e[j]]+d[e[j]];
                    g=j;
                    int tmp=e[i];
                    e[i]=e[j];
                    e[j]=tmp;
                }
            }
        }
        printf("%s %d %d\n",s[e[i]],a[e[i]],b[e[i]]);
    }
    for(i=0;i<q;i++){
        int max=a[f[i]]+b[f[i]];
        int g=i;
        if(i<q-1){
            for(j=i+1;j<q;j++){
                if(((a[f[j]]+b[f[j]])>max)||((a[f[j]]+b[f[j]])==max&&a[f[j]]>a[f[g]])){
                    max=a[f[j]]+d[f[j]];
                    g=j;
                    int tmp=f[i];
                    f[i]=f[j];
                    f[j]=tmp;
                }
            }
        }
        printf("%s %d %d\n",s[f[i]],a[f[i]],b[f[i]]);
    }
    return 0;
}