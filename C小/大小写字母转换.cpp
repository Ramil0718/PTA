#include<stdio.h>


int main()
{
	char ch;
	ch=getchar();
	while(ch!='\n')
	{
		if(ch>='a'&&ch<='z')
		ch=ch-'a'+'A';
		else if(ch>='A'&&ch<='Z')
		ch=ch-'A'+'a';
		printf("%c",ch);
		ch=getchar();
	}
}
