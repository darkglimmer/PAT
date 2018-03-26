#include<stdio.h>
#include<string.h>
int main() {
    char a[101],b[203],c[14]="0123456789JQK";
    int i,a_length,b_length,a_num,b_num;
    scanf("%s %s",a,b);
    a_length=strlen(a);
    b_length=strlen(b);
    for(i=1;i<=a_length;i++) {
        a_num=a[a_length-i]-'0';
        b_num=b[b_length-i]-'0';
        if(b_length<i) {
            b_num=0;
        }
        if(i%2) {
            b_num+=a_num;
            b_num%=13;
        }
        else {
            b_num-=a_num;
            if(b_num<0) {
                b_num+=10;
            }
        }
        b[b_length-i]=c[b_num];//把b长度小于a的部分存在b【负数】中
    }
    if(b_length<a_length) {
        printf("%s",b+b_length-i+1);
    }
    else {
        printf("%s",b);
    }
    return 0;
}


#include<stdio.h>
#include<string.h>
void reserve(char *s)
{
    int i,n;
    char temp;
    n=strlen(s);
    for(i=0;i<n/2;i++)
    {
        temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
    }
    return ;
}//转换顺序
int main()
{
    int i,j,num_a,num_b,length_a,length_b;
    char buf_a[101],buf_b[101],*a=buf_a,*b=buf_b,pattern[14]="0123456789JQK";
    scanf("%s%s",a,b);
    length_a=strlen(a);
    length_b=strlen(b);
    reserve(a);
    reserve(b);
    for(i=0;a[i];i++)
    {
        num_a=(a[i]-'0');
        num_b=(b[i]-'0');
        if(i>=length_b)
        {
            num_b=0;
        }
        if(i%2)
        {
            num_b-=num_a;
            if(num_b<0)
            {
                num_b+=10;
            }
        }
        else
        {
            num_b+=num_a;
            num_b%=13;
        }
        b[i]=pattern[num_b];//把整个字符串倒置放入b中
    }
    if(length_a>length_b)
    {
        b[i]='\0';
    }//把字符串最后放置结尾标志
    reserve(b);
    printf("%s\n",b);
}