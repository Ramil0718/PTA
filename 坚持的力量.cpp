#include<stdio.h>
#include<math.h>

int main()
{
	double ans,initial,factor,day;
	scanf("%lf %lf %lf",&initial,&factor,&day);
	ans=pow((1+factor),day)*initial;
	printf("result = %.2lf",ans);
}
