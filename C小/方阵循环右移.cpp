#include<stdio.h>
int main()
{
	int a[10][10],n,m;
	scanf("%d %d",&m,&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	m=m%n;//可能会出现m比n还大所以取余数
	for(int i=0;i<n;i++)
	{
		for(int j=n-m;j<n;j++)//先输出右移的部分
		{
			printf("%d ",a[i][j]);
		}
		for(int j=0;j<n-m;j++)//输出剩下的部分
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}		
	return 0; 
}
