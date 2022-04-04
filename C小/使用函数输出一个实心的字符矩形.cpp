#include <stdio.h>

void matrix(int length, int width, char ch)
{
	for(int i=width;i>0;i--)
	{
		for(int j=length;j>0;j--)
		{
			printf("%c",ch);
			if(j==1)
				printf("\n");
		}
	}
}

int main()
{    
    int length, width;
    char ch;

    scanf("%d %d %c", &length, &width, &ch);
    matrix(length, width, ch);

    return 0;
}

/* 请在这里填写答案 */

