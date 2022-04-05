
#include<stdio.h>
#include<string.h>
 
int main()
{
    char ch[1000];
    int i, sum, n;
    gets(ch);
    n=strlen(ch);
    if(ch[0]==' ')
        sum=0;
    else
        sum=1;
    
    for(i=0;i<n;i++)
    {
        if(ch[i]==' '&&ch[i+1]!=' ')
            sum++;
    }
    
    if(ch[n-1]==' ')//防止全空格或最后结尾有空格
        sum=sum-1;
    
    printf("%d\n", sum);
    return 0;
}
