#include<stdio.h>

struct 
{
	char name[50];
	double cost;
}book[10086];

int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++)
	{
		gets(book[i].name);
		scanf("%lf",&book[i].cost);
		getchar();
	}
	int min_pos=0,max_pos=0;
	for(int i=0;i<n;i++)
	{
		if(book[i].cost>book[max_pos].cost)
		{
			max_pos=i;
		}
		if(book[i].cost<book[min_pos].cost)
		{
			min_pos=i;
		}
	}
	printf("%.2lf, %s\n",book[max_pos].cost,book[max_pos].name);
	printf("%.2lf, %s\n",book[min_pos].cost,book[min_pos].name);
}
