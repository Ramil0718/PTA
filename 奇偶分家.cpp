#include<stdio.h>


int main()
{
	int n;
	int num;
	int ans1=0,ans2=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&num);
		if(num%2==0)
			ans2++;
		else
			ans1++;
	}
	printf("%d %d",ans1,ans2);
}
