#include<stdio.h>
#include<math.h>



int main()
{
	int n,num;
	double cost;
	char way;
	scanf("%d %d %c",&n,&num,&way);
	if(way=='e')
	{
		switch(num)
		{
			case 90:cost=n*6.95*0.97;break;
			case 93:cost=n*7.44*0.97;break;
			case 97:cost=n*7.93*0.97;break;
		}
	}
	else
	{
		switch(num)
		{
			case 90:cost=n*6.95*0.95;break;
			case 93:cost=n*7.44*0.95;break;
			case 97:cost=n*7.93*0.95;break;
		}
	}
	printf("%.2lf",cost);
}
