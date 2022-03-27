#include<stdio.h>
int main()
{
    double result,x;
    scanf("%lf",&x);
    if(x!=0)
    {
        result=1/x;
        printf("f(%.1lf) = %.1lf",x,result);
    }
    else
    {
        printf("f(%.1lf) = 0.0",x);
    }
}
