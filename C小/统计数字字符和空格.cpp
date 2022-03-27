#include<stdio.h>

int blank=0,digit=0,other=0;

int todo(char ch)
{
	if('0'<=ch&&ch<='9')
		digit++;
	else if(ch==' ')
		blank++;
	else
		other++;
	return blank,digit,other;
}

int main()
{
	char ch;
	while(scanf("%c",&ch)!=EOF)
	{
		if(ch=='\n')
			break;
		else
			todo(ch);
	}
	printf("blank = %d, digit = %d, other = %d",blank,digit,other);
}
