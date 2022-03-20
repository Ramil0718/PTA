#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	double ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		ans+=sqrt(1.0*i);
	}
	printf("sum = %.2lf",ans);
}
