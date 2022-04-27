#include<stdio.h>


int main()
{
	int col,row;
	scanf("%d %d",&row,&col);
	int a[row][col];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int ans=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			ans+=a[i][j];
		}
		printf("%d\n",ans);
		ans=0;
	}
}
