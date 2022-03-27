#include<cstdio>
#include<cmath>

int main()
{
	int n;
	double ans;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		ans+=1.0/i;
	}
	printf("sum = %.6lf",ans);
}
