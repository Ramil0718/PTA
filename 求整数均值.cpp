#include<stdio.h>
int main()
{
	int a,b,c,d;
	double sum;
	double ave;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	sum=a+b+c+d;
	ave=sum/4;
	printf("Sum = %.0lf; Average = %.1lf",sum,ave);
}
