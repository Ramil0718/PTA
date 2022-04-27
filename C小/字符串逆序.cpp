#include<stdio.h>
#include <string.h>

/*int main()//最长串运行时错误 
{
	char ch[80];
	gets(ch);
	int lenth;
	lenth=strlen(ch)-1;
	for(int i=lenth;i>=0;i--)
	{
		printf("%c",ch[i]);
	}
}*/


int main()
{
	int d;
	int i,j;
	char a[81];
	char b[81];
	gets(a);
	d=strlen(a);
	j=d-1;
	for(i=0;i<d;i++)
	{
		b[j]=a[i];
		j--;
	}
	for(i=0;i<d;i++)
	{
		printf("%c",b[i]);
	}
	return 0;
}
