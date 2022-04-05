#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
    
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int fib( int n ){
	int a=1, b=1, sum=0;
	if (n==1||n==2) sum=1;
	else {
		n-=2;
		while (n--) {
		sum=a+b;
		a=b; b=sum;
	}
	}
	
	return sum;
}
void PrintFN( int m, int n ){
	int item=0, i=1; 
	while (fib(i)<m) i++;
	while (fib(i)<=n){
		item++;
		if (item==1) printf ("%d", fib(i));
		else printf (" %d", fib(i));
		i++;
	}
	if (!item) printf ("No Fibonacci number");
}
