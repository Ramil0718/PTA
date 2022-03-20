#include<stdio.h>
#include<math.h>

int main()
{
	double n;
	double ans=0;
	scanf("%lf",&n);
	for(double i=1.0;i<=2*n;i=i+2)
	{
		ans+=1.0/i;
	}
	printf("sum = %.6lf",ans);
}
