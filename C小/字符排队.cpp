#include<stdio.h>
#include<string.h>

int sort(char a[81],int len)//一个简单的冒泡 
{
	char t;
	for(int i=0;i<len-1;i++)
	{
		for(int j=0;j<len-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}

int main()
{
	char a[81];
	gets(a);
	int len=strlen(a);
	sort(a,len);
	puts(a);
}
