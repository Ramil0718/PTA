#include<stdio.h>

int letter=0,blank=0,digit=0,other=0;

int todo(char ch)
{
	if(('A'<=ch&&ch<='Z')||('a'<=ch&&ch<='z'))
		letter++;
	else if('0'<=ch&&ch<='9')
		digit++;
	else if(ch=='\n'||ch==' ')
		blank++;
	else
		other++;
	return letter,blank,digit,other;
}

int main()
{
	int n;
	char ch;
	scanf("%d",&n);
	getchar();//我快吐了，写了两天才发现这里要把输入的回车吃掉 
	for(int i=1;i<=n;i++)
	{
		scanf("%c",&ch);
		todo(ch);
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
}
