#include<stdio.h>
#include<math.h>

double c,f;

int fact(int lower,int upper)
{
	for(int i=lower;i<=upper;i++)
	{
		f=1.0*i;
		c=5*(f-32)/9;
		printf("%4.0lf%6.1lf\n",f,c);
	}
}

int main()
{
	int lower,upper;
	scanf("%d %d",&lower,&upper);
	if(lower>upper)
		printf("Invalid.");
	else
	{
		printf("fahr celsius\n");
		fact(lower,upper);
	}
}
