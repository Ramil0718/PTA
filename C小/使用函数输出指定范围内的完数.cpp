#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );
    
int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int factorsum( int number )
{
    int i,s=0;
    for(i=1;i<=number/2;i++)
    {
        if(number%i==0)
            s+=i;
    }
    return s;
}
void PrintPN( int m, int n )
{
    int i,g=0,j;
    for(i=m;i<=n;i++)
    {
        if(factorsum(i)==i)
        {
            g++;
            printf("%d = 1",i);
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                printf(" + %d",j);
            }
            printf("\n");
        }
    }
    if(g==0)
        printf("No perfect number");
}


