#include <stdio.h>


void printdigits( int n )
{
    if(n<10)
	{                    //��������
        printf("%d\n", n);
    }
	else
	{                       //�ݹ�����
        printdigits(n/10);
        printf("%d\n", n%10);
    }
}

int main()
{
    int n;
    
    scanf("%d", &n);
    printdigits(n);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

