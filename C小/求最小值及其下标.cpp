#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n-1];
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==min)
		{
			printf("%d %d",min,cnt);
			break;
		}
		cnt++;
	}
}
