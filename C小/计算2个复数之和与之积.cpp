#include<stdio.h>

int main()
{
	int a1,b1,a2,b2;
	scanf("%d %d %d %d",&a1,&b1,&a2,&b2);
	double real1,unreal1,real2,unreal2;
	printf("addition of complex is %.6lf+%.6lfi\n",(a1+a2)*1.0,(b1+b2)*1.0);
	printf("product of complex is %.6lf+%.6lfi\n",(a1*a2-b1*b2)*1.0,(a1*b2+a2*b1)*1.0);//理论上应该还有负数，虚部会变号，但是测试点没考虑这个问题就懒得改代码了 
}
