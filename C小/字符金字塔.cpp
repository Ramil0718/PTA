#include <stdio.h>


void CharPyramid( int n, char ch ){
    int i,j,k,m;
    m = n;
    for(i=1;i<=n;i++,m--)//这个是层数 
	{
        for(j=m;j>0;j--)//这个是空格 
            if(j != 1)
            {
                printf(" ");
            }
        for(k=i;k>0;k--)//这个是字符 
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

/* 请在这里填写答案 */

