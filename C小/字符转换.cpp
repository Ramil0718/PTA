/*#include<stdio.h>
#include<string.h>

int main()
{
	char a[81];
	gets(a);
	for(int i=0;i<=strlen(a);i++)
	{
		if('0'<=a[i]&&a[i]<='9')
		{
			printf("%c",a[i]);
		}
	}
}
有一个点说是前导0过不了，没看懂是什么意思*/

#include<stdio.h>
int main()
{
    int i=0;
    char s;
    do
    {
        s=getchar();
        if(s>='0'&&s<='9')
        {
            if(i==0&&s=='0')
            {
                continue;
            }
            else
            {
                i++;
                printf("%d",s-'0');
            }
        }
    }while(s!='\n');
    if(i==0)
        printf("0");
} 
