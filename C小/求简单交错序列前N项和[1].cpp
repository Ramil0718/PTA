#include<stdio.h>
#include<math.h>

int main()
{
	int n,f=1;;
	double sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		sum+=f*(1/(1.0*(2*i-1)));
		f=-f;
	}
	printf("sum = %.6lf",sum);
}
