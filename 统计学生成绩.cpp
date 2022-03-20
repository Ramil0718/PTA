#include<stdio.h>

int a=0,b=0,c=0,d=0,e=0;

int judge(int grade)
{
	if(grade>=90)
		a++;
	else if(80<=grade&&grade<90)
		b++;
	else if(70<=grade&&grade<80)
		c++;
	else if(60<=grade&&grade<70)
		d++;
	else if(grade<60)
		e++;
	return a,b,c,d,e;
}

int main()
{
	int n,grade;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&grade);
		judge(grade);
	}
	printf("%d %d %d %d %d",a,b,c,d,e);
}
