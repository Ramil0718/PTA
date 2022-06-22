#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char s[80];
    char min[80];
    scanf("%d",&n);
    getchar();//吃掉回车 
    gets(s);//输入第一个字符串 
    strcpy(min,s);//把s赋给min
	for(int i=1;i<=n;i++)
	{
		gets(s);//读入下一个字符串 
		if(strcmp(min,s)>0)//开始比较min和下一个s的大小 
		{
			strcpy(min,s);//如果min比s大，就把s赋给min 
		}
	}
	printf("Min is: %s",min);
}
