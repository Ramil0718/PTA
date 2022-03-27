#include<stdio.h>


int main()
{
	double average=0;
	int count=0;
	int cnt=0;
	double sum=0;
	double n;
	while(1)
	{
		scanf("%lf",&n);
		if(n<0)
			break;
		else
		{
			sum+=n;
			count++;
		}
		if(0<=n&&n<60)
			cnt++;
	}
	if(sum==0)
	{
		printf("Average = %.2lf",average);
	}
	else
	{	
		average=sum/count;
		printf("Average = %.2lf\n",average);
		printf("Count = %d",cnt);
	}
}
