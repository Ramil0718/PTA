#include<stdio.h>

int SumA( int a, int n)
{
    int sum2 = 0;
    int sign = 0;
    for(int i = 1; i<=n; i++)
    {
        sum2 += a;
        a *= 10; 
        sign += sum2;
    }
    return sign;
}

int fn( int a, int n)
{
    int sum1 = 0;
    for(int i = 1; i<=n; i++)
    {
        sum1 += a;
        a *= 10;
    }    
    return sum1;
} 

int main()
{
    int a, n;
    scanf("%d %d",&a,&n);
    printf("s = %d\n", SumA(a, n));
    return 0;
} 
