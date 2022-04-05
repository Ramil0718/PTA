#include <stdio.h>
#include <math.h>

int prime( int p );
void Goldbach( int n );
    
int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;
    if ( m%2 ) m++;
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
        Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}

/* 你的代码将被嵌在这里 */
int prime( int p )
{
	int flag=1;
	for(int i=2;i<=p/2;i++)
	{
		if(p%i==0)
			flag=0;
	}
	if(p==1)
		flag=0;
	if(flag==1)
		return 1;
	else
		return 0;
}

void Goldbach( int n )
{
	int p,q;
	for(int i=2;i<n;i++)
	{
		if(prime(i)&&!(i%2==0))
		{
			p=i;
			for(int j=i;j<n;j++)
			{
				if(prime(j)&&!(j%2==0))
				{
				q=j;
					if(q+p==n)
						break;	
				}	
			}	
			if(p+q==n)
				break;	
		}
	}
	printf("%d=%d+%d",n,p,q);	
}
