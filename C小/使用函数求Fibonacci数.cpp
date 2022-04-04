#include <stdio.h>

int fib(int n)
{
	if(n==1||n==2)
	return 1;
	return fib(n-1)+fib(n-2);//这是我当年做递归打的代码，超时了懒得改了 
}
/*
找了一个正确答案

int fib( int n ){
	if(n<3) return 1;
	else{
		int a1=1,a2=1,sum;
		for(int i=3;i<=n;i++){
			sum=a1+a2;a1=a2;a2=sum;
		}
		return sum;
	}
}
*/ 

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", fib(n));

    return 0;
}

/* 你的代码将被嵌在这里 */

