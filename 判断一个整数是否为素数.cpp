/*#include<stdio.h>


int main()
{
	long m;
	int flag=1;
	scanf("%ld",&m);
	if(m<0)
		flag=0;
	for(long i=2;i<m;i++)
	{
		if(m%i==0)
			flag=0;
	}
	if(m==0)
		flag=0;
	if(m==1)
		flag=0;
	if(flag==1)
		printf("Yes");
	else
		printf("No");
}
���������ǳ�ʱ 
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	int n,i,limit;
	scanf("%d",&n);
	if(n<=1)//�ֱ�����1��2�Ĵ���
	{
		printf("No\n");
	}
	else if(n==2)
	{
		printf("Yes\n");
	}
	else
	{
		limit=sqrt(n); //���жϺ��������ܵ�ȡֵ��Χ������Ӧ�������˸���֦�� 
		for(i=2;i<=limit;i++)
		{
			if(n%i==0)
			{
				break;
			}
		}
		if(i>limit)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
}
