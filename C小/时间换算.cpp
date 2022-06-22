#include<stdio.h>

int main()
{
	int hh,mm,ss;
	int n;
	scanf("%d:%d:%d",&hh,&mm,&ss);
	scanf("%d",&n);
	ss=ss+n;
	mm+=ss/60;
	hh+=mm/60;
	hh=hh%24;
	mm=mm%60;
	ss=ss%60;
	printf("%02d:%02d:%02d",hh,mm,ss);
}
