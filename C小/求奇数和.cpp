#include<stdio.h>


int main()
{
	int sum=0;
	int n;
	while(scanf("%d",&n)!=EOF)//EOF������ȡ����ζ�������һ��ֵ����������ˬ 
	{
		if(n<0)
			break;
		else
		{
			if(n%2!=0)
				sum+=n;
		}
	}
	printf("%d",sum);
}
