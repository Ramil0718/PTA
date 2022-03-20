#include<stdio.h>



int main()
{
	int year;
	int ans=0;
	scanf("%d",&year);
	if(2001<=year&&year<=2100)
	{
		for(int i=2001;i<=year;i++)
	{
		if(((i%4==0)&&(i%100!=0))||i%400==0)
		{
			ans++;
			printf("%d\n",i);
		}
	}
	if(ans==0)
		printf("None");
	}
	else
		printf("Invalid year!");
}
