#include<stdio.h>
#include<math.h>


int main() 
{
	double area,s;
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	if(a+b>c&&a+c>b&&b+c>a||a==b==c)
		printf("area = %.2lf; perimeter = %.2lf",area,2*s);
	else
		printf("These sides do not correspond to a valid triangle");
}
