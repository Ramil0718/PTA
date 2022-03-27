#include<stdio.h>
#include<math.h>

int max,min,mid;

int todo(int a,int b,int c)
{
	if(a>=b&&a>=c)
	{
		if(b>=c)
		{
			max=a;
			mid=b;
			min=c;
		}
		else
		{
			max=a;
			mid=c;
			min=b;
		}
	}
	else if(b>=a&&b>=c)
	{
		if(a>=c)
		{
			max=b;
			mid=a;
			min=c;
		}
		else
		{
			max=b;
			mid=c;
			min=a;
		}
	}
	else if(c>=b&&c>=a)
	{
		if(b>=a)
		{
			max=c;
			mid=b;
			min=a;
		}
		else
		{
			max=c;
			mid=a;
			min=b;
		}
	}
	return max,min,mid;
}

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	todo(a,b,c);
	printf("%d->%d->%d",min,mid,max);
}
