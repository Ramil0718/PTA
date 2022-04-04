#include <stdio.h>


int gcd( int x, int y )
{
    int k;
    while(1)
    {
        k=x%y;//2=10%8； 
        if(x%y==0)break;
        x=y;
        y=k;
    }
    return y;
} 

int main()
{
    int x, y;
    
    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));
    
    return 0;
}

/* 你的代码将被嵌在这里 */

