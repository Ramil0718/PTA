#include <stdio.h>
#include <math.h>

int prime( int p );//这个是用来判断素数的 
int PrimeSum( int m, int n );//这个是用来求和的 

int prime( int p )
{
	int flag=1;
	if(p<=1)
		return 0;
	else
	{
		for(int i=2;i<=p/2;i++)
		{
			if(p%i==0)
			{
				flag=0;
				break;
			}

		}
		if(flag==1)
			return 1;
		else
			return 0;
	}

}

int PrimeSum( int m, int n )
{
	int i,s=0;
	for(i=m;i<=n;i++)
    {
		if(prime(i))
            s+=i;
    }
    return s;
}
    
int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

/* 你的代码将被嵌在这里 */

