#include<stdio.h>
int main()
{
	int i,k,j;
	char line[80];
	k=0;
	while((line[k]=getchar())!='\n')//�����ַ������Իس�����β
	{
		k++;//ͳ�������ַ����ĳ���
	}
	i=0;
	j=k;//����kֵ
	k=k-1;//k = k-1����˼�ǣ�������±������k-1
	while(i<k)
	{
		if(line[i]!=line[k])//�ַ����Ƚ��ж�
			break;
		i++;
		k--;
	}
	for(int i=0;i<j;i++)//����ַ���
	{
		printf("%c",line[i]);
	}
	printf("\n");
	if(i>=k)//��ӡ�жϽ��
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
}
