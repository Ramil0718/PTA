#include<stdio.h>

int a[10086];

int main()
{
	int n;
	int flag=0;
	double sum=0;
	double average;
	scanf("%d",&n);
	if(n<1||n>10)
		printf("Invalid.");
	else
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		average=sum/n;
		printf("%.2lf\n",average);
		for(int i=0;i<n;i++)
		{
			if(a[i]>average)
			{
				printf("%d ",a[i]);
				flag=1;
			}
		}
		if(flag==0)
			printf("\n");
	}
}
