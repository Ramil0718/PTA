#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char s[80];
    char min[80];
    scanf("%d",&n);
    getchar();//�Ե��س� 
    gets(s);//�����һ���ַ��� 
    strcpy(min,s);//��s����min
	for(int i=1;i<=n;i++)
	{
		gets(s);//������һ���ַ��� 
		if(strcmp(min,s)>0)//��ʼ�Ƚ�min����һ��s�Ĵ�С 
		{
			strcpy(min,s);//���min��s�󣬾Ͱ�s����min 
		}
	}
	printf("Min is: %s",min);
}
