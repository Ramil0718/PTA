#include <stdio.h>

int sum( int n )
{
	long int fs=0;
	if(n<1)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	fs=sum(n-1)+n;
	return fs;
}

int main()
{
    int n;

    scanf("%d", &n);
    printf ("%d\n", sum(n));

    return 0;
}

/* 你的代码将被嵌在这里 */

