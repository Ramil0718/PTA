#include<stdio.h>
#include<math.h>

int main()
{
	int flag=1,i=1;
	double sum=0,n=1,eps;
	scanf("%lf",&eps);
	if(eps>=1)
		printf("sum = %.6lf",n);
	else
	{
		while(fabs(n)>eps)
		{
			n=flag*1.0/i;
			sum+=n;
			i+=3;
			flag=-flag;
		}
		printf("sum = %.6lf",sum);
	}
}
