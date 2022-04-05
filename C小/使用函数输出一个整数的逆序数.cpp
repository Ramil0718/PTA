#include <stdio.h>


int reverse( int number )
{
    int i,sum=0,x,num=0,y;
    if(number<0)
    {
        x=-number;
    }
    else
    {
        x=number;
    }
    if(x==0)return 0;
    else
    {
        for(i=x;i>0;i/=10)
        {
            sum++;
        }
        sum--;
        for(i=x;i>0;i/=10)
        {
            y=i%10;
            num=num+y*pow(10,sum);
            sum--;
        }
    }
    if(number<0)return -num;
    else return num;
}

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

/* 你的代码将被嵌在这里 */

