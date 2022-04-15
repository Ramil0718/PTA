#include<stdio.h>

int a[10086];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int vote;
		scanf("%d",&vote);
		switch(vote)
		{
			case 1:a[1]++;
				break;
			case 2:a[2]++;
				break;
			case 3:a[3]++;
				break;
			case 4:a[4]++;
				break;
			case 5:a[5]++;
				break;
			case 6:a[6]++;
				break;
			case 7:a[7]++;
				break;
			case 8:a[8]++;
				break;
		}
	}
	for(int i=1;i<=8;i++)
	{
		printf("%4d%4d\n",i,a[i]);
	}
}
