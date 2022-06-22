#include<stdio.h>

struct
{
	int num;
	char name[20];
	double a1,a2,a3;
	double temp;
	double average;
}student[50];

int main()
{
	int n,t;
	double k;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&student[i].num);
		scanf("%s",&student[i].name);
		scanf("%lf",&student[i].a1);
		scanf("%lf",&student[i].a2);
		scanf("%lf",&student[i].a3);
		student[i].average=(student[i].a1+student[i].a2+student[i].a3)/3;
		student[i].temp=k++;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(student[i].average<student[j].average)
			{
				k=student[i].average;
				student[i].average=student[j].average;
				student[j].average=k;
				
				k=student[i].temp;
				student[i].temp=student[j].temp;
				student[j].temp=k;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		t=student[i].temp;
		printf("%d,%s,%.2lf\n",student[t].num,student[t].name,student[i].average);
	}
}
