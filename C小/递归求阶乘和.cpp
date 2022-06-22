#include <stdio.h>

double fact( int n )
{
	double f=0;
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		f=fact(n-1)*n;
	}
	return f;
}

double factsum( int n )
{
	double fs=0;
	if(n==0)
	{
		fs=0;
	}
	else if(n==1)
	{
		fs=1;
	}
	else
	{
		fs=factsum(n-1)+fact(n);
	}
	return fs;
}

int main()
{
    int n;

    scanf("%d",&n);
    printf("fact(%d) = %.0f\n", n, fact(n));
    printf("sum = %.0f\n", factsum(n));
        
    return 0;
}

/* 你的代码将被嵌在这里 */

