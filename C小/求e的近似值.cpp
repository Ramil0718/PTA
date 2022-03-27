#include<stdio.h>

double sum=1,a=1;

int todo(int n)
{
	for(int i=1;i<=n;i++)
	{
		a*=i;
		sum+=1/a;
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	todo(n);
	printf("%.8lf",sum);
}
