#include<stdio.h>

int fahr,x;
float celsius;

int C(int x)
{
	celsius=5*(1.0*x-32)/9;
	return celsius;
}

int main()
{
	int lower,upper;
	scanf("%d %d",&lower,&upper);
	if(lower>upper)
		printf("Invalid.");
	else if(upper>100)
		printf("Invalid.");
	else
	{
		printf("fahr celsius\n");
		for(lower;lower<=upper;lower=lower+2)
		{
			C(lower);
			printf("%d%6.1f\n",lower,celsius);
		}
	}
}
