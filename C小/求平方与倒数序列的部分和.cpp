#include<stdio.h>
#include<math.h>

int main()
{
	int n,m;
	double ans=0;
	scanf("%d %d",&m,&n);
	for(int i=m;i<=n;i++)
	{
		ans+=(pow(i,2)+1.0/i);
	}
	printf("sum = %.6lf",ans);
}
