#include<stdio.h>

struct
{
	char name[20];
	float jiben,fudong,zhichu;
	float shiji;
}person[10086];//���鿪��㣬��һ�����ƺ���һ���ܴ��ֵ 

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",&person[i].name);
		scanf("%f",&person[i].jiben);
		scanf("%f",&person[i].fudong);
		scanf("%f",&person[i].zhichu);
		person[i].shiji=person[i].jiben+person[i].fudong-person[i].zhichu;
	}
	for(int i=0;i<n;i++)
	{
		printf("%s %.2f\n",person[i].name,person[i].shiji);
	}
}
