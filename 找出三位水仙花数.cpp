#include<stdio.h>
#include<math.h>

int main()
{
	int n,m;
	scanf("%d %d",&m,&n);
	if(m<100||n>999||m>n)
		printf("Invalid Value.");
	else
	{
		bool f=0;
		for(int i=m;i<=n;i++)
		{
			int a,b,c;
			a=i%10;
			b=i/10%10;
			c=i/100%10;
			if((pow(a,3)+pow(b,3)+pow(c,3))==i)
			{
				f=1;
				printf("%d\n",i);
			}
		}
	}
}
