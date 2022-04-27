#include<stdio.h>


int main()
{
	char ch,find;
	scanf("%c\n",&find);
	int flag=0;
	int cnt=-1;
	int ans;
	do
	{
		ch=getchar();
		cnt++;
		if(ch==find)
		{
			flag=1;
			ans=cnt;
		}
	}while(ch!='\n');
	if(flag==0)
		printf("Not Found");
	else
		printf("index = %d",ans);
}
