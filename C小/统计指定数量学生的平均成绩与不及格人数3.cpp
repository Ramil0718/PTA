#include<stdio.h>

int main()
{
	double sum=0,average;
	int count=0;
	int n;
	double grade;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lf",&grade);
		sum+=grade;
		if(grade<60)
			count++;
	}
	average=sum/n;
	if(sum==0)
		average=0;
	printf("average = %.2lf\ncount = %d",average,count);
}
