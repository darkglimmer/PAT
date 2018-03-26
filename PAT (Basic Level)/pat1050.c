#include <stdio.h>
#include <math.h>
#include <string.h>
void bsort(int a[],int n);
int main() {
    int N;
    int m,n,i,j,k=0;
    int a[1000]={0};
    scanf("%d",&N);
    n=(int)sqrt(N);
    m=N/n;
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    bsort(a,N);
    int b[m][n];
    int q=0,p=0;
    while(m-2>0&&n-2>0){
        for(i=q;i<n;i++){
            b[q][i]=a[k];
            k++;
        }
        p++;
        for(i=p;i<m;i++){
            b[i][p]=a[k];
            k++;
        }
        q++;
        for(i=n-2;i>=p-1;i--){
            b[m-1][i]=a[k];
            k++;
        }
        for(i=m-2;i>=q;i++){
            b[i][q-1]=a[k];
            k++;
        }
        m--;
        n--;
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(j<m-1){
                printf("%d ",b[i][j]);
            }
            else{
                printf("%d",b[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
void bsort(int a[],int n){
    int i,j;
    for (i=0;i<n-1;i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1] < a[j]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
}