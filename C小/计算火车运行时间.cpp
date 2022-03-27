#include<cstdio>
using namespace std;



int main()
{
	int h1,h2,m1,m2,h3,m3;
	scanf("%2d%2d %2d%2d",&h1,&m1,&h2,&m2);
	if(m1>m2)
	{
		m3=m2+60-m1;
		h2--;
		h3=h2-h1;
	}
	else
	{
		m3=m2-m1;
		h3=h2-h1;
	}
	printf("%02d:%02d",h3,m3);
}
