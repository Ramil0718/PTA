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
			break;//��֪��PTA��ʲô�磬Ӧ���ܹ��ĵ���û��break�Ͳ����� 
		}
	}
	if(flag==0)
		printf("Game Over!\n");
}
