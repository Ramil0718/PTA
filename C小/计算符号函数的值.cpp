#include<stdio.h>

int sign(int x)
{
	if(x<0)
		printf("sign(%d) = -1",x);
	else if(x==0)
		printf("sign(%d) = 0",x);
	else
		printf("sign(%d) = 1",x);
}

int main()
{
	int x;
	scanf("%d",&x);
	sign(x);
}
