#include<stdio.h>


int main()
{
	char ch;
	while(scanf("%c",&ch)!=EOF)
	{
		if('A'<=ch&&ch<'Z')
			ch=ch+1+32;
		else if(ch=='Z')
			ch=ch-25+32;
		else if('a'<=ch&&ch<'z')
			ch=ch+1-32;
		else if(ch=='z')
			ch=ch-25-32;
		printf("%c",ch);
	}
}
