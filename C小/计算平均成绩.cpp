#include<stdio.h>

struct
{
	int num[5];
	char name[10];
	double grade;
}s[55];

int main()
{
	int n;
	int sum=0;
	double average;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",&s[i].num);
		scanf("%s",&s[i].name);
		scanf("%lf",&s[i].grade);
		sum+=s[i].grade;
	}
	average=sum/n;
	printf("%.2lf\n",average);
	for(int i=0;i<n;i++)
	{
		if(s[i].grade<average)
		{
			printf("%s %s\n",s[i].name,s[i].num);
		}
	}
}
