#include<bits/stdc++.h>//这道题彻底摆烂啦哈哈，有sort我为什么不用呢嘻嘻 
using namespace std;

int a[10086];

int main()
{
	int n;
	int add;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&add);
	a[n]=add;
	sort(a,a+n+1);
	for(int i=0;i<n+1;i++)
	{
		printf("%d ",a[i]);
	}
}
