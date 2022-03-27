#include<stdio.h>
#include<math.h>

double ans,part1=1,part2=1,part3=1;

int fact1(int n)
{
	for(int i=1;i<=n;i++)
	{
		part1*=i;
	}
	return part1;
}

int fact2(int m)
{
	for(int i=1;i<=m;i++)
	{
		part2*=i;
	}
	return part2;
}

int fact3(int n,int m)
{
	for(int i=1;i<=n-m;i++)
	{
		part3*=i;
	}
	return part3;
}

int main()
{
	int n,m;
	scanf("%d %d",&m,&n);
	fact1(n);
	fact2(m);
	fact3(n,m);
	ans=part1/(part2*part3);
	printf("result = %.0lf",ans);
}
