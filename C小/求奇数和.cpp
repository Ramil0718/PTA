#include<stdio.h>


int main()
{
	int sum=0;
	int n;
	while(scanf("%d",&n)!=EOF)//EOF暴力读取，意味读到最后一个值，用起来很爽 
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
