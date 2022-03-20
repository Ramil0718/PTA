#include<stdio.h>

double sum=0;

int f(double n)
{
	if(n<0)
		sum=0;
	else if(0<=n&&n<=15)
		sum=4*n/3;
	else
	{
		sum=2.5*n-10.5;
	}
	return sum;
}

int main()
{
	double n;
	scanf("%lf",&n);
	f(n);
	printf("f(%.2lf) = %.2lf",n,sum);
}
