#include <stdio.h>


void CharPyramid( int n, char ch ){
    int i,j,k,m;
    m = n;
    for(i=1;i<=n;i++,m--)//����ǲ��� 
	{
        for(j=m;j>0;j--)//����ǿո� 
            if(j != 1)
            {
                printf(" ");
            }
        for(k=i;k>0;k--)//������ַ� 
            printf("%c ", ch);
        printf("\n");
    }
}

int main()
{    
    int n;
    char ch;

    scanf("%d %c", &n, &ch);
    CharPyramid(n, ch);
    
    return 0;
}

/* ����������д�� */

