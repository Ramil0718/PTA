#include<stdio.h>
#include<math.h> 

int main()
{
	double rule,speed;
	double rate;
	scanf("%lf %lf",&speed,&rule);
	rate=((speed-rule)/rule)*100.0;
	//��ô�ģ����˰���û�����Ϊʲô110<100*1.1������û��������������AC 
	if(speed<(rule*1.1))
		printf("OK");
	else if((speed>=(rule*1.1))&&(speed<(rule*1.5)))
		printf("Exceed %.0lf%%. Ticket 200",rate);
	else
		printf("Exceed %.0lf%%. License Revoked",rate);
}
