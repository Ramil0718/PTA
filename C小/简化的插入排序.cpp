#include<bits/stdc++.h>//����⳹�װ�������������sort��Ϊʲô���������� 
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
