#include<cstdio>

bool flag1[10086]={0},flag2[10086]={0};

int main()
{
	int n,m;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	int b[m];
	for(int i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;i<m;j++)
		{
			if(a[i]==a[j])
			{
				flag1[i]=1;
				flag2[i]=1;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(flag1[i]!=1)
			printf("%d ",flag1[i]);
	}
	for(int i=0;i<m;i++)
	{
		if(flag2[i]!=1)
			printf("%d ",flag2[i]);
	}
}
