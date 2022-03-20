#include<stdio.h>
#include<math.h>

int t=1;

int fact(int i)
{
	for(int j=1;j<=i;j++)
	{
		t*=j;
	}
	return t;
}

int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		fact(i);
		ans+=t;
		t=1;
	}
	printf("%d",ans);
}
