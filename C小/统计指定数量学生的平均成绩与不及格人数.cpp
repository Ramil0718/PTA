#include<stdio.h>


int main()
{
	double sum=0;
	int n;
	double grade;
	double average;
	int count=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&grade);
		sum+=grade;
		if(grade<60)
			count++;
	}
	average=sum/n;
	printf("average = %.2lf\n",average);
	printf("count = %d",count);
}
