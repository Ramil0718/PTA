#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int a,b,c;
	scanf("%d",&n);
	a=n/100;
	b=(n-a*100)/10;
	c=n-a*100-b*10;
	if(n<100||n>=1000)
		printf("Invalid Value.");
	else
	{
		if(100<=n&&n<=999)
		{
			if((pow(a,3)+pow(b,3)+pow(c,3))==n)
				printf("Yes");
			else
				printf("No");
		}
		else
			printf("No");
	}
}
