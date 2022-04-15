#include<stdio.h>

int main()
{
	int row,column;
	scanf("%d %d",&row,&column);
	int a[row][column];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int max=a[0][0]; 
	int ans_row,ans_column;//¼ÇÂ¼×ø±ê 
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				ans_row=i;
				ans_column=j;
			}
		}
	}
	printf("%d\n",max);
	printf("%d %d",ans_row,ans_column);
}
