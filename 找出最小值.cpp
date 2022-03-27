#include<stdio.h>

int main()
{
	int n,num,min;
	scanf("%d",&n);
	int man=0;
	scanf("%d",&min);
	for(int i=1;i<=n-1;i++)
	{
		scanf("%d",&num);
		if(num<min)
			min=num;
	}
	printf("min = %d",min);
}
