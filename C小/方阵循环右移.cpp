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
	m=m%n;//���ܻ����m��n��������ȡ����
	for(int i=0;i<n;i++)
	{
		for(int j=n-m;j<n;j++)//��������ƵĲ���
		{
			printf("%d ",a[i][j]);
		}
		for(int j=0;j<n-m;j++)//���ʣ�µĲ���
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}		
	return 0; 
}
