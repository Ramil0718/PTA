#include<stdio.h>

int main()
{
	int t;
	int n;
	scanf("%d",&t);
	for(int l=0;l<t;l++)
	{
		scanf("%d",&n);
		int a[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		int flag=0;
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(a[i][j]!=0)
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
				break;
		}
		if(flag==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
