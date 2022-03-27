#include<stdio.h>
int main()
{
	double x,ans;
	scanf("%lf",&x);
	if(x<0)
		printf("Invalid Value!");
	if(x>=0&&x<=50)
	{
		ans=x*0.53;
		printf("cost = %.2lf",ans);
	}
	if(x>50)
	{
		ans=50*0.53+(x-50)*0.58;
		printf("cost = %.2lf",ans);
	}
}
