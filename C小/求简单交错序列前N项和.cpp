#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double ans=0;
	int f=1;
	for(int i=1;i<=n;i++)
	{
		ans=ans+f*1.0/(3*i-2);
		f=-f;
	}
	printf("sum = %.3lf",ans);
}
