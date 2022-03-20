#include<stdio.h>

int main()
{
	long int n,ans=0;
	scanf("%ld",&n);
	for(long int i=1;i<=n;i++)
		ans+=i;
	printf("sum = %ld",ans);
}
