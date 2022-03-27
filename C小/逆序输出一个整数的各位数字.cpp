#include <stdio.h>
#include <stdlib.h>
 
/* 本题要求编写程序，对输入的一个非负整数，从低位开始逐位分割并输出它的各位数字。 */
 
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
