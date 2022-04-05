#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );
    
int main()
{
    int m, n;
  
    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int narcissistic( int number )
{
    int h,x=number,sum=0;
    int count = 0;//λ�� 
    while(x>0){//����λ�� ,��ֻ��������λ�������(Ҳ����û�������Ŀ?) 
        x/=10;
        count++;
    } 
    x=number;//���� 
    
    while(x>0)
    {
        int k=1;
        for(int i=1;i<=count;i++){//N���� 
            k*=x%10;
        }
        sum=sum+k;
        x=x/10;
    }
    if(sum==number)
        return 1;
    else
        return 0;
}
void PrintN( int m, int n )
{
    int i;
    for (i=m+1;i<n;i++)
    {
        if(narcissistic(i)==1)
            printf ("%d\n",i);
    }
}
