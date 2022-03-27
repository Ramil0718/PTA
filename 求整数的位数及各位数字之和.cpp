#include<stdio.h>
int main()
{
	int n,count,sum,tmp;
	while(scanf("%d",&n)!=EOF&&n>=0)
	{
		count=1;
		sum=0;
		while(n>0)
		{
			tmp=n%10;
			sum+=tmp;
			n=n/10;
			if(n>0)
			{
				count++;
			}
		}
		printf("%d %d\n",count,sum);
	}
}
