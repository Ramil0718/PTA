#include<stdio.h>

double ans,r,h;

int cylinder(double r,double h)
{
	ans=3.1415926538979*r*r*h;//QNMDʲô���⣬��3.14ֱ�Ӵ𰸴��� 
	return ans;
}


int main()
{
	scanf("%lf %lf",&r,&h);
	cylinder(r,h);
	printf("Volume = %.3lf",ans);
}
