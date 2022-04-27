#include<stdio.h>
int main()
{
	char ch;
	while((ch=getchar())!='\n')
	{
		if(ch>=65&&ch<=90)	ch=90-(ch-65);
		putchar(ch); 
	}
} 
