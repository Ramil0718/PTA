#include<stdio.h>

int main()
{
	int a1,b1,a2,b2;
	scanf("%d %d %d %d",&a1,&b1,&a2,&b2);
	double real1,unreal1,real2,unreal2;
	printf("addition of complex is %.6lf+%.6lfi\n",(a1+a2)*1.0,(b1+b2)*1.0);
	printf("product of complex is %.6lf+%.6lfi\n",(a1*a2-b1*b2)*1.0,(a1*b2+a2*b1)*1.0);//������Ӧ�û��и������鲿���ţ����ǲ��Ե�û���������������øĴ����� 
}
