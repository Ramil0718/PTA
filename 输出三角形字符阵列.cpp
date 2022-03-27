#include<stdio.h>


int main()
{
	int n;
	char a='A';
	scanf("%d",&n);
	int cot=n;
	for(int i=cot-1;i>=0;i--)
	{
		printf("%c ",a);
		a=a+1;
		if(i==0)
		{
			printf("\n");
			cot--;
			i=cot;
		}
	}
}
