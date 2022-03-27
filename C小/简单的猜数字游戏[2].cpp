#include<stdio.h>

int main()
{
	int n;
	int m;
	int flag=0;
	scanf("%d",&n);
	for(int i=1;i<=7;i++)
	{
		scanf("%d",&m);
		if(m<n)
		{
			printf("Too small\n");
		}
		else if(m>n)
		{
			printf("Too big\n");
		}
		else if(m==n)
		{
			printf("Lucky You!\n");
			flag=1;
			break;//不知道PTA抽什么风，应该能过的但是没有break就不给过 
		}
	}
	if(flag==0)
		printf("Game Over!\n");
}
