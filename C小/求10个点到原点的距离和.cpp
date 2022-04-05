# include<stdio.h>
# include<math.h>
double dist(double x,double y);
int main() 
{
	int count=1;
	double x,y,sum;
	for(count=1;count<=10;count++)
	{
		scanf("%lf %lf",&x,&y);
		sum+=dist(x,y);
	}
	printf("distance = %0.6lf",sum);
	return 0;
}
double dist(double x,double y)
{
	return sqrt(x*x+y*y);
}
