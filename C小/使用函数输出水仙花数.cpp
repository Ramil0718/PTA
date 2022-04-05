#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );
    
int main()
{
    int m, n;
  
    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int narcissistic( int number )
{
    int h,x=number,sum=0;
    int count = 0;//位数 
    while(x>0){//计算位数 ,你只考虑了三位数的情况(也可能没看清楚题目?) 
        x/=10;
        count++;
    } 
    x=number;//重置 
    
    while(x>0)
    {
        int k=1;
        for(int i=1;i<=count;i++){//N次幂 
            k*=x%10;
        }
        sum=sum+k;
        x=x/10;
    }
    if(sum==number)
        return 1;
    else
        return 0;
}
void PrintN( int m, int n )
{
    int i;
    for (i=m+1;i<n;i++)
    {
        if(narcissistic(i)==1)
            printf ("%d\n",i);
    }
}
