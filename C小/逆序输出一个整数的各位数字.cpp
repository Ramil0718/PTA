#include <stdio.h>
#include <stdlib.h>
 
/* ����Ҫ���д���򣬶������һ���Ǹ��������ӵ�λ��ʼ��λ�ָ������ĸ�λ���֡� */
 
int main(int argc, char *argv[]) {
	int n;
	int number;
	int m;
	scanf("%d",&n);
	m=n;
	if(n==0)
	{
		printf("0 ");
	}
	else
	{
	while(n>0)
	{
		number=m%10;
		n=n/10;
		m=n;
		printf("%d ",number);
	}
	}
	return 0;
}
