#include<stdio.h>


int main()
{
	int n;
	scanf("%d",&n);
	double a=2,b=1,c,sum=2,factor;
	for(int i=2;i<=n;i++)
	{
		c=a;
		a=a+b;
		b=c;
		factor=a/b;
		sum+=factor;
	}
	printf("%.2lf",sum);
}
