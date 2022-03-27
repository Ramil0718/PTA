#include<stdio.h>


int main()
{
	int n,time,guess,cot=0;
	int flag=1;
	scanf("%d %d",&n,&time);
	for(int i=1;i<=time;i++)
	{
		scanf("%d",&guess);
		if(guess<0)
			break;
		else if(guess<n)
		{
			printf("Too small\n");
			cot++;
		}
		else if(guess>n)
		{
			printf("Too big\n");
			cot++;
		}
		else if(guess==n)
		{
			cot++;
			if(cot==1)
			{
				printf("Bingo!");
				flag=0;
			}
			else if(1<cot&&cot<=3)
			{
				printf("Lucky You!");
				flag=0;
			}
			else
			{
				printf("Good Guess!\n");
				flag=0;
			}
			break;
		}
	}
	if(flag==1)
		printf("Game Over\n");
}
