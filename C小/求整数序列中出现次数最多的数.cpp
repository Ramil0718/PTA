#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],max = -1,ji;
	for(int i=0;i<n;i++)//��������
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)//�������������ε�����
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(a[i] == a[j])
			{
				count++;
			} 
		} 
		if(count>max)//��¼�³�������������
		{
			max = count;
			ji = a[i];
		}
	}
	printf("%d %d",ji,max);//�������
 } 
