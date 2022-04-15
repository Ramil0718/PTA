#include<stdio.h>

int a[10086];

int main()
{
	int n;
	int find;
	int flag=0;
	scanf("%d %d",&n,&find);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==find)
		{
			printf("%d\n",i);
			flag=1;
		}
	}
	if(flag==0)
		printf("Not Found");
}
