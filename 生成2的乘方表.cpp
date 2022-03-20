#include<stdio.h>
#include<math.h>

int main()
{
	long int n;
	scanf("%ld",&n);
	long int ans;
	for(long int i=0;i<=n;i++)
	{
		ans=pow(2,i);
		printf("pow(2,%ld) = %ld\n",i,ans);
	}
}
