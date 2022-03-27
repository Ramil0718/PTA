#include<stdio.h>
#include<math.h>
int main()
{
	double x,result;
	scanf("%lf",&x);
	if(x>=0)
	{
		result=sqrt(x);
		printf("f(%.2lf) = %.2lf",x,result);
	}
	else
	{
		result=pow((x+1),2)+2*x+1/x;
		printf("f(%.2lf) = %.2lf",x,result);
	}
}
