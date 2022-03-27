#include<stdio.h>


int main()
{
	double n1,n2;
	char op;
	scanf("%lf%c%lf",&n1,&op,&n2);
	if(op=='+')
		printf("%.2lf",n1+n2);
	else if(op=='-')
		printf("%.2lf",n1-n2);
	else if(op=='*')
		printf("%.2lf",n1*n2);
	else if(op=='/')
	{
		if(n2==0)
			printf("Divisor can not be 0!");
		else
			printf("%.2lf",n1/n2);
	}
	else
		printf("Unknown operator!");
}
