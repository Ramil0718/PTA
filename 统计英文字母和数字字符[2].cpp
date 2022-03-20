#include<stdio.h>

int letter=0,blank=0,digit=0,other=0;

int todo(char ch)
{
	if(('A'<=ch&&ch<='Z')||('a'<=ch&&ch<='z'))
		letter++;
	else if('0'<=ch&&ch<='9')
		digit++;
	else
		other++;
	return letter,blank,digit,other;
}

int main()
{
	int n;
	char ch;
	scanf("%d\n",&n);
	for(int i=1;i<=n;i++)
	{
		ch=getchar();
		todo(ch);
	}
	printf("letter = %d, digit = %d, other = %d",letter,digit,other);
}
