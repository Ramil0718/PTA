#include<stdio.h>

int main()
{
	int a,b;
	char ch;
	int flag=1;
	scanf("%d",&a);
	while((ch=getchar())!='=')
	{
		scanf("%d",&b);
		if((ch=='/')&&b==0)
		{
			flag=0;
			break;
		}
		switch(ch)
		{
			case '+':a=a+b;
				break;
			case '-':a=a-b;
				break;
			case '*':a=a*b;
				break;
			case '/':a=a/b;
				break;
			default:flag=0;
				break;
		}
		if(flag==0)
			break;
	}
	if(flag==0)
		printf("ERROR");
	else
		printf("%d",a);
}
