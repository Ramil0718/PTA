#include <stdio.h>

double calc_pow( double x, int n )
{
	double sum=1;
	if(n==0)
	{
		return 1;
	}
	else if(n==1)
	{
		return x;
	}
	else
	{
		calc_pow(x,n-1);
		for(int i=1;i<=n;i++)
		{
			sum*=x;
		}
	}
	return sum;
}

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.0f\n", calc_pow(x, n));

    return 0;
}

/* 你的代码将被嵌在这里 */

