#include<stdio.h>

int a[1001];

int main()
{
	int n;
	int find;
	scanf("%d %d",&n,&find);
	int flag=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==find)
		{
			printf("%d",i);
			flag=1;
		}
	}
	if(flag==0)
		printf("Not Found");
}
