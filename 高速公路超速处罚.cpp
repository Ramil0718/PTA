#include<stdio.h>
#include<math.h> 

int main()
{
	double rule,speed;
	double rate;
	scanf("%lf %lf",&speed,&rule);
	rate=((speed-rule)/rule)*100.0;
	//捏么的，想了半天没想清楚为什么110<100*1.1成立，没过样本但是最后答案AC 
	if(speed<(rule*1.1))
		printf("OK");
	else if((speed>=(rule*1.1))&&(speed<(rule*1.5)))
		printf("Exceed %.0lf%%. Ticket 200",rate);
	else
		printf("Exceed %.0lf%%. License Revoked",rate);
}
